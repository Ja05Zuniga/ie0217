class Poligono:
    # Método para representar una forma
    def render(self):
        print("Representando Poligono...")

class Cuadrado(Poligono):
    def render(self):
        print("Representando Cuadrado...")

class Circulo(Poligono):
    def render(self):
        print("Representando Circulo...")

# Crear un objeto de Cuadrado
s1 = Cuadrado()
s1.render()

# Crear un objeto de Círculo
c1 = Circulo()
c1.render()
