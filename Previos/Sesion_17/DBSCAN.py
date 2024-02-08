#DBSCAN (Density-Based Spatial Clustering of Applications with Noise)
#Agrupamiento Espacial Basado en Densidad para Aplicaciones con Ruido
import matplotlib.pyplot as plt
from sklearn.datasets import make_moons
from sklearn.cluster import DBSCAN

# Generar datos de ejemplo (luna creciente)
X, _ = make_moons(n_samples=200, noise=0.05, random_state=42)

# Configurar y ajustar el modelo DBSCAN con parametros
dbscan = DBSCAN(eps=0.3, min_samples=5)
dbscan_labels = dbscan.fit_predict(X) # Etiquetas de clúster a cada punto de datos

# Visualizar resultados
plt.scatter(X[:, 0], X[:, 1], c=dbscan_labels, cmap='viridis', edgecolor='k', s=50)
plt.title('Resultado del Clustering DBSCAN')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')
plt.show()
