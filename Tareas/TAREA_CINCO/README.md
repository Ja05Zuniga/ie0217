# Instrucciones de ejecución #
El programa se ejecuta usando la línea de comando mingw32-make pruebas.

Donde primero se ejecutará la primera parte de la tarea y una vez finalizada su ejecución, se ejecutará la segunda parte de la tarea.

En el caso que se desee ejecutar los archivos por separados, se puede lograr usando: mingw32-make run_prueba. Para el caso de la primera parte y para la segunda parte usando: mingw32-make run_prueba2.

NOTA: El archivo llamado prueba.py, que comprende la primera parte de la tarea, solo funciona con el makefile si se especifica la ruta donde se encuentra el archivo .CSV, sin importar que esté en la carpeta src. Si se ejecuta manualmente (python prueba.py, no sucede este error.

# Parte Teórica #
## Iteradores ##
### 1. ¿Qué es un iterador en Python y cuál es su propósito? ###
Es un objeto que puede ser utilizado en un bucle para recorrer secuencialmente un conjunto de elementos.

El propósito principal es permitir iteraciones sobre elementos de manera eficiente y sin necesidad de conocer los detalles internos de la estructura de datos subyacente.
### 2. Explica la diferencia entre un iterable y un iterador. ###
Un iterable es cualquier objeto se puede recorrer en un bucle. Pueden ser estructuras de datos como listas, tuplas, diccionarios, conjuntos, cadenas de texto, etc.

Un iterador es un objeto que realiza el seguimiento del estado durante la iteración a través de un iterable y proporciona el próximo elemento en la secuencia cuando se solicita.

## Excepciones ##
### 1. Define qué es una excepción en Python. ###
Es un evento que ocurre durante la ejecución de un programa y que interrumpe el flujo normal de ejecución. Cuando ocurre una excepción, el programa busca un bloque de código que pueda manejar la excepción específica, evitando que el programa se cierre bruscamente.
### 2. ¿Cuál es el propósito de la cláusula try...except en el manejo de excepciones? ###
try: contiene el código que puede lanzar una excepción.

except: especifica qué hacer cuando se captura una excepción específica.

finally: se ejecuta siempre, ya sea que se lance una excepción o no.
### 3. Explica la diferencia entre las cláusulas except y finally en el manejo de excepciones. ###
except se utiliza para manejar excepciones específicas que puedan ocurrir dentro del bloque try. Puedes tener múltiples bloques except para diferentes tipos de excepciones.

Si se lanza una excepción que coincide con uno de los bloques except, se ejecutará el código dentro de ese bloque permitiendo manejar de forma específica diferentes tipos de errores.

finally se utiliza para especificar un bloque de código que se ejecutará siempre, ya sea que se haya producido una excepción o no. Incluso si ocurre una excepción dentro del bloque try, el código en el bloque finally se ejecutará antes de propagar la excepción o continuar con la ejecución normal.

Es útil para realizar acciones de limpieza, como cerrar archivos o conexiones de red, independientemente de si se ha producido una excepción o no.

## Generadores ##
### 1. ¿Qué es un generador en Python y cuál es su ventaja sobre las listas tradicionales? ###
Un generador en Python es una forma de crear iteradores de manera más eficiente y con un menor consumo de memoria en comparación con las listas tradicionales. A diferencia de las listas, que generan todos los elementos y los almacenan en la memoria al mismo tiempo, los generadores generan elementos uno a la vez y solo cuando se solicitan. Esto significa que no se calculan ni almacenan todos los elementos en la memoria de antemano.

### 2. Explica cómo se puede crear un generador usando la función yield. ###
Se utiliza la palabra 'yield' en una función en lugar de 'return'. Cuando la función con 'yield' es llamada, devuelve un generador que puede utilizarse para iterar sobre los valores generados uno a uno.
### 3. ¿Cuándo es más apropiado usar generadores en lugar de listas? ###
Si se está trabajando con conjuntos de datos grandes y no se necesita acceder a todos los elementos al mismo tiempo, los generadores son más eficientes en términos de memoria. Los generadores generan elementos cuando se necesitan, mientras que las listas crean y almacenan todos los elementos en la memoria de inmediato.
## Pandas ##
### 1. ¿Cuál es la diferencia entre una Serie y un DataFrame en Pandas? ###
Una Serie es una estructura de datos unidimensional, similar a un array.
Está compuesta por dos arrays asociados: uno para los datos y otro para las etiquetas (índice). El índice por defecto es un rango de enteros, pero puedes especificar uno personalizado.

Un DataFrame es una estructura de datos bidimensional que se asemeja a una tabla de base de datos o una hoja de cálculo.
Está compuesto por Series, donde cada Serie representa una columna. Las columnas pueden tener diferentes tipos de datos.
Tiene un índice tanto para las filas como para las columnas.
Se puede crear a partir de diccionarios, listas de diccionarios, arrays de NumPy o incluso otras Series y DataFrames.
### 2. Explica cómo manejar valores nulos o faltantes en un DataFrame. ###
Se puede identificar valores nulos utilizando el método isnull() o isna() para identificar los valores nulos en un DataFrame. Esto devuelve un DataFrame de la misma forma, donde cada celda contiene True o False dependiendo de si el valor en esa celda es nulo o no.

Eliminar filas o columnas con valores nulos  utilizando los métodos dropna() para eliminar filas o columnas que contienen valores nulos. Por defecto, dropna() elimina filas que contienen al menos un valor nulo.

Rellenar valores nulos utilizado el método fillna() para rellenar los valores nulos con un valor específico.
### 3. ¿Cuál es la diferencia entre loc y iloc en Pandas?	###
'loc' se basa en etiquetas y es inclusivo en ambos extremos del rango (los límites inferior y superior estarán incluidos en la selección). Puedes seleccionar tanto la fila como la columna final del rango.

'iloc' se basa en índices enteros y es exclusivo en el extremo derecho del rango. El último índice especificado no se incluirá en la selección.

# Analisis de Datos #
## Primera Parte ##
Esta sección se dedicará a analizar los resultados y posibles usos de los hallazgos.

El archivo .csv que se usó fue el registro de aerolíneas estadounidenses sin escalas desde enero de 2013 hasta octubre de ese mismo año. Dentro de este se encontraban varios datos que se pueden emplear para analizar diversos temas. Sim embargo, para este trabajo, se usó para encontrar el número de despegues reales y número de pasajeros por aerolínea. Con esto en mente, se pudo determinar el trimestre más concurrido por las aerolíneas y las ciudades con mayor número de visitantes. además, se extrajo la aerolínea que transportó el mayor número de pasajeros, con sus respectivos números de vuelo, en el transcurso de 10 meses. También se logró extraer la aerolínea que realizó el mayor número de despegues reales con su respectivo número de pasajeros en el mismo periodo anteriormente mencionado.

La aerolínea que registró el mayor número de vuelos fue American Airlines Inc con pasajeros 26625164 totales y 179863 despegues. Seguida de Southwest Airlines Co, con pasajeros 23609674 totales y 183582 despegues. En el tercer lugar se encuentra Delta Air Lines con números muy parecidos a la segunda aerolínea.

La ciudad más transitada fue Orlando, Florida. Con mayor número de visitas en el segundo trimestre del 2023. Las 4 ciudades con más vuelos registrados pertenecen al estado de Florida. El segundo semestre del año se presenta la estación de verano en el territorio estadounidense coincidiendo que Florida es un estado popularmente conocido como un destino vacacional por sus playas oportunas para el verano.

## Implicaciones ##
El tener un seguimiento de los vuelos y pasajeros es útil para tener un seguimiento de la competencia por parte de las aerolíneas. El conocer cuál aerolínea tiene el mayor número de pasajeros hace preguntarse el porqué. De esa forma los ejecutivos pueden prepararse para hacerle frente o crear una alternativa útil para ellos. Por citar un ejemplo, comparado las dos aerolíneas que registraron el mayor número de pasajeros American Airlines Inc y Southwest Airlines Co.

La diferencia entre American Airlines Inc y Southwest Airlines Co es de 3015490 pasajeros. Sin embargo Southwest Airlines Co reportó 3719 vuelos más que American Airlines Inc. Se puede deducir que la primera compañía posee una flota de aviones mayores que la segunda. Teniendo esto en cuenta hace que la segunda aerolínea para reducir perdidas y aumentar ganancias debe planificar mejor sus vuelos. Ajustando precios, asientos, beneficios, aumentando flota, destino, etc.

El conocer la ciudad, cantidad y cuál semestre o mes se presenta esa cantidad es muy útil para comerciantes y empresarios para poder ajustar su planilla y prever ciertas subidas de demanda de ciertos productos. En los datos extraídos la ciudad más visitada en los periodos de enero a Octubre fue Miami, en la estación de verano. No se puede afirmar que todos vallan a vacacionar, pero si es común esa alza de personas que llegan vacacionar en esa estación en específico. Pudiendo extraer más datos se podría crear un perfil más específico para cada tipo de comerciante. Es bien sabido que las personas que provienen de ciudades densamente pobladas con climas templados suelen girar a destinos cálidos cuando llega el verano.
