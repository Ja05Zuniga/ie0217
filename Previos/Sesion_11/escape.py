# Uso de comillas dobles y escapado

#example = "He said, " what's up"" Error
#print(example)  # No hay error

# Escapado de comillas dobles y simples
example = "He said, \" what's up\"" #Solucion
print(example)  

# Uso de f-string para formatear una cadena
name = 'Cathy'
country = 'Reino Unido'
print(f'{name} es de {country}')
