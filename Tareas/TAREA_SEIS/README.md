# Instrucciones de compilación #
El sistema se inicia por completo usando el comando 'mingw32-make' donde muestra las graficas de las distintas regresiones y clustering gestionadas desde el archivo main.

Para obtener el archivo .csv se usó el metodo 'api.authenticate()' de la biblioteca kaggle. Para poder llevar a cabo la obtención de los datos con el metodo anteriormente mencionado, se tuvo que declarar en las variables de entorno el 'username' y 'keys' del usuario de la laptop en uso.

Ingresando los datos de 'username' y 'keys' dentro del metodo 'api.authenticate()' no funcionó para este escritorio.
# Parte Teórica #
## Regresión: ##
### 1. ¿Qué es la regresión lineal y cómo se diferencia de la regresión no lineal? ###
En una regresión lineal, hay una sola variable independiente y una variable dependiente que se comporta como una función lineal.

En la regresión no lineal, los coeficientes del modelo no se pueden determinar directamente mediante métodos algebraicos, sino que generalmente se utilizan técnicas de optimización para estimar los parámetros del modelo que mejor se ajustan a los datos observados.
### 2. ¿Qué son los coeficientes de regresión y qué información proporcionan sobre la relación entre las variables? ###
Los coeficientes de regresión son los valores numéricos que acompañan a las variables independientes en un modelo de regresión.

 En la ecuación de regresión lineal Y = a + bX, el coeficiente de intersección (a) indica el valor esperado de la variable dependiente cuando la variable independiente es igual a cero. Por otro lado, el coeficiente de pendiente (b) indica cuánto cambia la variable dependiente por cada unidad de cambio en la variable independiente.
### 3. ¿Qué es el error cuadrático medio (MSE) y cómo se utiliza para evaluar la precisión de un modelo de regresión? ###
Es una métrica comúnmente utilizada para evaluar la precisión de un modelo de regresión. 

El MSE evalúa qué tan cerca están las predicciones del modelo de los valores reales. Cuanto menor sea el MSE, mejor será el ajuste del modelo a los datos observados. Esto significa que el modelo está haciendo predicciones más precisas. Por otro lado, un MSE más alto indica que el modelo tiene un peor ajuste a los datos.


### 4. ¿Cuál es la diferencia entre regresión simple y regresión múltiple y cuándo se utiliza cada una? ###
En la regresión simple, solo hay una variable independiente que se utiliza para predecir la variable dependiente. Es útil cuando se requiere examinar la relación entre dos variables específicas y se asume que esta relación es lineal.

En la regresión múltiple, hay dos o más variables independientes que se utilizan para predecir la variable dependiente. Puede ser útil cuando se quiere examinar la relación entre una variable dependiente y múltiples variables independientes.

## Clustering: ##
### 1. ¿Qué es el clustering y cuál es su objetivo principal en el análisis de datos? ###
el clustering busca dividir un conjunto de datos en subconjuntos, de tal manera que los elementos dentro de cada subconjunto sean más similares entre sí en términos de alguna medida de similitud o distancia que los elementos de otros subconjuntos.

El objetivo principal es explorar la estructura inherente de los datos y descubrir patrones o agrupaciones que puedan existir dentro de ellos. 
### 2. Describa brevemente los algoritmos K-Means y DBSCAN y cómo funcionan. ###
K-Means: El objetivo es dividir un conjunto de datos en k grupos (o clústeres) donde cada observación pertenece al clúster con la media más cercana. Busca dividir los datos en 
k clústeres minimizando la distancia entre los puntos y los centroides.

DBSCAN: se basa en que es capaz de identificar clústeres de forma arbitraria en un conjunto de datos, así como detectar puntos que no pertenecen a ningún clúster (ruido). Para hacerlo se basa en densidad que identifica clústeres conectados por regiones densas de puntos
### 3. ¿Qué es la inercia en el contexto del clustering y cómo se utiliza para evaluar la calidad de un agrupamiento? ###
Es una métrica utilizada para evaluar la calidad de un agrupamiento obtenido mediante algoritmos de clustering. La inercia mide cuántos puntos de datos dentro de un clúster están dispersos alrededor del centroide de su clúster.

Una menor inercia indica que los puntos dentro de cada clúster están más cerca de su centroide, lo que sugiere clústeres más compactos y bien definidos.

