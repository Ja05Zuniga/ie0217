"""crea un objeto generador que se puede iterar para 
producir los valores en el generador."""

# Crear el objeto generador
generador_cuadrados = (i * i for i in range(5))
# Iterar sobre el generador e imprimir los valores
for i in generador_cuadrados:
    print(i)
#Salida: 0,1,4,9,16
    
print('Segundo programa')
def numeros_fibonacci(nums):
    x, y = 0, 1
    for _ in range(nums):
        x, y = y, x + y
        yield x

def cuadrado(nums):
    for num in nums:
        yield num ** 2

# Imprimir los primeros 10 números de Fibonacci
print(sum(cuadrado(numeros_fibonacci(10))))
# Salida: 4895
