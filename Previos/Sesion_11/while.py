i = 1
n=5
while i<n:
    print(i)
    i = i+1


tota = 0
number = int(input("Ingrese un numero: "))
while number != 0: #Buvle infinito
    tota+=number
    number = int(input("Ingrese el numero"))

print("Total", tota)