from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# Generar datos aleatorios
np.random.seed(42)  # Para reproducibilidad
X = np.random.rand(100, 2) * 10  # 100 puntos bidimensionales en un rango de 0 a 10

# Calcular la inercia para diferentes valores de k
#Esto ayuda a elegir el numero de clusters correcto
inertias = []
for k in range(1, 11):
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(X)
    inertias.append(kmeans.inertia_)

# Graficar el metodo del codos
plt.plot(range(1, 11), inertias, marker='o')
plt.title('Método del Codo')
plt.xlabel('Número de Clusters (k)')
plt.ylabel('Inercia')
plt.show()
