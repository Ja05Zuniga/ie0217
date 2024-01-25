class Animal:
    # Atributo y método de la clase padre
    name = ""

    def eat(self):
        print("Puedo comer")

# Hereda de Animal
class Perro(Animal):
    # Nuevo método en la subclase
    def display(self):
        # Acceder al atributo 'name' de la superclase usando 'self'
        print("Mi nombre es ", self.name)

# Crear un objeto de la subclase
perro = Perro()
# Acceder al atributo y método de la superclase
perro.name = "Apolo"
perro.eat()
# Llamar al método de la subclase
perro.display()
