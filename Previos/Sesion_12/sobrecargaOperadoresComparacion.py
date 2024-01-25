class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    # Sobrecargar el operador <
    def __lt__(self, other):
        return self.edad < other.edad

p1 = Persona("Alice", 20)
p2 = Persona("Bob", 30)
print(p1 < p2)  # Imprime True
print(p2 < p1)  # Imprime False
