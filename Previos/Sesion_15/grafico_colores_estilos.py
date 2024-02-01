import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Crear grafico de línea con colores, estilos y marcadores
plt.plot(x, y, color='blue', linestyle='--', marker='o', label='Serie A')

plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico Personalizado')  
plt.legend()

plt.show()