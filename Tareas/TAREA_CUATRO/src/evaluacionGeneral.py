from tipo_de_alergias import TipoDeAlergia
"""
@file
@brief Clase para realizar una evaluación general de alergias.
"""

class EvaluacionGeneral:
    """
    @brief Clase para realizar una evaluación general de alergias.

    Atributos:
    - `tipo_alergia_instancia`: Instancia de la clase TipoDeAlergia para gestionar tipos de alergias.
    """

    def __init__(self, *alergias):
        """
        @brief Constructor de la clase EvaluacionGeneral.

        @param alergias: Lista de alergias a ser gestionadas.
        """

        self.tipo_alergia_instancia = TipoDeAlergia(*alergias)
        self.tipo_alergia_instancia.crear_diccionario_desde_lista()
        self.tipo_alergia_instancia.revicionPares()
        self.tipo_alergia_instancia.revicion_no_pares()
        self.tipo_alergia_instancia.agregar_diccionario()

    def calcular_promedio(self):
        """
        @brief Calcula el promedio de las alergias identificadas y las no identificadas.

        Calcula el promedio de alergias identificadas en comparación con aquellas no identificadas.
        Imprime el resultado en formato porcentaje.
        """

        diccionario, no_diccionario = self.tipo_alergia_instancia.comparar_diccionarios()
        enteros, letras = self.tipo_alergia_instancia.separar_string_int()

        total_elementos = len(diccionario) /(len(no_diccionario) + len(enteros) + len(letras))

        
        print("El promedio entre lo no reconocido y alergias reconocidas: {:.2f}%".format(total_elementos))
