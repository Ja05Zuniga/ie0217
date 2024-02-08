import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score

np.random.seed(42) #Genera numeros ramdoms
    #Numeros aleatorios de 0 a 2
X = 2 * np.random.rand(100, 1) #100 filas, 1 columna, valores
    
y = 4 + 3 * X + np.random.randn(100, 1) #Se le añade ruido

# Dividir los datos en conjuntos de entrenamiento y prueba
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Crear y ajustar el modelo de regresión lineal
modelo = LinearRegression()
modelo.fit(X_train, y_train)

# Realizar predicciones en el conjunto de prueba
y_pred = modelo.predict(X_test)

# Calcular el coeficiente de determinación R^2
r2 = r2_score(y_test, y_pred)

# Visualizar los resultados
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
plt.plot(X_test, y_pred, label=f'Regresión Lineal (R^2={r2:.2f})', color='red')
plt.title('Regresión Lineal y Coeficiente de Determinación R^2')
plt.xlabel('X')
plt.ylabel('y')
plt.legend()
plt.show()
