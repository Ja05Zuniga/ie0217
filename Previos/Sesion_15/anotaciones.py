import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# grafico de línea
plt.plot(x, y, label='Datos de ejemplo')

# Añadir una anotación
plt.annotate('Valor Máximo', xy=(5, 14), xytext=(3, 16), arrowprops=dict(facecolor='black', shrink=0.05))

plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico con Anotación')
plt.legend()

plt.show()  