class Animal:
    name = ""

    def eat(self):
        print("Puedo comer")

# Heredar de Animal
class Perro(Animal):
    def eat(self):
        # Llamar al método eat() de la superclase usando super()
        super().eat()
        print("Me gusta")

# Crear un objeto de la subclase
perro = Perro()
# Llamar al método eat() en el objeto labrador
perro.eat()
