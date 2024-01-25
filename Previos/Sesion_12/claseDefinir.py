# Definir una clase
class Empleado:
    # Definir un atributo
    employee_id = 0

# Crear dos objetos de la clase Empleado
empleado1 = Empleado()
empleado2 = Empleado()

# Acceder a atributos usando empleado1
empleado1.employee_id = 1001
print(f"ID del Empleado: {empleado1.employee_id}")

# Acceder a atributos usando empleado2
empleado2.employee_id = 1002
print(f"ID del Empleado: {empleado2.employee_id}")
