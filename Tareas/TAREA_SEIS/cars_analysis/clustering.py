from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
import numpy as np

def metodo_del_codo(X):
    """El metodo del codo nos ayuda a elegir el numero de cluster"""

    # Calcular la inercia para diferentes valores de k
    inertias = []
    for k in range(1, 11):
        kmeans = KMeans(n_clusters=k, random_state=42)
        kmeans.fit(X)
        inertias.append(kmeans.inertia_)
    
    # Dibujar la curva del codo
    plt.plot(range(1, 11), inertias, marker='o')
    plt.title('Curva del Codo')
    plt.xlabel('Número de Clusters')
    plt.ylabel('Inercia')
    plt.show()
    
    # Analizar la curva del codo para determinar el número óptimo de clusters
    # Aquí puedes implementar tu propio criterio para seleccionar el número de clusters,
    # como buscar el punto de inflexión en la curva, por ejemplo.
    # Por ahora, devolveremos simplemente el valor de k para el cual la inercia comienza a estabilizarse.
    diff = np.diff(inertias)
    diff_r = diff[1:] / diff[:-1]
    k_optimo = np.argmax(diff_r) + 2  # El +2 es para compensar el índice 0 y la omisión del primer punto

    return k_optimo

"""Esta función usa el metodo K-means y muestra muestra un grafico 3D con las caracteristicas seleccionadas
    X: es la columna con tres caracteristicas
    k: es el número de cluseters que se considere optimo en base al grafico a la curva de la inercia versus el número de clusters
    Retorna un grafico 3D"""
def k_means(X, k):
    # Configurar el tamaño del gráfico
    plt.figure(figsize=(8, 6))

    # Configuración de K-Means con un número de clusters (k) específico
    kmeans = KMeans(n_clusters=k) 

    # Ajuste del modelo
    kmeans.fit(X)

    # Etiquetas de los clusters y coordenadas de los centroides
    labels = kmeans.labels_
    centroids = kmeans.cluster_centers_

    # Graficar los puntos de datos y los centroides de los clusters
    plt.scatter(X['year'], X['selling_price'], c=labels, cmap='viridis', edgecolor='k', alpha=0.6)
    plt.scatter(centroids[:, 0], centroids[:, 1], c='red', marker='X', s=200, label='Centroids')

    plt.title(f'Resultado del Clustering con K-Means: Año vs  Precio de Venta ({k} clusters)')
    plt.xlabel('Año')
    plt.ylabel('Precio de Venta')
    plt.legend()

    # Añadir malla al gráfico
    plt.grid(True, linestyle='--', alpha=0.5)

    # Ajustar el diseño
    plt.tight_layout()

    # Mostrar el gráfico
    plt.show()

    #Segundo gráfico 
    # Graficar los puntos de datos y los centroides de los clusters
    plt.scatter(X['km_driven'], X['selling_price'], c=labels, cmap='viridis', edgecolor='k', alpha=0.6)
    plt.scatter(centroids[:, 0], centroids[:, 1], c='red', marker='X', s=200, label='Centroids')

    plt.title(f'Resultado del Clustering con K-Means({k} clusters)')
    plt.xlabel('Kilometros conducidos')
    plt.ylabel('Precio de Venta')
    plt.legend()

    # Añadir malla al gráfico
    plt.grid(True, linestyle='--', alpha=0.5)

    # Ajustar el diseño
    plt.tight_layout()

    # Mostrar el gráfico
    plt.show()

    # Crear una figura y un eje 3D
    fig = plt.figure(figsize=(10, 8))
    ax = fig.add_subplot(111, projection='3d')

    # Graficar los puntos de datos con colores según los clusters
    scatter = ax.scatter(X['year'], X['selling_price'], X['km_driven'], c=labels, cmap='viridis', marker='o')

    # Etiquetas de los ejes
    ax.set_xlabel('Año')
    ax.set_ylabel('Precio de Venta')
    ax.set_zlabel('Kilómetros Recorridos')

    # Título del gráfico
    plt.title('Visualización 3D de características de vehículos con clusters')

    # Añadir leyenda de los clusters
    legend1 = ax.legend(*scatter.legend_elements(), title="Clusters")
    ax.add_artist(legend1)

    # Mostrar el gráfico
    plt.show()