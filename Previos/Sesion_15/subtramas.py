import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y1 = [10, 12, 5, 8, 14]
y2 = [5, 8, 9, 6, 10]

# Crear subtramas
fig, axs = plt.subplots(1, 2)  # 1 fila, 2 columnas

# Gráfico primera subtrama
axs[0].plot(x, y1, label='Serie A')
axs[0].set_title('Subtrama 1')

# Grafico segunda subtrama
axs[1].plot(x, y2, label='Serie B', color='red')
axs[1].set_title('Subtrama 2')

for ax in axs:
    ax.set_xlabel('Eje X')
    ax.set_ylabel('Eje Y')
    ax.legend()

# Ajustar disposición
plt.tight_layout()

plt.show()