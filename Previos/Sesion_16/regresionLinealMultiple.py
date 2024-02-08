import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Generar datos de ejemplo
np.random.seed(42)
X = 2 * np.random.rand(100, 1)  # Crear una matriz de 100 filas y 1 columna con números aleatorios entre 0 y 2
y = 4 + 3 * X + np.random.randn(100, 1)  # Crear datos de salida que siguen una relación lineal


modelo = LinearRegression() # Crear un modelo de regresión lineal

# Ajustar el modelo a los datos de entrenamiento
modelo.fit(X, y)

# Imprimir coeficiente e intercepción del modelo ajustado
print("Coeficiente:", modelo.coef_[0][0])
print("Intercepción:", modelo.intercept_[0])

# Visualizar la regresión lineal y los datos de entrenamiento
plt.scatter(X, y)  # Gráfico de dispersión de los datos de entrada
plt.plot(X, modelo.predict(X), color='red', linewidth=3) 
plt.title('Regresión Lineal')
plt.xlabel('X')
plt.ylabel('y')
plt.show()
