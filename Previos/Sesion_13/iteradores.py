# Definir una lista
my_list = [4, 7, 0]

# Crear un iterador a partir de la lista
iterador = iter(my_list)

# Obtener el primer elemento del iterador
print(next(iterador))  # imprime 4

# Obtener el segundo elemento del iterador
print(next(iterador))  # imprime 7

# Obtener el tercer elemento del iterador
print(next(iterador))  # imprime 0

# Utilizar un bucle for para iterar sobre la lista
for elemento in my_list:
    print(elemento)
