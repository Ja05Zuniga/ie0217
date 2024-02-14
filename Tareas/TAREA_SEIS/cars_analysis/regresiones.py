import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score, mean_squared_error
from sklearn.metrics import mean_absolute_error
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline
from sklearn.model_selection import train_test_split, cross_val_score

"""Este archivo contiene dos clases: RegresionLineal y RegresioNoLineal.
Cada clase implementa los mismos modelos que se nombran las clases.
Cada clase tambien evalua e imprime el rendimiento de cada modelo y muestra los gráficos de los resultados
de los elementos a evaluar."""

class RegresionLineal:
    """Clase que recibe dos columnas con las caracteristicas que se desean analisar
    
    Metodo 'regresion_lineal': no recibe parametro. aplica el metodo de regresión lineal a partir de las columnas predefinidas
    
    Metodo 'redimiento_modelo': evalua e imprime el rendimiento de cada modelo utilizando el error cuadrático 
    medio (MSE), el coeficiente de determinación (R²) y el error absoluto medio (MAE). 
    
    Metodo graficos_regresion_lineal: Se encarga de mostrar los gráficos generados. Recibe el nombre del gráfico,
    el nombre del eje x y el nombre del eje y"""
    def __init__(self, X, y):
        self.X = X
        self.y = y
    
    def regresion_lineal(self):
        """Se encarga de aplicar modelos de regresión lineal para predecir características de los vehículos"""
        # División de datos en conjuntos de entrenamiento y prueba
        self.X_train, self.X_test, self.y_train, self.y_test = train_test_split(self.X, self.y, test_size=0.2, random_state=42)

        # Crear y entrenar el modelo de regresión lineal
        model = LinearRegression()
        model.fit(self.X_train, self.y_train)

        # Realizar predicciones
        self.y_pred_train = model.predict(self.X_train)
        self.y_pred_test = model.predict(self.X_test)


    def redimiento_modelo(self):
        """ evalua el rendimiento de cada modelo y los imprime"""
        # Evaluar el rendimiento del modelo
        r2_train = r2_score(self.y_train, self.y_pred_train)
        mse_train = mean_squared_error(self.y_train, self.y_pred_train)
        mae_train = mean_absolute_error(self.y_train, self.y_pred_train)
        r2_test = r2_score(self.y_test, self.y_pred_test)
        mse_test = mean_squared_error(self.y_test, self.y_pred_test)
        mae_test = mean_absolute_error(self.y_test, self.y_pred_test)

        print("R² (entrenamiento) lineal:", r2_train)
        print("MSE (entrenamiento) lineal:", mse_train)
        print("MAE (entrenamiento) lineal:", mae_train)
        print("R² (prueba): lineal", r2_test)
        print("MSE (prueba): lineal", mse_test)
        print("MAE (prueba): lineal", mae_test)

    def graficos_regresion_lineal(self, titulo, eje_x, eje_y):
        """Muestra la gráfica de la regresión lineal efectuada.
        Para crear una gráfica que se pueda reutilizar para varios casos, este metodo recibe el titulo del gráfico
        el nombre del eje x y el nombre del eje y"""
        # Visualización de resultados
        plt.figure(figsize=(10, 6))
        # Gráfico de dispersión de los datos de entrenamiento
        plt.scatter(self.X_train, self.y_train, color='blue', label='Datos de Entrenamiento')

        # Gráfico de dispersión de los datos de prueba
        plt.scatter(self.X_test, self.y_test, color='red', label='Datos de Prueba')

        # Línea de regresión para los datos de entrenamiento
        plt.plot(self.X_train, self.y_pred_train, color='green', linewidth=2, label='Regresión Lineal (Entrenamiento)')

        # Línea de regresión para los datos de prueba
        plt.plot(self.X_test, self.y_pred_test, color='orange', linewidth=2, label='Regresión Lineal (Prueba)')

        plt.title(titulo)
        plt.xlabel(eje_x)
        plt.ylabel(eje_y)
        plt.legend()
        plt.grid(True)
        plt.show()

