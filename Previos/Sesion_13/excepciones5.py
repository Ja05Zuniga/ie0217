class SalaryNotInRangeError(Exception):
    #Excepción lanzada por errores en el salario de entrada.
    def __init__(self, salario, mensaje="El salario no está en el rango (5000, 15000)"):
        self.salario = salario
        self.mensaje = mensaje
        super().__init__(self.mensaje)

try:
    salario = int(input("Ingresa la cantidad de salario: "))
    if not 5000 < salario < 15000:
        raise SalaryNotInRangeError(salario)
except SalaryNotInRangeError as e: #Personalizar las excepciones
    print(f"Excepción ocurrida: {e}")
