import matplotlib.pyplot as plt

datos = [15, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90]

# Grafico de caja
plt.boxplot(datos)

# Personalización
plt.ylabel('Valores')
plt.title('Gráfico de Caja')

plt.show()