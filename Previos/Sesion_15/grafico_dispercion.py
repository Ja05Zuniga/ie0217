import matplotlib.pyplot as plt

X = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# grafico de dispersión
plt.scatter(X, y, label='Puntos')

plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Dispersión')
plt.legend()

plt.show()
