try:
    numeros_pares = [2, 4, 6, 8]
    print(numeros_pares[5])
except ZeroDivisionError:
    print("El denominador no puede ser 0.")
except IndexError:
    print("Índice fuera de rango.")
# Salida: Índice fuera de rango
