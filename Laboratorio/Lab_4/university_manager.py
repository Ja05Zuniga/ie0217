from estudiante import Estudiante
from teacher import Teacher
from courses import Courses

#Se agreagan estudiantes
student1 = Estudiante("Jean", 21, "C18767")
student2 = Estudiante("Antonio", 21, "C18767")

#Se agreagan profesores
teacher1 = Teacher("Helber", 36, "123456")
teacher2 = Teacher("Orellana", 35, "543231")

#Se agreagan cursos
course1 = Courses("IE0217", "DSA")
course2 = Courses("IE0223", "CD1")

#Inscribirse en un curso
student1.enroll_course(course1.courses_code)
student2.enroll_course(course2.courses_code)

#Asignar cursos
teacher1.assign_course(course1.courses_code)
teacher2.assign_course(course2.courses_code)

#Mostrar info del estudiantes
student1.display_info()

#Mostrar info de profresor
teacher1.display_info()

#Mostrar info del cursos
course1.display_info()