## Parte Teórica ##
### 1. Explique la diferencia entre una lista y una tupla en Python. ###
La diferencia más notable es la mutabilidad. Las listas son mutables, se puede agregar o eliminar elementos. Caso contrario con las tuplas, ya que estas son inmutables.

Otra diferencia notable es que en las listas se pueden almacenar elementos repetidos mientras que en las tuplas no.
### 2. ¿Qué es la sobrecarga de operadores en Python y cómo se implementa? ###
Es la capacidad de una clase para proporcionar una implementación específica para ciertos operadores nativos del lenguaje, permitiendo que las instancias de esa clase se comporten de manera personalizada en contextos que involucren esos operadores.

Su uso pedenderá del contexto y el uso de los operadores especiales que se usen. Sin embargo, declarando una clase que en esta se usen operadores especiales, sólo bastará con realizar la invocación correcto para de la clase (agregandole los datos correspondietes) para que el mismo lenguaje se encargue. Por ejemplo, si se declara un operador especial de multiplicación de vectores en una clase, se puede declarar un objeto, almacenarlo en una variable y realizar la operación de multiplicación como si fueran dos numeros normales.
### 3. Explique el concepto de  “alcanzabilidad”(scope) de una variable en Python. ###
El scope de una variable en python radica en la linea e identación en la que fue declarada.

Una variable declara dentro de una función, sólo será acequible dentro de esa función. En el caso de que esta variable haya sido declarada fuera de esta función, se puede acceder dentro y afuera de la función pero no se podrá modificar.
### 4. ¿Qué es un decorador en Python y cuál es su función principal? ###
Es una función que recibe otra función como entrada y devuelve otra función sin modificar el código fuente de la función que recibió como input.
### 5. ¿Cómo se gestionan las excepciones en Python? Proporcione ejemplos de uso de bloques try, except y finally. ###
La gestión de las excepciones en python no son muy diferentes que en C++. 

Se declara un try en una parte de código que se espera un posible error. Except es el encargado de manejar la excepción, puede haber varios excepts que manejen distintas excepciones. Por último, finally, que es usado para especificar un bloque de código que siempre se ejecutará, independientemente de si se lanzó una excepción o no.

### 6. ¿Qué son los generadores en Python y para qué se utilizan? ###
es una forma de crear iteradores de manera más eficiente. A diferencia de las funciones que devuelven una lista completa, los generadores permiten generar valores a medida que se necesitan y no se almacenan en la memoria. Estos se crean utilizando la declaración yield en fuciones. 
### 7. Explique la diferencia entre __init__ y __call__ en clases de Python. ###
__init__: se utiliza para inicializar los atributos de una instancia de la clase cuando se crea. Es el 'constructor' de una clase.

El método __call__ permite que una instancia de una clase sea invocada como si fuera una función. Incluso, se le pueden pasar parametros.
### 8. ¿Cómo se organizan los módulos y paquetes en Python? ¿Qué es __init__ .py? ###
Los modulos son archivos de python que contienen clases, funciones o variables.

Los paquetes son una coleccion modulos.

__init__ .py se utiliza para indicar que un directorio debe considerarse un paquete de Python.
### 9. Explique la diferencia entre métodos append() e extend() en listas de Python. ###
El metodo append() agrega un elemento al final de la lista.

En el caso de extend(), se usa para agregar una lista a otra lista.
### 10. ¿Cuál es la diferencia entre un método de clase y un método estático en Python? ###
Un metodo de clase se puede acceder y modificar los atributos de la clase. Recibe como input 'cls' (por convención)

Un metodo estático no tiene acceso a self ni a cls; no tiene acceso a la instancia o la clase. Tampoco puede modificar la clase o la instancia
### 11. Hable sobre las diferencias entre herencia simple y herencia múltiple en Python. ###
La herencia simple es cuando una clase hereda de una clase base. Mientras que la herencia múltiple es cuando una clase hereda dos o de más clases.
### 12. ¿Cómo se manejan los errores de importación de módulos en Python? ###
Los errores de importación de módulos se pueden abordar usando manejo de excepciones como try y multiples except.
### 13. ¿Cuál es la diferencia entre una clase y un objeto en Python? ###
Una clase puede definir conceptos genericos de algo. Por ejemplo una persona que tiene brazos, pelo, cabeza. Mientras que los objetos son las caracteristicas de una persona en concreto; como el color de pelo, el largo de los brazos, facciones de su cabeza.
### 14. Hable sobre la diferencia entre una clase abstracta y una interfaz en Python. ###
Las clases abstractas pueden contener métodos con implementaciones, incluidos métodos abstractos.
Las interfaces solo contienen la firma de los métodos, sin implementaciones.

Las clases abstractas pueden tener herencia y también pueden ser una clase base.
Las interfaces permiten que una clase implemente múltiples interfaces, lo que proporciona flexibilidad en el diseño.
### 15. Explique el concepto de sobreescritura de métodos en Python y cómo se realiza. ###
La sobreescritura de métodos permite a una clase hija (la que hereda) sobreponer una implementación específica a un método que ya está definido en su clase madre. Esto se logra creando un método con el mismo nombre en la clase hija que ya existe en la clase madre.
Emjemplo: Si se tiene una clase 'madre' que imprime 'Hola' y otra clase 'hija' que hereda de 'madre' que imprime 'mundo'. Si en ambas existen un metodo llamado 'invocar'. Entoces, creando una instancia de 'hija' y llamando al metodo 'invocar', se imprimiría el 'Hola' de la clase 'madre' y el 'mundo' de la clase 'hija'.

