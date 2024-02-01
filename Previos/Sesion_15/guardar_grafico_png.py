import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# grafico de línea
plt.plot(x, y)

plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea Simple')

# Guardar grafico como PNG
plt.savefig('grafico.png')

plt.show()
