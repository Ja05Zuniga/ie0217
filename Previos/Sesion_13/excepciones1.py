try:
    numerador = 10
    denominador = 0
    resultado = numerador / denominador
    print(resultado)
except ZeroDivisionError:
    print("Error: El denominador no puede ser 0.")
    # Salida: Error: El denominador no puede ser 0.
finally:
    print("Se puede agregar comentarios o un postprocesamiento")