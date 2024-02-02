import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

class Prestamos:
    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas

        # Almacena el cálculo de la amortización del préstamo
        self.amortizacion = self.calcular_amortizacion()

    def calcular_amortizacion(self):
        try:
            # Calcula la tasa de interés mensual
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100

            # Calcula el pago mensual utilizando la fórmula del préstamo
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo) / (1 - (1 + tasa_interes_mensual) ** -self.cuotas)

            saldo_restante = self.monto_prestamo
            amortizacion = []

            # Itera a través de cada cuota para calcular interés, amortización principal y saldo restante
            for cuotas in range(1, self.cuotas + 1):
                interes_pendiente = saldo_restante * tasa_interes_mensual
                amortizacion_principal = cuota_mensual - interes_pendiente
                saldo_restante -= amortizacion_principal
                amortizacion.append({'cuotas': cuotas, 'Interes': interes_pendiente,
                                     'Amortización': amortizacion_principal, 'Saldo restante': saldo_restante})
            return amortizacion
        except ZeroDivisionError:
            print("Error: la cantidad de cuotas no puede ser cero.")
            return []  # Si se produce una excepción, retorna una lista vacía
        except Exception:
            print(f"Error inesperado:")
            return []

    def generar_reporte(self, archivo_salida):
        try:
            # Convertir el cronograma de amortización a un DataFrame de Pandas y guardar un archivo CSV
            df = pd.DataFrame(self.amortizacion)
            df.to_csv(archivo_salida, index=False)
            print(f'Reporte con éxito: {archivo_salida}')
        except Exception:
            print(f'Ocurrió un error al generar reporte')

    def graficar_amortizacion(self):
        # Convertir cronograma de amortización a un DataFrame de Pandas y guardar un archivo CSV
        df = pd.DataFrame(self.amortizacion)

        # Crear un gráfico de barras para visualizar interés y amortización para cada cuota
        data = np.array([df['Interes'], df['Amortización']])
        plt.bar(df['cuotas'], data[0], label='Interes')
        plt.bar(df['cuotas'], data[1], bottom=data[0], label='Amortización')

        # Personalizar gráfico
        plt.xlabel('Número de cuotas')
        plt.ylabel('Monto ($)')
        plt.title('Amortización e interés por cuotas')
        plt.legend()
        plt.show()

def main ():
    try:
        # 1. Pedir el monto al usuario
        monto = float(input("Ingrese el monto del préstamo: "))

        # 2. Pedir la tasa de interés anual (%)
        tasa_interes = float(input("Ingrese la tasa de interés anual (%): "))

        # 3. Pedir la cantidad de cuotas
        cuotas = int(input("Ingrese el número de cuotas: "))

        # 4. Instancia el préstamo
        prestamo = Prestamos(monto, tasa_interes, cuotas)

        # 5. Generar el reporte
        prestamo.generar_reporte("reporte.csv")

        # 6. Imprimir información: monto, tasa, cuotas
        print(f"Monto del prestamo: ${monto} \nTasa de interes anual: {tasa_interes}%\nNúmero de cuotas: {cuotas}")

        # 7. Graficar la amortización
        prestamo.graficar_amortizacion()

    except ValueError:
        print(f"Error: Asegurese de ingresar valores numéricos válidos.")
    except Exception:
        print(f"Error inesperado.")

if __name__ == "__main__":
    main()