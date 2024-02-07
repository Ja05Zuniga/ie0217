import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

#Inicio de funciones
def leer_archivo_csv(archivo_csv):
    try:
        # Lee el archivo CSV completo
        df = pd.read_csv(archivo_csv)

        # Elimina los valores nulos en todo el DataFrame
        df = df.dropna()

        # Convierte los valores posibles a enteros
        df = df.apply(pd.to_numeric, errors='ignore')

        return df
    except pd.errors.EmptyDataError:
        return None

#Funcion que devuelve los datos: aerolinea, despegues y pasajeros
def generar_info_aerolinea(datos_limpios):
    for aerolinea, grupo in datos_limpios.groupby('UNIQUE_CARRIER_NAME'):
        despegues = grupo['DEPARTURES_PERFORMED'].sum()
        pasajeros = grupo['PASSENGERS'].sum()
        #Solo muestra las aerolineas que presenten despegues y pasajeros mayores a cero
        if despegues > 0 and pasajeros > 0:
            yield aerolinea, despegues, pasajeros

#Función que muestra las ciudades más transitadas, el semetre donde se presentó ese transito y el número de pasajeros
def ciudad_destino_max(datos_limpios):
    for ciudad, grupo in datos_limpios.groupby('DEST_CITY_NAME'):
        pasajeros_por_trimestre = grupo.groupby('QUARTER')['PASSENGERS'].sum()
        if pasajeros_por_trimestre.max() > 0:
            trimestre_max = pasajeros_por_trimestre.idxmax()
            pasajeros_max = pasajeros_por_trimestre.max()
            yield pasajeros_max, ciudad, trimestre_max

"""#############
FIN DE FUNCIONES
################"""
# Reemplaza 'archivo.csv' con el nombre del archivo CSV y direción
nombre_archivo = "C:/Users/Jean2/OneDrive/Escritorio/Estructuras/ie0217/Tareas/TAREA_CINCO/src/T_T100D_SEGMENT_US_CARRIER_ONLY.csv"
datos_limpios = leer_archivo_csv(nombre_archivo)

#Variables que almacena la arolinea con mayor numero de pasajeros
max_pasajeros = 0 #Maximo de pasajeros
max_pasajeros_despegues = 0 #Numero de despegues de la aerolinea
aerolinea_max_pasajeros = "" #Nombre de la aerolinea

"""Variables que almacenan el nombre de la ciudad con el mayor numero de vuelo, numero
 de visitantes y el trimestre donde se presentó el mayor numero de visitantes."""
num_visitantes = 0 #Mayor numero de visitantes
trimestre_mas = "" #Trimestre que se presentó ese mayor mayor numero de visitantes
nombre_ciudad = "" #Nombre de la ciudad con mayor numero de visitantes

"""Se obtendrá la aerolinea que haya registrado el mayor numero de pasajeros para
    se comparada con la aerolinea que regidtró el mayor numero de pasajeros"""
aerolinea_mayor_despegues = "" #Nombre de la aerolinea que registró el mayor numero de despegues
numero_de_despepegues_aerolinea = 0 #Numero de despegues efectivos de dicha aerolinea
numero_de_pasajeros_aerolinea = 0 #El numero total de pasajeros que usaron dicha aerolinea

