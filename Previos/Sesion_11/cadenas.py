# Creación de variables de tipo cadena
name = "Python"
print(name)
message = "I love Python."
print(message)
greet = 'hello'
print(greet[1])  # Acceso al elemento en el índice 1
greet = 'hello'
print(greet[-4])  # Acceso al cuarto elemento desde el final

# Asignación de nueva cadena a una variable
message = 'Hola Amigos'
message = 'Hello Friends'
print(message)  # Imprime "Hello Friends"

# Cadena multilinea
message = '''Never gonna give you up
Never gonna let you down'''
print(message)

# Operaciones con cadenas
greet = 'Hello'
name = "Jack"

# Concatenación de cadenas usando el operador +
result = greet + name
print(result)  # Imprime "HelloJack"
greet = 'Hello'

# Iteración a través de la cadena
for letter in greet:
    print(letter)

# Operaciones con cadenas
str1 = "Hello, world!"
str2 = "I love Python."
str3 = "Hello, world!"
# Comparación de cadenas
print(str1 == str2)  # False
print(str1 == str3)  # True

# Acceso a subcadena en una cadena
greet = 'Hello'
print(greet[1:4])  # Imprime "ell"

# Obtención de la longitud de una cadena
greet = 'Hello'
print(len(greet))  # Imprime 5