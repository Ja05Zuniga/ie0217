import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Grafico de línea
plt.plot(x, y, label='Datos de ejemplo')

plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea con Etiquetas y Título')
plt.legend()  

plt.show()
