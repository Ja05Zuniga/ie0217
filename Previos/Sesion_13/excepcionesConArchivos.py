try:
    file1 = open("nombreDelArchivo.txt", "r")
    contenido_leido = file1.read()
    print(contenido_leido)
finally:
    # Cerrar el archivo en el bloque finally, asegurando que se cierre incluso si ocurre una excepción.
    file1.close()
