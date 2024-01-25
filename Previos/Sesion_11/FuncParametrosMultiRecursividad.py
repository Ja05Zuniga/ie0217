print('Funcion que que puede recibir multiples parametros')
# programa para encontrar la suma de varios números
def encontrar_suma(*numeros): #IMPORTANTE
    resultado = 0
    for num in numeros:
        resultado += num
    print("Suma = ", resultado)

# llamada a la función con 3 argumentos
encontrar_suma(1, 2, 3)

# llamada a la función con 2 argumentos
encontrar_suma(4, 9) #Puede recibir cualesquiera
#Fin

print('Funcion Recursiva')
def factorial(x):
    #función recursiva
    if x == 1:
        return 1
    else:
        return x * factorial(x - 1)

num = 3
print("El factorial de", num, "es", factorial(num))
