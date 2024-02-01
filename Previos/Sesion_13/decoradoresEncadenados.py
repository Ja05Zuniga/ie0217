def estrella(func):
    def interna(*args, **kwargs):
        print("*" * 15)
        func(*args, **kwargs)
        print("*" * 15)
    return interna

def porcentaje(func):
    def interna(*args, **kwargs):
        print("%" * 15)
        func(*args, **kwargs)
        print("%" * 15)
    return interna

@estrella
@porcentaje
def impresora(msg):
    print(msg)

impresora("Hola")