### 4. ¿Qué son los centroides y cómo se utilizan en el algoritmo K-Means? ###

Los centroides son puntos representativos de los clústeres utilizados en algoritmos tipo K-Means para definir la posición de cada clúster y asignar puntos a clústeres en función de su proximidad a estos centroides. Cada centroide representa el "centro" de un clúster en términos de la posición media de todos los puntos asignados a ese clúster.

### 5. Escriba la diferencia entre datos estructurados y no estructurados para análisis de datos. ###
Los datos estructurados son aquellos que están organizados de manera formal y siguen un formato predefinido y uniforme.
Tienen un esquema claro y consistente, con campos definidos y valores específicos para cada campo.
Suelen almacenarse en bases de datos relacionales o en formatos tabulares, como tablas en hojas de cálculo, bases de datos SQL, archivos CSV, entre otros.

Los datos no estructurados son aquellos que no tienen un formato predefinido y carecen de una organización formal.
Pueden ser de naturaleza textual, como documentos, correos electrónicos, publicaciones en redes sociales, comentarios de clientes, transcripciones de llamadas, entre otros.
También pueden ser datos multimedia, como imágenes, audio y video, así como datos generados por sensores o dispositivos IoT.
## Paquetes en Python ( init .py): ##
### 1. ¿Qué es un paquete en Python y cómo se diferencia de un módulo? ###
Un paquete es una colección de módulos organizados en un directorio con un archivo especial llamado __init__.py.
El archivo __init__.py puede estar vacío o puede contener código de inicialización para el paquete.

Un módulo es simplemente un archivo de Python que contiene funciones, clases y variables que pueden ser utilizadas en otros programas.

### 2. ¿Cuál es la función del archivo __init__.py dentro de un paquete de Python? ###
indica que el directorio es un paquete, realiza tareas de inicialización y puede contener documentación del paquete.

### 3. ¿Cómo se importa un módulo o función desde un paquete en Python? ###
Para importar un módulo o función desde un paquete, se puede utilizar la palabra clave import seguido del nombre del paquete.
### 4. ¿Qué es la variable __all__ en el archivo __init__.py y cuál es su propósito? ###
Es una lista opcional que se puede definir de un paquete en Python
Su propósito es especificar qué módulos (funciones, clases) deben ser importados cuando se utiliza import.
### 5. ¿Cuál es la ventaja de organizar el código en paquetes y módulos en Python? ###
La modularidad permite dividir el código en componentes más pequeños y manejables, lo que facilita su desarrollo, mantenimiento y reutilización.
También permite la reutilización de funciones, clases y otros componentes en diferentes partes del proyecto o incluso en proyectos diferentes.

## Python HTTP y Servicios Web (API): ##
### 1. ¿Qué es una API y cuál es su función en el contexto de los servicios web? ###
Una API define los métodos y protocolos que permiten a aplicaciones y sistemas comunicarse entre sí de manera eficiente y segura a través de la red. Esto se puede lograr siguiendo un conjunto de reglas.
### 2. ¿Cuál es la diferencia entre una API RESTful y una API SOAP? ###
API RESTful: es un estilo arquitectónico basado en estándares web, como HTTP, URI y JSON o XML. Los datos se transmiten principalmente en formato JSON o XML.

API SOAP: es un protocolo de comunicación basado en XML que define un conjunto de reglas para la estructura de los mensajes y el intercambio de información entre aplicaciones. 

### 3. Describa los pasos básicos para consumir una API utilizando Python. ###
Instalar e importar la biblioteca request.

Solicitar la API usando .get, por ejemplo.

Por último, procesar la respuesta recibida. por ejemplo, usando .json()
### 4. ¿Qué es la autenticación de API y por qué es importante? ###
es un proceso de seguridad utilizado para verificar la identidad de los clientes o usuarios que intentan acceder a una API. Permite controlar quién tiene acceso a los recursos y funcionalidades expuestos por la API. 

Es importante implementar un método de autenticación sólido y seguro para proteger tanto la API como los datos y servicios que proporciona.
### 5. ¿Cuál es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes a una API y HTTP? ###
GET: se utiliza para solicitar datos de un recurso específico en el servidor.

POST: se utiliza para enviar datos al servidor para ser procesados o almacenados.

PUT: se utiliza para actualizar un recurso existente en el servidor con los datos proporcionados.

DELETE: se utiliza para eliminar un recurso específico en el servidor.
