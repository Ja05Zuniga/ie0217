import pandas as pd
from kaggle.api.kaggle_api_extended import KaggleApi

#Nueva notación para el caso de los paquetes
from . import clustering #Se importa el archivo clustering.py
from . import regresiones #Se importa el archivo regresiones.py

# Crear una instancia de KaggleApi
api = KaggleApi()

# Autenticar con tus credenciales de Kaggle
api.authenticate()  

# Descargar el dataset especificando el nombre del dataset y la carpeta de destino
dataset_name = "akshaydattatraykhare/car-details-dataset"
api.dataset_download_files(dataset_name, path="./", unzip=True)

#Limpiar un poco los datos
df = pd.read_csv("CAR DETAILS FROM CAR DEKHO.csv")
df.dropna(inplace=True) #Eliminar filas con valores faltantes
df.drop_duplicates(inplace=True) #Eliminar duplicados

# Ajustar tipos de datos
#OJO estos datos solo existen mientras el programa se ejecuta
df['year'] = df['year'].astype(int)
df['selling_price'] = df['selling_price'].astype(int)
df['km_driven'] = df['km_driven'].astype(int)

"""Predecir cómo varían los precios de los vehículos a lo largo de los años y
si existe alguna tendencia significativa"""

#Obtener las caracteristicas que se deseán analisar
X = df[['year']]
y = df['selling_price']

titulo_lineal = "Regresión Lineal: Años vs. Precio de Venta"
titulo_nolineal = "Regresión No Lineal: Años vs. Precio de Venta"
eje_x = "Años"
eje_y = "Precio de Venta"

#Metodo de regresion lineal
lineal = regresiones.RegresionLineal(X, y)
lineal.regresion_lineal() #Aplicar el metodo de regresión lineal
print("Rendimiento del modelo lineal: Años vs Precio de Venta")
lineal.redimiento_modelo() #Obtener el rendimiento del modelo
lineal.graficos_regresion_lineal(titulo_lineal, eje_x, eje_y) #Gráfico

#Metodo de regresión no lineal
noLineal = regresiones.RegresionNoLineal(X, y)
noLineal.regrecion_no_lineal()#Aplicar el metodo de regresión no lineal
print("Rendimiento del modelo no linal: Años vs Precio de Venta")
noLineal.redimiento_modelo_no_lineal()#Obtener el rendimiento del modelo de regresión no lineal
noLineal.graficos_regresion_nolineal(titulo_nolineal, eje_x, eje_y)#Gráfico

"""Examina la distribución de los kilómetros recorridos por los vehículos y 
ver si hay alguna relación con el precio de venta"""

#Obtener las caracteristicas que se deseán analisar
X2 = df[['km_driven']]
y2 = df['selling_price']

titulo_lineal = "Regresión Lineal: Precio de Venta vs. Kilómetros Recorridos"
titulo_nolineal = "Regresión No Lineal: Precio de Venta vs. Kilómetros Recorridos"
eje_x = "Kilómetros Recorridos"
eje_y = "Precio de Venta"

#Metodos de regresión lineal
lineal2 = regresiones.RegresionLineal(X2, y2) #Se toma como objeto
lineal2.regresion_lineal()#Aplicar el metodo de regresión lineal
print("Rendimiento del modelo linal: kilometros manejados vs Precio de Venta")
lineal2.redimiento_modelo()#Obtener el rendimiento del modelo de regresión lineal
lineal2.graficos_regresion_lineal(titulo_lineal, eje_x, eje_y)#Gráfico

#Metodos de regresión no lineal
noLineal2 = regresiones.RegresionNoLineal(X2, y2)
noLineal2.regrecion_no_lineal()#Aplicar el metodo de regresión no lineal
print("Rendimiento del modelo no linal: kilometros manejados vs Precio de Venta")
noLineal2.redimiento_modelo_no_lineal()#Obtener el rendimiento del modelo de regresión no lineal
noLineal2.graficos_regresion_nolineal(titulo_nolineal, eje_x, eje_y)#Gráfico

"""Emplear algoritmos de clustering. Para este caso K-Means"""
# Seleccionar características relevantes para clustering
columns = ['year', 'selling_price', 'km_driven']
caracteristicas = df[columns]

#Calcula y devuelve el numero de clusters adecuado dependiendo del archivo
num_cluster = clustering.metodo_del_codo(caracteristicas) #Se toma como objeto

#Toma las caracteristicas que se deseán agrupar junto con el número de clusters calculado anteriormente.
#Muestra dos gráficas:
#Un gráfico de años con respecto a precios
#Un gráfico 3D que agrupa los años, precio y kilometros.
clustering.k_means(caracteristicas, num_cluster)