class Poligono:
    def __init__(self, no_lados):
        self.n = no_lados
        self.lados = [0 for i in range(no_lados)]

    def ingresar_lados(self):
        self.lados = [float(input("Ingrese el lado "+str(i+1)+" : ")) for i in range(self.n)]

    def mostrar_lados(self):
        for i in range(self.n):
            print("Lado", i+1, "es", self.lados[i])

class Triangulo(Poligono):
    def __init__(self):
        Poligono.__init__(self, 3)

    def encontrar_area(self):
        a, b, c = self.lados
        # Calcular el semiperímetro
        s = (a + b + c) / 2
        area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
        print('El área del triángulo es %0.2f' % area)

# Crear una instancia de la clase Triangulo
t = Triangulo()
# Solicitar al usuario que ingrese los lados del triángulo
t.ingresar_lados()
# Mostrar los lados del triángulo
t.mostrar_lados()
# Calcular e imprimir el área del triángulo
t.encontrar_area()
