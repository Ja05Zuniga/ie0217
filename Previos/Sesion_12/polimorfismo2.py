from math import pi

class Forma:
    def __init__(self, nombre):
        self.nombre = nombre

    def area(self):
        pass

    def hecho(self):
        return "forma bidimensional."

    def __str__(self):
        return self.nombre

class Cuadrado(Forma):
    def __init__(self, longitud):
        super().__init__("Cuadrado")
        self.longitud = longitud

    def area(self):
        return self.longitud**2

    def hecho(self):
        return "Los cuadrados tienen todos los ángulo igual a 90 grados."

class Círculo(Forma):
    def __init__(self, radio):
        super().__init__("Circulo")
        self.radio = radio

    def area(self):
        return pi * self.radio**2

a = Cuadrado(4)
b = Círculo(7)

print(b)
print(b.hecho())
print(a.hecho())
print(b.area())
