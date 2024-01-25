from persona import Persona

#Declara la clase Teacher que hereda de la clase Persona
class Teacher (Persona):
    def __init__(self, name, age, empleyes_id):
        super().__init__(name, age)
        self.empleyes_id = empleyes_id
        self.courses_taught = []

    #Se le asigna un curso a la lista
    def assign_course (self, course):
        self.courses_taught.append(course)

    #Mostrar en pantalla
    def display_info(self):
        super().display_info()
        print(f"Empleado ID: {self.empleyes_id} \
              \nCursos: {',' .join(self.courses_taught)}\n")