# Parte Práctica #
Las partes a evaluar serán las del archivo 'main.py' ya que ahí se hace uso de todas las funciones desarrolladas. 

Las pruebas se separan en tres: Parte 1; donde se ingresa la puntuación de alergias del paciente y muestra las alergias con sus respectivos valores, Parte 2; donde se calcula la puntuación de alergia ingresando las alergias del paciente y Parte 3; donde se puede ingresar alergias al diccionario con las alergias preexistentes.

## Medición de Tiempo de Ejecución: ##
### Pate 1: ###
En la parte 1 se ingresaron valores desde 1 hasta 120000000, siento este último el tiempo de cálculo más largo; de 19.41 segundos. Para los valores donde se registró una reducción del tiempo de ejecución fue para los valores que se acercaban a potencias de 2: 31, 33, 63, 65, 129, etc. Estos tiempos oscilaban entre 2 segundos para los valores medianamente pequeños y para los grandes no llegaron a superar los 7 segundos. Como el caso para 1025 que tardó 5.044 segundos y 1026 que tardó 12.9 segundos. 1023 tardó 4.84 segundos de ejecución.

Para los valores que no cumplen esta regla, sus tiempos eran más variados.

Para los valores que eran potencias de dos, se reportaron tiempos superiores a 7, en la mayoría de los casos.

### Parte 2: ###
Para el caso de 12 elementos donde: 7 no estaban en el diccionario (no se encontró con quién emparejar) y 5 si se encontró par. Se registró 36.32 segundos. Esa cifra disminuye cuando se ingresan sólo claves o valores pares (que clave o valor se encuentran en el diccionario alergias) ó sólo llaves y valores que no se encuentran. El numero aumenta cuando se ingresan valores mixtos, tanto par como no par (que no están en el diccionario).

### Parte 3: ###
La parte tres, a pesar de ser sencilla, no mostró tiempos bajos. Para el caso de que la alergia ingresada no existiera en el diccionario, se registraron tiempos entre 11 y 25 segundos. Para el caso de que la alergia a ingresar existiera en el diccionario, se reportaron tiempos entre 12 y 16 segundos.

Para ambos casos, se hicieron 3 pruebas.

## Perfilado del Código: ##
### Pate 1: ###
Para susodicha parte, para la primer prueba, se reportaron 23 llamadas de funciones en 7.716 segundos, donde el mayor tiempo fue empleado en los imput reportando 2.567 segundos. La función imprimir_evaluacion consumió 0.014 segundos.

Para los distintos casos, las llamadas de funciones variaron al igual que los tiempos de ejecución. Sin embargo los imput siempre reportaron un mayor consumo de tiempo, sin importar si saltaban las excepciones o el puntaje ingresado era muy alto o muy bajo. La función imprimir_evaluacion siguió reportando números bajos.
### Parte 2: ###
Para esta parte se realizó el mismo número de pruebas que en la sección 'Medición de Tiempo de Ejecución' y se reveló que: los imput son los que consumen más tiempo. Las funciones: revicion_no_pares(), calcular_promedio(), crear_diccionario_desde_lista(), y separar_string_int() consumen más recursos en comparación de las funciones: revicionPares(), comparar_diccionarios(), agregar_diccionario() que consumen en menor medida.

Que la función 'crear_diccionario_desde_lista()' sea la que más tiempo consume tiene sentido, ya que esta es la encargada de precesar si los inputs se ingresaron en pares o de forma individual y clasificarlos. Esta función es la que más líneas de código posee.

La función 'revicion_no_pares()' es la encargada de revisar si los valores que se ingresaron de forma no par, se encuentran en el diccionario alergias y preceder a clasificarlo y retornar la puntuación que estos generaron.

Sin embargo, la función 'calcular_promedio()' no es muy larga pero depende de muchas. Que dependa de otras funciones o cómo están tratadas las funciones que 'calcular_promedio()' depende, puede ser el causante de que esta función relativamente simple se encuentre como una de las que más tiempo consume. 

Esta función depende de 'separar_string_int()' y 'comparar_diccionarios()', esta última no reportó mucho consumo, sin embargo 'separar_string_int()' sí. 

La función 'separar_string_int()' puede ser la causante y su reformulación es necesaria para el mejoramiento del sistema. Esta función itera en la lista que almacena los valores no par que no se encuentran en el diccionario (todos estos elementos presentes en esta lista se manejan como strings) y los clasifica por enteros y strings. 

El imprimir esta lista sin pasar por este proceso de clasificación generaría una mejora en el sistema.
### Parte 3: ###
Para esta parte, los input son los que reportan mayor consume de tiempo. Esta parte del código depende enteramente del diccionario, por lo que las funciones empleadas para su funcionamiento, son las presentes en python.

# Instrucciones de uso del programa#
Makefile se programó para ejecutarse en Linux

El programa despliega tres opciones: 1. donde se ingresa la puntuación del paciente y se muestran las alergias que este es sensible, 2. donde el usuario puede ingresar las alergias que posee en un formato (alergia valor_de_la_alergia) o bien, sólo ingresar el nombre de la alergia o su valor y esta le mostrará su puntuación de alergia, las alergias que pudieron identificarse, las alergias que no se identificaron y el promedio entre las encontradas y la no encontradas. Por último, está la opción 3. Esta permite ingresar alergias al diccionario que no estén presentes en este.