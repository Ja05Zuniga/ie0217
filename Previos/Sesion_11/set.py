#No guarda elementos repetidos ni en orden  
# Creación de un conjunto y uso del método add()
numbers = {21, 34, 54, 12}
print('Conjunto Inicial:', numbers)
numbers.add(32)
print('Conjunto Actualizado:', numbers)
#Fin

# Creación de conjuntos y uso del método update()
companies = {'Lacoste', 'Ralph Lauren'}
tech_companies = ['apple', 'google', 'apple']
companies.update(tech_companies)
print(companies)
# Salida: {'google', 'apple', 'Lacoste', 'Ralph Lauren'} No permite elementos repetidos
#Fin

# Creación de un conjunto y eliminación de un elemento
languages = {'Swift', 'Java', 'Python'}
print('Conjunto Inicial:', languages)
removed_value = languages.discard('Java')
print('Conjunto después de discard():', languages)
# Conjunto Inicial: {'Python', 'Swift', 'Java'}
# Conjunto después de discard(): {'Python', 'Swift'}
#Fin

# Creación de un conjunto de tipo entero
student_id = {112, 114, 116, 118, 115}
print('ID de Estudiantes:', student_id)
#Fin

# Creación de un conjunto de tipo cadena
vowel_letters = {'a', 'e', 'i', 'o', 'u'}
print('Letras Vocales:', vowel_letters)
#Fin

# Creación de un conjunto de tipos de datos mixtos
mixed_set = {'Hello', 101, -2, 'Bye'}
print('Conjunto de tipos de datos mixtos:', mixed_set)
#Fin

# Creación de un conjunto vacío
empty_set = set()

# Creación de un diccionario vacío
empty_dictionary = {}

# Verificación del tipo de datos del conjunto vacío
print('Tipo de datos de empty_set:', type(empty_set))
# Verificación del tipo de datos del diccionario vacío
print('Tipo de datos de empty_dictionary:', type(empty_dictionary))
#Fin

#Uso de set con for
frutas = {"Manzana", "Durazno", "Mango"}
# Bucle for para acceder a cada fruta
for fruta in frutas:
    print(fruta)
#Fin
    
#numero de elementos
numeros_pares = {2, 4, 6, 8}
print('Conjunto: ', numeros_pares)
# Encontrar el número de elementos
print('Total de Elementos:', len(numeros_pares))
