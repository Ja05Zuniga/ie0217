"""un generador es una función que devuelve un iterador 
    que produce una secuencia de valores cuando se repite."""

def mi_generador(n):
    # Inicializar el contador
    valor = 0
    # Bucle hasta que el contador sea menor que n
    while valor < n:
        # Producir el valor actual del contador
        yield valor 
        """se usa para producir un valor del generador y pausar la ejecución
        de la función del generador hasta que se solicite el siguiente valor."""
        # Incrementar el contador
        valor += 1

# Iterar sobre el objeto generador producido por mi_generador
for valor in mi_generador(3):
    # Imprimir cada valor producido por el generador
    print(valor)
