class Mamifero:
    def info_mamifero(self):
        print("Los mamíferos pueden dar a luz directamente.")

class AnimalAlado:
    def info_animal_alado(self):
        print("Los animales alados pueden aletear.")

class Murcielago(Mamifero, AnimalAlado): #Herada de dos, se envian como argumentos
    pass

# Crear un objeto de la clase Murciélago
murcielago1 = Murcielago()
murcielago1.info_mamifero()
murcielago1.info_animal_alado()
