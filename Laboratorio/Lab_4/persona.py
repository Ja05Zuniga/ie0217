class Persona:
    #'Constructor' que recibe la edad y el nombre
    def __init__(self, name, age):
        self.name = name
        self.age = age

    #Mostrar informacion de persona
    def display_info(self):
        print("name:", self.name, "\nAge:", self.age)
