class SuperClase:
    def super_metodo(self):
        print("Método de la SuperClase llamado")

class ClaseDerivada1(SuperClase):
    def metodo_derivado1(self):
        print("Método de la clase derivada 1 llamado")

class ClaseDerivada2(ClaseDerivada1):
    def metodo_derivado2(self):
        print("Método de la clase derivada 2 llamado")

# Crear un objeto de ClaseDerivada2
d2 = ClaseDerivada2()
d2.super_metodo()          # Salida: "Método de la SuperClase llamado"
d2.metodo_derivado1()      # Salida: "Método de la clase derivada 1 llamado"
d2.metodo_derivado2()      # Salida: "Método de la clase derivada 2 llamado"
