import matplotlib.pyplot as plt

# Datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

plt.plot(x, y)

plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea Simple')
plt.grid(True)#si aparece la grilla

# Mostrar gráfico
plt.show()
