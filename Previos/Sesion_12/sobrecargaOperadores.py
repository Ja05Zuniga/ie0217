class Punto:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __str__(self):
        return "({0},{1})".format(self.x, self.y)

    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y
        return Punto(x, y)

p1 = Punto(1, 2)
p2 = Punto(2, 3)
print(p1 + p2)
# Salida: (3,5)
