"""
@file
@brief Esta clase almacena todas las alergias.
"""

class Alergia:
    """
    @brief Clase para representar alergias y gestionarlas.
    
    Atributos:
    - `alergias`: Diccionario que contiene el nombre de la alergia como clave y su valor asociado.
    """
    alergias = {
    "Huevos": 1,
    "Cacahuetes": 2,
    "Mariscos": 4,
    "Fresas": 8,
    "Tomates": 16,
    "Chocolate": 32,
    "Polen": 64,
    "Gatos": 128,
    "Sardinas": 256,
    "Gluten": 512,
    "Huevo": 1024,
    "Nueces": 2048
    }
    
    """
        @brief Constructor de la clase Alergia.

        @param nombre: Nombre de la alergia.
        @param valor: Valor asociado a la alergia.
        """
    
    def __init__(self, nombre, valor):
        self.nombre = nombre
        self.valor = valor
        Alergia.alergias[nombre] = valor

    def __str__(self):
        """
        @brief Representación en cadena de la instancia.

        @return Cadena representativa de la instancia.
        """
        return f"Alergia: {self.nombre}, Valor: {self.valor}"
    
    """
        @brief Imprime todas las alergias presentes en el diccionario.

        Este método de clase recorre el diccionario de alergias e imprime cada una de ellas.
        """
    @classmethod
    def imprimir_todas_alergias(cls):
        for alergia in cls.alergias:
            print(f"Alergia: {alergia[0]}, Valor: {alergia[1]}")

    """
        @brief Imprime una alergia específica.

        @param nombre_alergia: Nombre de la alergia a imprimir.

        Este método de clase busca la alergia con el nombre dado y la imprime si se encuentra.
        """
    @classmethod
    def imprimir_alergia_especifica(cls, nombre_alergia):
        alergia_encontrada = next(((nombre, valor) for nombre, valor in cls.alergias if nombre == nombre_alergia), None)
        if alergia_encontrada:
            print(f"Alergia: {alergia_encontrada[0]}, Valor: {alergia_encontrada[1]}")
        else:
            print(f"No se encontró la alergia '{nombre_alergia}'")