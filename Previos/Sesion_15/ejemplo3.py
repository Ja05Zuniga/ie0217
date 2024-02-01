import matplotlib.pyplot as plt

categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Crear un grafico de barras
plt.bar(categorias, valores, color='royalblue', edgecolor='black')

# Personalización
plt.xlabel('Categorías', fontsize=12)
plt.ylabel('Valores', fontsize=12)
plt.title('Gráfico de Barras', fontsize=14)
plt.xticks(rotation=45)  # Rotar etiquetas del eje X
plt.grid(axis='y', linestyle='--', alpha=0.7)  # Corregir parametro linestyle

# Añadir etiquetas en las barras
for i, v in enumerate(valores):
    plt.text(i, v + 0.5, str(v), ha='center', va='bottom', fontsize=10)

plt.show()