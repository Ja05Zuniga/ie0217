from persona import Persona

class Estudiante(Persona):
    def __init__(self, name, age, estudiante_id):
        super().__init__(name, age)
        self.estudiante_id = estudiante_id
        self.course = []

    #Para inscribirse en un curso
    def enroll_course(self, course):
        self.course.append(course)

    #Mostrar informacion del estudiante
    def display_info(self):
        super().display_info()
        print(f"Student id: {self.estudiante_id}\
              \nCourses: {','.join(self.course)}\n")