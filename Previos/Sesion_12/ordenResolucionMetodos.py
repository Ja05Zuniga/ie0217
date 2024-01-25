class SuperClase1:
    def info(self):
        print("Método de la SuperClase 1 llamado")

class SuperClase2:
    def info(self):
        print("Método de la SuperClase 2 llamado")

class Derivada(SuperClase1, SuperClase2): #Primero accede a SuperClase1 porque está primero
    pass

# Crear un objeto de la clase Derivada
d1 = Derivada()
d1.info()  # Salida: "Método de la SuperClase 1 llamado"
