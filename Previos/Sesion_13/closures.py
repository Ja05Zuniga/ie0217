"""Es una función anidada que ayuda a acceder a las variables 
de la función externa incluso después de que la función externa 
esté cerrada."""

print("Primer ejemplo")
def saludar(nombre):
    # Función interna
    def mostrar_nombre():
        print("Hola", nombre)

    # Llamar función interna
    mostrar_nombre()
saludar("John")
# Salida: Hola John
#Fin
    
print("\nSegundo ejemplo")
def saludar():
    # Variable definida fuera de la función interna
    nombre = "John"

    # Devolver una función anidada
    return lambda: "Hola " + nombre

# Llamar a la función 
mensaje = saludar()

# Llamar a la función interna e imprimir el mensaje
print(mensaje())
# Salida: Hola John
#Fin

print("\nTercer ejemplo")
def calcular():
    num = 1

    def funcion_interna():
        nonlocal num
        num += 2
        return num

    return funcion_interna

# Llamar a la función externa
impar = calcular()

# Llamar a la función interna
print(impar())  
print(impar())  
print(impar())  
# Salida: 3
# Salida: 5
# Salida: 7

# Llamar a la función externa nuevamente
impar2 = calcular()
print(impar2())  
# Salida: 3
#fin

print("\nCuarto ejemplo")
def crear_multiplicador_de(n):
    def multiplicador(x):
        return x * n
    return multiplicador

# Multiplicador de 3
por3 = crear_multiplicador_de(3)

# Multiplicador de 5
por5 = crear_multiplicador_de(5)

# Salida: 27
print(por3(9))

# Salida: 15
print(por5(3))

# Salida: 30
print(por5(por3(2)))
