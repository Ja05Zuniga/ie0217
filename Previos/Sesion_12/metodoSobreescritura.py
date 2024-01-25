class Animal:
    # Atributos y método de la clase padre
    name = ""

    def eat(self):
        print("Puedo comer")

# Heredar de Animal
class Perro(Animal):
    # Sobrescribir el método eat()
    def eat(self):
        print("Me gusta")

# Crear un objeto de la subclase
perro = Perro()
# Llamar al método eat() en el objeto labrador
perro.eat()
