def dividir_inteligente(func):
    def interna(a, b):
        print("Voy a dividir", a, "y", b)
        if b == 0:
            print("¡Vaya! no se puede dividir por cero")
            return
        return func(a, b)
    return interna

@dividir_inteligente
def dividir(a, b):
    print(a / b)

dividir(2, 5)
dividir(2, 0)
