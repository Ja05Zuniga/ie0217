# Crear una clase
class Habitacion:
    length = 0.0
    breadth = 0.0

    # Método para calcular el área
    def calcular_area(self):            #Self hace referencia a las variables 'publicas'
        print("Área de la Habitación =", self.length * self.breadth)

# Crear un objeto de la clase Habitacion
habitacion_de_estudio = Habitacion()

# Asignar valores a todos los atributos
habitacion_de_estudio.length = 42.5
habitacion_de_estudio.breadth = 30.8

# Acceder al método dentro de la clase
habitacion_de_estudio.calcular_area()
