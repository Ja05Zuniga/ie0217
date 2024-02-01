import os

# Cambiar el directorio de trabajo
os.chdir('C:\\Python33')
# Imprimir el directorio de trabajo actual
print(os.getcwd())
#Fin

# Imprimir el directorio de trabajo actual
print(os.getcwd())
#Fin

# Eliminar el archivo "nombreArchivo.txt"
os.remove("nombreArchivo.txt")
#Fin

# Eliminar el directorio vacío "mydir"
os.rmdir("mydir")
#Fin

# Imprimir el directorio de trabajo actual
print(os.getcwd())
# Listar todos los subdirectorios
subdirectorios = os.listdir()
print(subdirectorios)

# Listar subdirectorios en otro directorio ("G:\\")
subdirectorios_otro = os.listdir('G:\\')
print(subdirectorios_otro)
#Fin

# Crear un nuevo directorio llamado "test"
os.mkdir('test')
# Listar el contenido del directorio de trabajo actual
print(os.listdir())
#Fin

# Listar el contenido del directorio de trabajo actual
print(os.listdir())
# Renombrar el directorio "test" a "new_one"
os.rename('test', 'new_one')
# Listar el contenido del directorio de trabajo actual después del cambio de nombre
print(os.listdir())
# Output: ['new_one']