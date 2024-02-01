import matplotlib.pyplot as plt

proporciones = [30, 20, 25, 15]
etiquetas = ['A', 'B', 'C', 'D']

# Gráfico de pastel
plt.pie(proporciones, labels=etiquetas, autopct='%1.1f%%', startangle=140, colors=['gold', 'lightcoral', 'lightgreen', 'lightskyblue'])
                                        #Se puede elegir el angulo de inicio
plt.title('Gráfico de Pastel')

plt.show()
