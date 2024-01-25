# importar el módulo math estándar
import math

# usar math.pi para obtener el valor de pi
print("El valor de pi es", math.pi)
#Fin

# importar solo pi desde el módulo math
from math import pi
print(pi)
# Salida: 3.141592653589793
#Fin

# importar el módulo con un alias
import math as m
print(m.pi)
# Salida: 3.141592653589793
#Fin

# importar todos los nombres del módulo math estándar
from math import *
print("El valor de pi es", pi)
