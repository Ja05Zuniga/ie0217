class PowTwo:
    #Clase para implementar un iterador de potencias de dos
    
    def __init__(self, max=0):
        self.max = max

    def __iter__(self):
        self.n = 0
        return self

    def __next__(self):
        if self.n <= self.max:
            resultado = 2 ** self.n
            self.n += 1
            return resultado
        else:
            raise StopIteration

# Crear un objeto de la clase PowTwo con límite máximo 3
numbers = PowTwo(3)

# Crear un iterable a partir del objeto
i = iter(numbers)

# Utilizar next para obtener el siguiente elemento del iterador
print(next(i))  # imprime 1
print(next(i))  # imprime 2
print(next(i))  # imprime 4
print(next(i))  # imprime 8
# print(next(i))  # genera una excepción StopIteration

# Utilizar un bucle for para iterar sobre la clase PowTwo
for elemento in PowTwo(3):
    print(elemento)
