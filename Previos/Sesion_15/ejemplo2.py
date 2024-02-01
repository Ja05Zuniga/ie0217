import matplotlib.pyplot as plt

categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]
tendencia = [5, 10, 8, 13]

# Crear una figura con dos subtramas
fig, axs = plt.subplots(1, 2, figsize=(10, 4))

# Subtrama 1: Grafico de barras
axs[0].bar(categorias, valores, color='royalblue')
axs[0].set_title('Gráfico de Barras')

# Subtrama 2: Grafico de línea
axs[1].plot(categorias, tendencia, color='green', marker='o')
axs[1].set_title('Gráfico de Línea')

for ax in axs:
    ax.set_xlabel('Categorías')
    ax.set_ylabel('Valores')

# Ajustar la disposición
plt.tight_layout()

plt.show()
