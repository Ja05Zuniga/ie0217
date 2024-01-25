print('Funcion normal que recibe dos elementos y los imprime')
def mostrar_informacion(nombre, apellido):
    print('Nombre:', nombre)
    print('Apellido:', apellido)

mostrar_informacion(apellido='Cartman', nombre='Eric')

print('Para calcular hipotenusas')
import math
# sqrt calcula la raíz cuadrada
raiz_cuadrada = math.sqrt(4)
print("La raíz cuadrada de 4 es", raiz_cuadrada)

# pow() calcula la potencia
resultado_potencia = pow(2, 3)
print("2 elevado a la potencia 3 es", resultado_potencia)

print('Declarar valores por defecto')
def add_numbers(a=7, b=8):
    suma = a + b
    print('Suma: ', suma)

# Llamada a la función con dos argumentos
add_numbers(2, 3)

# Llamada a la función con un argumento
add_numbers(a=2) #No se puede acceder a b :(

# Llamada a la función sin argumentos (utilizará los valores predeterminados a=7 y b=8)
add_numbers()
