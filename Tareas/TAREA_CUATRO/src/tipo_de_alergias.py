from alergias import Alergia
"""
@file
@brief Clase para gestionar y procesar listas de elementos emparejados o no.

Esta clase recibe una lista de elementos emparejados por un espacio o por separado y realiza diversas operaciones para procesarlos.
"""

class TipoDeAlergia:
    """
    @brief Clase para gestionar y procesar listas de elementos emparejados o no.

    Atributos:
    - `lista`: Lista de elementos ingresados.
    - `diccionario_resultante`: Diccionario resultante de elementos emparejados.
    - `diccionario_no_encontrado`: Diccionario de elementos no encontrados.
    - `elementos_no_formato`: Lista de elementos que no cumplen con el formato esperado.
    - `elementos_no_econtrados`: Lista de elementos no encontrados.
    - `elementos_encontrados`: Lista de elementos encontrados.
    """

    def __init__(self, *arg):
        """
        @brief Constructor de la clase TipoDeAlergia.

        @param arg: Lista de elementos a ser gestionados.
        """

        self.lista = list(arg)

        self.diccionario_resultante = {}
        self.diccionario_no_encontrado = {}
        self.elementos_no_formato = []
        self.elementos_no_econtrados = [] #Alamcena los elementos no encontrados
        self.elementos_encontrados = [] #Alamcena los elementos encontrados

    """@brief Función que procesa los elementos ingresados correctamente  
        y también los que sólo se ingresó el nombre o numero"""
    def crear_diccionario_desde_lista(self):
        """
        @brief Función que procesa los elementos ingresados correctamente y los que solo contienen el nombre o número.

        @return Diccionario resultante y lista de elementos no formateados.
        """
        for elemento in self.lista:
            # Convertir el elemento a una cadena para asegurar la búsqueda de substrings
            elemento_str = str(elemento)
            # Dividir la cadena en palabras
            palabras = elemento_str.split()

            # Bandera para indicar si se encontró el formato específico
            formato_especifico_encontrado = False

            # Buscar claves seguidas de números en las palabras
            for i in range(len(palabras) - 1):
                palabra_actual = palabras[i]
                palabra_siguiente = palabras[i + 1]

                if palabra_actual.isalpha() and palabra_siguiente.isdigit():
                    self.diccionario_resultante[palabra_actual] = int(palabra_siguiente)
                    formato_especifico_encontrado = True
                else:
                    self.elementos_no_formato.append(elemento)

            # Verificar si el formato específico fue encontrado
            if not formato_especifico_encontrado:
                self.elementos_no_formato.append(elemento)

        return self.diccionario_resultante, self.elementos_no_formato
    
    """@brief Función que revisa si los elementos ingresados correctamente, o sea; en pares
        se encuentran en el diccionario de alergias y retorna la puntuacion para los que si están"""
    def revicionPares(self):
        """
        @brief Función que revisa si los elementos ingresados correctamente (en pares) están en el diccionario de alergias.

        @return Puntuación de alergia generada por los elementos que están en el diccionario.
        """
        puntuacion_alergia = 0
        for clave, valor in self.diccionario_resultante.items():
            if clave not in Alergia.alergias or Alergia.alergias[clave] != valor:
                # Si la clave no está en alergias o el valor no coincide, ignorar y no actualizar alergias
                print(f"Ignorando clave: {clave}, valor: {valor}")
                
                
            elif clave in Alergia.alergias or Alergia.alergias[clave] == valor:
                Alergia.alergias[clave] = valor
                puntuacion_alergia += valor
                
                
        return puntuacion_alergia
    
    """@brief Esta función revisa si los elementos que ingresaron sin par están en el diccionario de alergias
    y también retorna la puntuacion de alergia generada por los elementos que si están en el diccionario"""
    def revicion_no_pares(self):
        """
        @brief Función que revisa si los elementos que se ingresaron sin pares están en el diccionario de alergias.

        @return Puntuación de alergia generada por los elementos que están en el diccionario.
        """

        puntuacion_alergia = 0  
        for elemento in self.elementos_no_formato:
            if elemento not in Alergia.alergias.values() and elemento not in Alergia.alergias.keys():
                self.elementos_no_econtrados.append(elemento)
            else:
                self.elementos_encontrados.append(elemento)
        # Calcular la puntuación de alergia acumulativa para todos los elementos encontrados
        for elemento in self.elementos_encontrados:
            if elemento in Alergia.alergias:
                # Si el elemento es una clave en el diccionario, sumar su valor
                puntuacion_alergia += Alergia.alergias[elemento]
            elif elemento in Alergia.alergias.values():
                # Si el elemento es un valor en el diccionario, sumar directamente
                puntuacion_alergia += elemento
        return  puntuacion_alergia
    
    """@brief Esta funcion agrega al diccionario los elementos que se ingresaron sin par, o sea; solo el nombre y el valor
     y los añade al diccionario con los valores que se ingresaron con pares"""
    def agregar_diccionario(self):
        """
        @brief Función que agrega al diccionario los elementos que se ingresaron sin pares.

        @return Diccionario resultante.
        """
        for elemento in self.elementos_encontrados:
            if elemento in Alergia.alergias:
                self.diccionario_resultante[elemento] = Alergia.alergias[elemento]
            elif elemento in Alergia.alergias.values():
                clave = next(clave for clave, valor in Alergia.alergias.items() if valor == elemento)
                self.diccionario_resultante[clave] = elemento

        return self.diccionario_resultante
    
    """@brief Esta función revisa si todos los valores ingresados en pares, estan en el diccioanrio alergias"""
    def comparar_diccionarios(self):
        """
        @brief Función que compara los diccionarios de la clase y el diccionario de alergias.

        @return Diccionario con elementos encontrados y diccionario con elementos no encontrados.
        """
        diccionario_comparado = {}
        for clave, valor in Alergia.alergias.items():
                if clave in self.diccionario_resultante and self.diccionario_resultante[clave] == valor:
                    diccionario_comparado[clave] = valor
        for clave, valor in self.diccionario_resultante.items():
            if clave not in Alergia.alergias:
                self.diccionario_no_encontrado[clave] = valor
                

        return diccionario_comparado, self.diccionario_no_encontrado
            

    """@brief Funciones que separan las listas ingresadas por strings y enteros.
    Mejor implementar en la parte del menu
    Retora las listas cuyos elementos no fueron encontrados"""

    def separar_string_int(self):
        """
        @brief Función que separa las listas ingresadas por strings y enteros.

        @return Listas de strings y enteros cuyos elementos no fueron encontrados.
        """
        self.strings_lista = []
        self.enteros_lista = []

        for elemento in self.elementos_no_econtrados:
            try:
            # Intenta convertir el elemento a un entero
                nuevo_elemento = int(elemento)
                if nuevo_elemento not in Alergia.alergias.values():
                    self.enteros_lista.append(nuevo_elemento)

            except ValueError:
            # Si no se puede convertir a entero, deja el elemento sin cambios
                self.strings_lista.append(elemento)

        return list(set(self.strings_lista)), list(set(self.enteros_lista))

 
