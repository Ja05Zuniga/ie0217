# Define excepciones personalizadas en Python
class InvalidAgeException(Exception):
    """Se levanta cuando el valor de entrada es menor que 18."""
    pass

# Debes adivinar este número
numero = 18

try:
    numero_ingresado = int(input("Ingresa un número: "))
    if numero_ingresado < numero:
        raise InvalidAgeException
    else:
        print("Elegible para votar")
except InvalidAgeException:
    print("Excepción: Edad no válida")