"""#####################################
Inicio de Iteradores y calculos directos
########################################"""
if datos_limpios is not None:
    print("Datos limpios sin valores nulos:")

    """ITERADOR QUE POR SI SOLO MUESTRA EL NOMBRE DE LAS AEROLINEAS CON EL NUMERO TOTAL DE PASAJEROS TRANSPORTADOS
        Y DESPEGUES EFECTIVOS REGITRADOS"""
    #Retorna los nombres de las aerolineas, numero de despegues y numero de pasajeros
    for aerolinea, despegues, pasajeros in generar_info_aerolinea(datos_limpios):
        
        #Escoje la aerolinea con mayor numero de pasajeros 
        if pasajeros > max_pasajeros:
            max_pasajeros = pasajeros
            max_pasajeros_despegues = despegues
            aerolinea_max_pasajeros = aerolinea

        #Escoje la aerolinea que registró el mayor numero de despegues
        if despegues>numero_de_despepegues_aerolinea:
            numero_de_despepegues_aerolinea = despegues
            numero_de_pasajeros_aerolinea = pasajeros
            aerolinea_mayor_despegues = aerolinea

    #Imprime la aerolinea que transportó el mayor número de pasajeros con sus respectivos vuelos
    print(f"\nAerolínea con más pasajeros: {aerolinea_max_pasajeros}, pasajeros totales: {max_pasajeros}, número de despegues: {max_pasajeros_despegues}")
    
    #Imprime la aerolinea que registró el mayor número de despegues con sus respectivos vuelos
    print(f"\nAerolínea con mayor número de despegues: {aerolinea_mayor_despegues}, pasajeros totales: {numero_de_pasajeros_aerolinea}, número de despegues: {numero_de_despepegues_aerolinea}")

    """ITERADOR QUE MUESTRA EL TRIMESTRE CON MAYOR REPORTE DE VUELOS, LA CIUDAD DONDE SE PRESENTÓ EL MAYOR NUMERO DE 
        VUELOS DE DESTINO, ASÍ COMO EL NÚMERO DE PASAJEROS QUE LLEGARON A ESA CIUDAD"""
    for pasajeros, ciudad, trimestre in ciudad_destino_max(datos_limpios):
            """Con este iterador se puede obtener el nombre de la ciudad, número total de visitantes y el 
            trimestre que se presentó el mayor número de visitantes en toda la base de datos"""        
            if pasajeros > num_visitantes:
                num_visitantes = pasajeros
                nombre_ciudad = ciudad
                trimestre_mas = str(trimestre) #El trimestre se convirtió a entero en la limpieza del DataFrame.
            
    #Imprime la ciudad con el mayor número de visitantes, el número de visitantes total y en cuál trimestre se presentó el mayor numero de visitas
    print(f"\nLa ciudad con mayor número de visitantes es {nombre_ciudad}, con un número de {num_visitantes} visitantes en trimestre: {trimestre_mas}")

else:
    print("El archivo CSV está vacío o no se pudo leer.")

"""############
    Graficación
    ############"""
# Gráfico de barras con Seaborn para mostrar el numero de pasajeros por aerolínea
df_pasajeros = pd.DataFrame(generar_info_aerolinea(datos_limpios), columns=['Aerolínea', 'Despegues', 'Pasajeros'])
df_pasajeros = df_pasajeros.sort_values(by='Pasajeros', ascending=False)

plt.figure(figsize=(12, 6))
ax = sns.barplot(data=df_pasajeros, x='Aerolínea', y='Pasajeros', palette='viridis')
ax.set(xlabel='Aerolínea', ylabel='Número de Pasajeros')
ax.set_title('Número de Pasajeros por Aerolínea')
ax.set_xticklabels(ax.get_xticklabels(), rotation=45, ha='right')
plt.tight_layout()  # Ajusta automáticamente el diseño para evitar superposiciones
plt.show()

# Gráfico de pastel con Seaborn para mostrar la distribución de pasajeros por trimestre en la ciudad con más visitantes
df_ciudad_destino = pd.DataFrame(ciudad_destino_max(datos_limpios), columns=['Pasajeros', 'Ciudad', 'Trimestre'])
df_ciudad_destino = df_ciudad_destino.sort_values(by='Pasajeros', ascending=False).head(5)

total_pasajeros = df_ciudad_destino['Pasajeros'].sum() #Muestra el numero total de las ciudades más visitadas en el segundo semestre

plt.figure(figsize=(8, 8))
plt.pie(df_ciudad_destino['Pasajeros'], labels=[f"{ciudad} ({pasajeros})" for ciudad, pasajeros in zip(df_ciudad_destino['Ciudad'], df_ciudad_destino['Pasajeros'])], autopct='%1.1f%%', startangle=90, colors=sns.color_palette('pastel'))
plt.title(f'Distribución de Pasajeros a las ciudades más visitadas del Segundo Trimestre del 2023\nTotal de Pasajeros: {total_pasajeros}')
plt.show()