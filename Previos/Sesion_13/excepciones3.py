# programa para imprimir el recíproco de números pares
try:
    num = int(input("Ingrese un número: "))
    assert num % 2 == 0 #Assert siempre es true
except:
    """Aunque se manejen excepciones, no toma en cuenta si el usuario
      ingresa un cero"""
    print("No es un número par!")
else:
    reciproco = 1 / num
    print(reciproco)