class RegresionNoLineal:
    def __init__(self, X, y):
        self.X = X
        self.y = y

    def regrecion_no_lineal(self):
        """Se encarga de aplicar modelos de regresión no lineal para predecir características de los vehículos
        Para el caso de las regresiones no lineales, es necesarios definir el grado del polinomio para una mejor predicción
        Para solventar este caso, se Implementó Validación cruzada (Cross-Validation) para encontrar el el grado 
        del polinomio adecuado.
        El grado generado por Validación cruzada depende de las entradas ingresadas por el contructor, así que se 
        puede usar para cualquier archivo que siga las mismas caracteristicas. 
        En otras palabras, la elección del polinomio está automatizada."""

        # Definir el grado del polinomio
        self.X_train, self.X_test, self.y_train, self.y_test = train_test_split(self.X, self.y, test_size=0.2, random_state=42)

        """implementación de la validación cruzada para encontrar el grado del polinomio adecuado: """
        # Lista para almacenar los puntajes de validación cruzada para cada grado del polinomio
        cv_scores = []

        # Rango de grados del polinomio a probar
        degrees = list(range(1, 11))

        # Realizar validación cruzada para cada grado del polinomio
        for degree in degrees:
            # Crear un modelo de regresión polinómica
            poly_model = make_pipeline(PolynomialFeatures(degree), LinearRegression())
            
            # Calcular los puntajes de validación cruzada (R²)
            scores = cross_val_score(poly_model, self.X_train, self.y_train, cv=5, scoring='r2')
            
            # Calcular el promedio de los puntajes de validación cruzada para este grado del polinomio
            cv_score = np.mean(scores)
            
            # Agregar el puntaje promedio a la lista
            cv_scores.append(cv_score)

        # Encontrar el grado del polinomio que maximiza el puntaje de validación cruzada
        best_degree = degrees[np.argmax(cv_scores)]
        """Fin de la validación cruzada"""

        # Crear un modelo de regresión polinómica con el mejor grado polimonial
        poly_model = make_pipeline(PolynomialFeatures(best_degree), LinearRegression())

        # Entrenar el modelo de regresión polinómica
        poly_model.fit(self.X_train, self.y_train)

        # Realizar predicciones
        self.y_pred_train_poly = poly_model.predict(self.X_train)
        self.y_pred_test_poly = poly_model.predict(self.X_test)

    def redimiento_modelo_no_lineal(self):
        """ evalua el rendimiento de cada modelo y los imprime"""

        # Evaluar el rendimiento del modelo de regresión polinómica
        r2_train_poly = r2_score(self.y_train, self.y_pred_train_poly)
        mse_train_poly = mean_squared_error(self.y_train, self.y_pred_train_poly)
        mae_train_poly = mean_absolute_error(self.y_train, self.y_pred_train_poly)
        r2_test_poly = r2_score(self.y_test, self.y_pred_test_poly)
        mse_test_poly = mean_squared_error(self.y_test, self.y_pred_test_poly)
        mae_test_poly = mean_absolute_error(self.y_test, self.y_pred_test_poly)

        print("R² (entrenamiento) - Regresión Polinómica no lineal:", r2_train_poly)
        print("MSE (entrenamiento) - Regresión Polinómica no lineal:", mse_train_poly)
        print("MAE (entrenamiento) - Regresión Polinómica: no lineal", mae_train_poly)
        print("R² (prueba) - Regresión Polinómica: no lineal", r2_test_poly)
        print("MSE (prueba) - Regresión Polinómica: no lineal", mse_test_poly)
        print("MAE (prueba) - Regresión Polinómica: no lineal", mae_test_poly)

    def graficos_regresion_nolineal(self, titulo, eje_x, eje_y):
        """Muestra la gráfica de la regresión no lineal efectuada.
        Para crear una gráfica que se pueda reutilizar para varios casos, este metodo recibe el titulo del gráfico
        el nombre del eje x y el nombre del eje y"""

        # Visualización de resultados de la regresión polinómica
        plt.figure(figsize=(10, 6))

        # Gráfico de dispersión de los datos de entrenamiento
        plt.scatter(self.X_train, self.y_train, color='blue', label='Datos de Entrenamiento')

        # Gráfico de dispersión de los datos de prueba
        plt.scatter(self.X_test, self.y_test, color='red', label='Datos de Prueba')

        # Línea de regresión polinómica para los datos de entrenamiento
        plt.plot(self.X_train, self.y_pred_train_poly, color='green', linewidth=2, label='Regresión Polinómica (Entrenamiento)')

        # Línea de regresión polinómica para los datos de prueba
        plt.plot(self.X_test, self.y_pred_test_poly, color='orange', linewidth=2, label='Regresión Polinómica (Prueba)')

        plt.title(titulo)
        plt.xlabel(eje_x)
        plt.ylabel(eje_y)
        plt.legend()
        plt.grid(True)
        plt.show()