"""
#Como se usa
# Lista para almacenar las entradas del usuario
lista = []

while True:
    entrada_usuario = input("Ingrese elementos (presione Enter para salir): ")
    
    # Salir del bucle si el usuario presiona Enter
    if entrada_usuario == "":
        break
    
    # Agregar la entrada del usuario a la lista
    lista.append(entrada_usuario)

    # Intentar convertir la entrada a un entero
    try:
        elemento = int(entrada_usuario)
    except ValueError:
        # Si la conversión a entero falla, usar la entrada como string
        elemento = entrada_usuario

    # Agregar el elemento a la lista
    lista.append(elemento)

# Crear una instancia de la clase con las entradas del usuario
manejador_diccionario = TipoDeAlergia(*list(set(lista)))

# Obtener el resultado y la lista de elementos no formateados
resultado, no_formato = manejador_diccionario.crear_diccionario_desde_lista()

#LLamado de la funcion a separar
#letras, enteros = manejador_diccionario.separar_string_int()

# Imprimir resultados
print("Diccionario resultante:", resultado)
print("Elementos que no siguen el formato esperado:", no_formato)
puntacionPar = manejador_diccionario.revicionPares()
puntuacionNoPar = manejador_diccionario.revicion_no_pares()
diccionario = manejador_diccionario.agregar_diccionario()
puntuacion = puntuacionNoPar+puntacionPar
#print("Elementos que no estan", no_encontrados)
#print("Elementos que si están", encontrados)
print("Puntuacion par", puntuacion)
print("Diccionario de alergias", diccionario)
"""
