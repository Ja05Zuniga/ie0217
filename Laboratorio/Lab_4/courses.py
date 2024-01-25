class Courses():
    def __init__(self, courses_code, courses_name):
        self.courses_code = courses_code
        self.courses_name = courses_name

    def display_info(self):
        print(f"Codigo del curso: {self.courses_code} \nNombre del curso: {self.courses_name}\n")