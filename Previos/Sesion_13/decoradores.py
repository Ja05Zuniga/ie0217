#Función anidada
print("Primer ejemplo")
def outer(x): 
    def inner (y):
        return x + y
    return inner
add_five = outer (5) 
result = add_five(6) 
print(result) # prints 11
# Output: 11
#Fin

print("\nSegundo ejemplo")
#Función como argumento
def add(x, y):
    return x + y

def calcular(funcion, x, y):
    return funcion(x, y)

resultado = calcular(add, 4, 6)
print(resultado)  # imprime 10
# Salida: 10
#Fin

print("\nTercer ejemplo")
#Retornar una función
def greeting (nombre):
    def hola():
        return "¡Hola, " + nombre + "!"
    return hola

saludar = greeting ("Atlantis")
print(saludar())  # imprime "¡Hola, Atlantis!"
# Salida: ¡Hola, Atlantis!
#Fin

print("\nCuarto ejemplo")
def embellecer(func):
    def interna():
        print("¡Me han decorado!")
        func()
    return interna

@embellecer
def ordinaria():
    print("Soy ordinaria")

ordinaria()
#Retorna los print
#Fin

print("\nQuinto ejemplo")
def embellecer2(func):
    # definir la función interna
    def interna():
        # agregar algún comportamiento adicional a la función decorada
        print("¡Me han decorado por 2!")
        # llamar a la función original
        func()
    # devolver la función interna
    return interna

# definir la función ordinaria
def ordinaria():
    print("Soy ordinaria por 2")

# decorar la función ordinaria
funcion_decorada = embellecer2(ordinaria)

# llamar a la función decorada
funcion_decorada()
