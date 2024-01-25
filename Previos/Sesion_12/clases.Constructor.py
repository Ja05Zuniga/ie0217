class Point(object):
    def __new__(cls, *args, **kwargs): #crear y devolver la instancia del objeto.
        print("From new")
        print(cls)
        print(args)
        print(kwargs)
        # create our object and return it
        obj = super().__new__(cls)
        return obj

    def __init__(self, x=0, y=0): #inicializa los atributos x e y de la instancia creada.
        print("From init")
        self.x = x
        self.y = y
#Fin
        
class SqPoint(Point): #Hereda de la clase point
    MAX_Inst = 4
    Inst_created = 0

    def __new__(cls, *args, **kwargs):
        if cls.Inst_created >= cls.MAX_Inst:
            raise ValueError("No se pueden crear más objetos") #Excepciones
        cls.Inst_created += 1
        return super().__new__(cls)
