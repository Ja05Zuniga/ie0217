# Creación de una lista y adición de elementos
numbers = [21, 34, 54, 12]
print("Antes de agregar: ", numbers)
#Fin

# Utilizando el método append para añadir un elemento
numbers.append(32)
print("Después de agregar: ", numbers)
#Fin

# Creación de listas y modificación de elementos
languages = ['Python', 'Swift', 'C++']
languages[2] = 'C'  # Cambiando el tercer elemento a 'C'
print(languages)  # ['Python', 'Swift', 'C']
#Fin

# Operaciones con listas - Extensión de una lista
prime_numbers = [2, 3, 5]
print("Lista1:", prime_numbers)
even_numbers = [4, 6, 8]
print("Lista2:", even_numbers)
prime_numbers.extend(even_numbers)
print("Lista después de añadir:", prime_numbers)
#Fin

# Iteración a través de una lista
languages = ['Python', 'Swift', 'C++']
for language in languages:
    print(language)
#Fin

# Verificación de la existencia de elementos en una lista
languages = ['Python', 'Swift', 'C++']
print('C' in languages)  # False
print('Python' in languages)  # True
#Fin

# Obtención de la longitud de una lista
languages = ['Python', 'Swift', 'C++']
print("Lista: ", languages)
print("Número total de elementos: ", len(languages))  # 3
#Fin

# Eliminación de elementos de una lista
languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']
#Fin

# Eliminando el segundo elemento
del languages[1]
print(languages)  # ['Python', 'C++', 'C', 'Java', 'Rust', 'R']
#Fin

# Eliminando el último elemento
del languages[-1]
print(languages)  # ['Python', 'C++', 'C', 'Java', 'Rust']
#Fin

# Eliminando los dos primeros elementos
del languages[0:2]
print(languages)  # ['C', 'Java', 'Rust']
#Fin

# Aceder por rangos a elementos de una lista
my_list = ['p', 'r', 'o', 'g', 'r', 'a', 'm', 'i', 'z']
print(my_list[2:5])  # elementos desde el índice 2 hasta el índice 4
print(my_list[5:])   # elementos desde el índice 5 hasta el final
print(my_list[:])    # elementos desde el principio hasta el final
#Fin

# Acceso a elementos en una lista
languages = ["Python", "Swift", "C++"]
print(languages[0])  # Acceso al elemento en el índice 0
print(languages[2])  # Acceso al elemento en el índice 2
#Fin

# Acceso a elementos en una lista por índice negativo
languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']
print(languages[-1])  # Acceso al último elemento
print(languages[-3])  # Acceso al tercer elemento desde el final
#Fin

# Eliminación de un elemento de una lista
languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']
languages.remove('Python')
print(languages)  # ['Swift', 'C++', 'C', 'Java', 'Rust', 'R']
#Fin

#Comprobar si un elemento esta en una lista
languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']
'Python' in languages #True
'C' in languages #False
#Fin

# Uso de List Comprehension para generar una lista de números al cuadrado
numbers = [number * number for number in range(1, 6)]
print(numbers)  # [1, 4, 9, 16, 25]
numbers = [x*x for x in range(1,6)]
numbers=[]
for x in range(1,6):
    numbers.append(x*x)
#Fin
