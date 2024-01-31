from alergias import Alergia

"""
@file
@brief Esta clase es encargada de calcular y evaluar las alergias del usuario.
"""
class EvaluarAlergias:
    """
    @brief Clase para evaluar y gestionar las alergias del usuario.

    Atributos:
    - `puntuacion`: Puntuación de alergias del usuario.
    """
    def __init__(self, puntuacion):
        """
        @brief Constructor de la clase EvaluarAlergias.

        @param puntuacion: Puntuación de alergias del usuario.
        """
        self.puntuacion = puntuacion

    @staticmethod
    def evaluar_alergias(self):
        """
        @brief Método estático para calcular las alergias a partir de la puntuación de alergias.

        @param self: Instancia de la clase EvaluarAlergias.

        @return Lista de alergias sensibles basadas en la puntuación.
        """

        alergia = []
        for elemento, valor in Alergia.alergias:
            if self.puntuacion & valor:  # Verificar si el valor está presente en la puntuación
                alergia.append(elemento)
        return alergia

    def imprimir_evaluacion(self):
        """
        @brief Imprime la puntuación de alergias y las alergias sensibles con sus respectivos valores.
        """
        print(f"La puntuacion del paciente es {self.puntuacion}")
        print("Alergias del paciente:")
        for elemento, valor in Alergia.alergias.items(): #alergias de la clase Alergias
            if self.puntuacion & valor:
                print(f"-{elemento}: {valor}")
