print('Uso de lambda')
# lambda que acepta un argumento
usuario = lambda nombre: print('Hola,', nombre)
# llamada a la lambda
usuario('Delilah')
# Salida: Hola, Delilah

print('Filtrado de elementos pares')
#Filtrar solo los elementos pares de una lista
mi_lista = [1, 5, 4, 6, 8, 11, 3, 12]
nueva_lista = list(filter(lambda x: (x % 2 == 0), mi_lista))
            #lista, filtro(funcion), aplica lambda, de dónde? a mi_lista
print(nueva_lista)
# Salida: [4, 6, 8, 12]

print('Multiplica por 2 cada elemento')
#Duplicar cada elemento de una lista usando map()
mi_lista2 = [1, 5, 4, 6, 8, 11, 3, 12]
nueva_lista2 = list(map(lambda x: x * 2, mi_lista2))
            #lista, map(funcion), aplica lambda, de dónde? a mi_lista
print(nueva_lista2)
# Salida: [2, 10, 8, 12, 16, 22, 6, 24]
