import numpy as np
import pandas as pd

def promedios(datos):
    """
    Calcula el promedio de calificaciones por estudiante.
    recibe como paramtro un DataFrame de pandas con las calificaciones de los estudiantes.
    retorna un nuevo DataFrame con el promedio de los estudiantes.
    """

    # Calcular el promedio (mean) por fila (axis=1)
    promedio_estudiante = datos.mean(axis=1)

    # Crear un nuevo DataFrame con los promedios
    df_promedio = pd.DataFrame({'Promedios:': promedio_estudiante})

    return df_promedio

def nota_alta(datos):
    """
    obtiene la nota más alta de los estudiantes.
    recibe como paramtro un DataFrame de pandas con las calificaciones de los estudiantes.
    retorna un nuevo DataFrame con la nota más alta de los estudiantes.
    """

    # Obtiene el valor más alto (max) por fila (axis=1)
    nota_alta = datos.max(axis=1)

    # Crear un nuevo DataFrame con las notas más altas de los estudiantes
    df_nota_alta = pd.DataFrame({'Nota más alta por estudiante:': nota_alta})

    return df_nota_alta

def suma_total(datos):
    """
    Calcula la suma de las calificaciones por estudiante.
    recibe como paramtro un DataFrame de pandas con las calificaciones de los estudiantes.
    retorna un nuevo DataFrame con la suma de las notas.
    """

    # Calcula la suma de valores (sum) por fila (axis=1)
    suma = datos.sum(axis=1)

    # Crear un nuevo DataFrame con la suma
    df_suma = pd.DataFrame({'Suma total de calificaciones por asignatura:': suma})

    return df_suma


# Establecer semilla para generar números aleatorios
np.random.seed(42)

# Generar un conjunto de datos aleatorio de calificaciones (enteros entre 50 y 100)
notas = np.random.randint(50, 101, size=(5, 5)) #5 Estudiantes 5 Materias <- En ese orden

# Crear un arreglo nombres de estudiantes
nombre_estudiantes = ["Jean Zúñiga", "Axel Garita","Steven Otarola","Andrey Guerreo","Luis Acuña"]

# Crear un arreglo de materias
materias = ["Matemáticas", "Biología", "Sociales", "Español", "Química"]

# Crear un DataFrame para visualizar los datos
datos = pd.DataFrame(notas, columns=materias, index=nombre_estudiantes)
datos.index.name = "Estudiantes"

#El DataFrame de los estudiantes
print(datos)

# Promedio de las notas de los estudiantes
print(promedios(datos))

# La nota más alta del estudiante
print(nota_alta(datos))

# Suma de las notas de los estudiantes
print(suma_total(datos))