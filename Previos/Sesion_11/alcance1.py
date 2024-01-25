def outer_function():
    num = 20

    def inner_function():
        global num #Para modificar la variable de afuera
        num = 25
        
    print("Antes de llamar a inner_function():", num)
    inner_function()
    print("Después de llamar a inner_function():", num)

outer_function()
print("Fuera de ambas funciones:", num)
#Fin


print('Otra modificación de la variable de afuera')
# variable global
C = 1

def add():
    # uso de la palabra clave global
    global C
    # incrementar C en 2
    C = C + 2
    print(C)

add()
#Fin


print('NO se modifica la variable global')
b = 1
def suma():
    return b+1
print('Incrementa b en 1', suma())