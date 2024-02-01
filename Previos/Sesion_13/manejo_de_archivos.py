# Como abrir un archivo

file1 = open("nombreDelArchivo.txt", "r")
# Leer el contenido del archivo
contenido_leido = file1.read()
print(contenido_leido)
# Cerrar el archivo
file1.close()

#Version recomendada
with open("nombreDelArchivo.txt", "r") as file1:
    contenido_leido = file1.read()
    print(contenido_leido)

#Una forma de escribir en un archivo
with open('nombreDelArchivo.txt', 'w') as file2:
    # Escribir contenido en el archivo nombreDelArchivo.txt
    file2.write('Programming no is Fun.')
