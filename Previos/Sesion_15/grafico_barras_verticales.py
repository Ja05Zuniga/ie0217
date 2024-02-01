import matplotlib.pyplot as plt

categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Grafico barras verticales
plt.bar(categorias, valores, color='royalblue')

plt.xlabel('Categorías')
plt.ylabel('Valores')
plt.title('Gráfico de Barras Verticales')

plt.show()
