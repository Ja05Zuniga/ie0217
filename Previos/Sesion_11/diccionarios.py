# Diccionario con claves y valores de diferentes tipos de datos
numbers = {1: "Uno", 2: "Dos", 3: "Tres"}
print(numbers)
#Fin

# Crear un diccionario de capitales con algunos valores iniciales
capital_city = {"Nepal": "Kathmandu", "Inglaterra": "Londres"}
print("Diccionario Inicial: ", capital_city)
# Agregar una nueva entrada al diccionario
capital_city["Japón"] = "Tokio"
print("Diccionario Actualizado: ", capital_city)
#Fin

# Crear un diccionario de ID de estudiantes con algunos valores iniciales
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
print("Diccionario Inicial: ", student_id)

# Actualizar el valor asociado a la llave 112
student_id[112] = "Stan"
print("Diccionario Actualizado: ", student_id)
#Fin

# Acceder a elementos específicos del diccionario mediante claves
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
print(student_id[111])  # imprime Eric
print(student_id[113])  # imprime Butters
#FIN

# Eliminar una entrada específica del diccionario
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
print("Diccionario Inicial: ", student_id)
del student_id[111]
print("Diccionario Actualizado: ", student_id)
#FIN

# Eliminar completamente el diccionario
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
del student_id
print(student_id)  # Produce un error: NameError: name 'student_id' is not defined
#Fin

# Prueba de membresía para las claves del diccionario
squares = {1: 1, 3: 9, 5: 25, 7: 49, 9: 81}

# Salida: True
print(1 in squares)  # imprime True
print(2 not in squares)  # imprime True

# Pruebas de membresía solo para las claves, no los valores
print(49 in squares)  # imprime False, siempre accede a las llaves
#Fin

# Iteración a través de un diccionario
squares = {1: 1, 3: 9, 5: 25, 7: 49, 9: 81}
for i in squares:
    print(squares[i]) #Para acceder al contenido de las llaves
