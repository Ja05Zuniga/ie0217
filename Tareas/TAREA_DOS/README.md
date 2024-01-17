## Intrucciones para iniciar el código ##
Me rendí con el código, el ejecutable es: ejecutable.exe

# Parte Teórica #
###  1. Conceptos Fundamentales: Define qué es la programación orientada a objetos y explica sus principios fundamentales. ###  
Es un paradigma de programación, es decir, un modelo o un estilo de programación. [1] Este tipo de programación se utiliza para estructurar un programa de software en piezas simples y reutilizables de planos de código (clases) para crear instancias individuales de objetos. 

Esto nos ayuda muchísimo en sistemas grandes, ya que en vez de pensar en funciones, pensamos en las relaciones o interacciones de los diferentes componentes del sistema. [1]
###  2. Herencia: Explica el concepto de herencia en programación orientada a objetos y proporciona un ejemplo práctico.  ###  
La herencia define relaciones jerárquicas entre clases, de forma que atributos y métodos comunes puedan ser reutilizados. Las clases principales extienden atributos y comportamientos a las clases secundarias. A través de la definición en una clase de los atributos y comportamientos básicos, se pueden crear clases secundarias, ampliando así la funcionalidad de la clase principal y agregando atributos y comportamientos adicionales.

Se puede crear y reutilizar clases y objetos en diferentes partes de la aplicación, evitando la duplicación de código y mejorando la eficiencia.
###  3. Encapsulamiento: ¿Qué es el encapsulamiento en OOP y por qué es importante? Proporciona ejemplos de cómo se implementa en C++. ###  
La encapsulación contiene toda la información importante de un objeto dentro del mismo y solo expone la información seleccionada al mundo exterior. 
Esta propiedad permite asegurar que la información de un objeto esté oculta para el mundo exterior, agrupando en una Clase las características o atributos que cuentan con un acceso privado, y los comportamientos o métodos que presentan un acceso público.

Protege la información del programa, ya que solo se puede acceder a los datos del objeto a través de propiedades y métodos privados.
###  4. Polimorfismo: Describe el polimorfismo y proporciona ejemplos de polimorfismo de tipo y polimorfismo de operador en C++. ###  
Consiste en diseñar objetos para compartir comportamientos, lo que nos permite procesar objetos de diferentes maneras. Es la capacidad de presentar la misma interfaz para diferentes formas subyacentes o tipos de datos. Al utilizar la herencia, los objetos pueden anular los comportamientos principales compartidos, con comportamientos secundarios específicos. El polimorfismo permite que el mismo método ejecute diferentes comportamientos de dos formas: anulación de método y sobrecarga de método.

###  5. Abstracción: ¿Cómo se relaciona la abstracción con la programación orientada a objetos? Proporciona ejemplos de cómo aplicar la abstracción en un contexto de programación. ###  
Es cuando el usuario interactúa solo con los atributos y métodos seleccionados de un objeto, utilizando herramientas simplificadas de alto nivel para acceder a un objeto complejo.

En la programación orientada a objetos, los programas suelen ser muy grandes y los objetos se comunican mucho entre sí. El concepto de abstracción facilita el mantenimiento de un código de gran tamaño, donde a lo largo del tiempo pueden surgir diferentes cambios
###  6. Clases y Objetos: Diferencia entre una clase y un objeto en programación orientada a objetos. Proporciona un ejemplo de cada uno. ###  
Una clase es una plantilla o un plano para crear objetos. Es un concepto abstracto que define un conjunto de propiedades y comportamientos comunes para un tipo específico de entidad.
Actúa como un modelo que especifica cómo se deben representar y comportar los objetos de ese tipo.
Define los atributos (datos) y los métodos (funciones) que los objetos de esa clase tendrán.
No ocupa memoria durante la ejecución del programa; es solo una especificación.

Un objeto es una instancia concreta de una clase. Es una entidad real que se crea utilizando la plantilla proporcionada por la clase.
Los objetos tienen estado (valores de los atributos) y comportamiento (resultante de ejecutar los métodos de la clase).
Cada objeto tiene su propia copia de los atributos definidos por la clase, pero comparte el mismo conjunto de métodos con otras instancias de la misma clase.

Un ejemplo de clases sería un carro y el objeto sería las caracteristicas de ese carro: modelo, marca, aceleración, etc.
###  7. Métodos Virtuales: Explica la importancia de los métodos virtuales en C++ y cómo se utilizan en la implementación de polimorfismo. ###  
Es una función miembro que se espera volver a definir en clases derivadas. Cuando se hace referencia a un objeto de clase derivada mediante un puntero o una referencia a la clase base, se puede llamar a una función virtual para ese objeto y ejecutar la versión de la clase derivada de la función. [2]

Las funciones virtuales garantizan que se llame a la función correcta para un objeto, con independencia de la expresión utilizada para llamarla. [2]
###  8. Constructores y Destructores: ¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso. ###  
Un constructor es un método que se ejecuta de manera automática al instanciar un objeto de una clase. El constructor tiene como finalidad la incialización de las variables de la clase y posiblemente ejecutar algunos de los métodos de la clase. [3]

El destructor es un método de la clase que se usa para destruir objetos del tipo de la clase, no tiene parámetros de entrada ni valor de retorno. 
Son especialmente útiles para destruir objetos de almacenamiento dinámico, es decir, aquellos para los que se reserva memoria con ayuda de un apuntador y el operador new. [4]
###  9. Sobrecarga de Operadores: Explica qué es la sobrecarga de operadores y proporciona un ejemplo de cómo se implementa en C++. ###  
La sobrecarga de operadores quiere decir que se pueden redefinir algunos de los operadores existentes en C++ para que actúen de una determinada manera, definida por el programador, con los objetos de una clase determinada. [5]

El objetivo último es simplificar al máximo el código a escribir. Una clase que disponga de operadores sobrecargados es una clase más compleja de definir, pero más sencilla e intuitiva de utilizar. [5]
###  10. Templates: Describe el concepto de templates en C++. ¿En qué situaciones sería útil utilizar templates? ###  
Es una construcción que genera un tipo o función normal en tiempo de compilación en función de los argumentos que proporciona el usuario para los parámetros de la plantilla. [6] La idea es pasar el tipo de datos como parámetro para que no necesitemos escribir el mismo código para diferentes tipos de datos.

Una situacion el que sería útil el uso de templantes es que una empresa necesite ordenar() para diferentes tipos de datos. En lugar de escribir y mantener varios códigos, podemos escribir un sort() y pasar el tipo de datos como parámetro. [7]
###  11. ¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente? ###  
Se refiere a la gestión manual de la memoria durante la ejecución de un programa.

Son comunmente usadas para gestionar recursos específicos del sistema que no están disponibles a través de variables locales. También cuando se necesita optimizar el uso de memoria asignando y liberando memoria según sea necesario.
###  12. Explique la diferencia entre new y malloc en C++. ¿Cuándo debería utilizar uno sobre el otro? ###  

malloc solo asigna un bloque de memoria sin inicializarlo. Para ello se requiere especificar explícitamente el tamaño de la memoria que se va a asignar. Una herramienta útil para eso es sizeof. Devuelve una funcion void.

'new' asigna de forma automatica la asiganción de memoria.
Tanto new como malloc se pueden usar con punteros, sin embargo, new devuelve la dirección donde fue almacenado (un puntero). Por lo que no es necesario convertirlo a un tipo puntero haciendolo más comodo de usar.

Es preferible el uso a new debido a su integración con la programación orientada a objetos y a la mayor comodidad que proporcionan. Sin embargo, malloc llega a ser más útil en casos que se requiera compartir datos entre varios sistemas con código existente.
###  13. ¿Qué es una fuga de memoria (memory leak) y cómo puede evitarse en programas en C++? ###  
Es cuando un programa de computadora reserva espacio en la memoria pero no libera ese espacio cuando ya no lo necesita. Lo que provoca que la memoria asignada permanezca ocupada y no esté disponible para otros usos.

Para evitar esto se debe liberar la memoria asignada dinamicamente tan pronto como ya no sea necesaria haciendo uso de 'delete' o 'fre'

###  14. Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso. ###  
Los punteros inteligentes se utilizan para asegurarse de que los programas están libres de memoria y de pérdidas de recursos y son seguros ante excepciones. [8]

En la mayoría de los casos, cuando se inicializa un puntero o un identificador de recursos sin formato para apuntar a un recurso real, el puntero se pasa inmediatamente a un puntero inteligente. [8]
###  15. ¿Cuál es la diferencia entre delete y delete[] en C++? ¿En qué contexto se utilizaría cada uno? ###  
detele se aplica a solo un objeto creado por new. En el caso de delete[] se aplica para arreglos.

Su uso depende del contexto. Si se declaró un objeto creado por new, se usa delete. Si se declaró un arreglo de objetos, se usa delete[]
###  16. ¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación? ###  
Son procedimientos o conjuntos de instrucciones que se utilizan para organizar un conjunto de elementos en un orden específico [9]. El objetivo principal es organizar los elementos de manera ascendente o descendente, facilitando así la búsqueda, recuperación y manipulación eficiente de datos.
###  17. Explique el funcionamiento del algoritmo de ordenamiento ”Bubble Sort”. ¿Cuál es su complejidad temporal en el peor caso? ###  
El bubble sort o Ordenamiento de Burbuja, compara pares de elementos adyacentes y los intercambia si están en el orden incorrecto. Repite este proceso hasta que todos los elementos estén ordenados. [9]

"Bubble Sort" tiene una complejidad temporal en el peor caso de O(n^2), donde "n" es el número de elementos en la lista a ordenar.

Esto significa que el tiempo de ejecución del algoritmo crece cuadráticamente con el tamaño de la entrada.
###  18. Describa el algoritmo de ordenamiento ”QuickSort”. ¿Cuál es su ventaja principal sobre otros algoritmos de ordenamiento? ###  
Quick Sort o Ordenamiento Rápido, elige un elemento llamado "pivote" y divide el conjunto en dos subconjuntos, uno con elementos menores que el pivote y otro con elementos mayores. Luego, aplica el mismo proceso de forma recursiva en cada uno de los subconjuntos. Este algoritmo también utiliza la estrategia de divide y vencerás. [9] Sin embargo, esta es su principal ventaja sobre otros algoritmos de ordenamiento
###  19. ¿Cuál es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno. ###  
Cuando los elementos de la lista a ordenar tienen varias características pero solo se utiliza una de ellas para ordenar pueden darse dos tipos de ordenamiento dependiendo del algoritmo. [10]

Se tiene una lista de números que pueden tener color azul o verde. La lista se ordenará por número y en este caso particular el número 4 se encuentra dos veces con diferente color.

Si el algoritmo mantiene el orden relativo que tenia la lista original se le llama un algoritmo estable.

Sin embargo, al ordenar, es posible que el orden relativo se modifique. En otras palabras, que un 4 verde que en un principio estaba después que un cuatro azul, pase a estar primero que el azul. A esto se le llama algoritmo inestable.
###  20. Hable sobre el algoritmo de ordenamiento “Merge Sort”. ¿Cuál es su complejidad temporal y en qué situaciones es preferible su uso?
Merge Sort o Ordenamiento por Mezcla, divide el conjunto de elementos en subconjuntos más pequeños, los ordena por separado y luego los fusiona para obtener un conjunto ordenado más grande. [9]

La complejidad temporal del algoritmo de ordenamiento "Merge Sort" es O(n log n) en todos los casos.

Su huso es preferible en situaciones en las que los datos residen en un dispositivo de almacenamiento externo, como discos duros. También se puede implementar de manera eficiente en listas ligadas. [11]
## Referencias: ##
[1] M. M. Canelo, “¿Qué es la Programación Orientada a Objetos?,” Profile Software Services, Sep. 05, 2023. https://profile.es/blog/que-es-la-programacion-orientada-a-objetos/

[2] TylerMSFT, “Funciones virtuales,” Microsoft Learn, Feb. 04, 2023. https://learn.microsoft.com/es-es/cpp/cpp/virtual-functions?view=msvc-170

[3] “Constructores - Miembros Especiales de la Clase en C++ (Práctica 2),” CodinGame. https://www.codingame.com/playgrounds/50577/miembros-especiales-de-la-clase-en-c-practica-2/constructores

[4] “Destructor - Miembros Especiales de la Clase en C++ (Práctica 2),” CodinGame. https://www.codingame.com/playgrounds/50577/miembros-especiales-de-la-clase-en-c-practica-2/destructor

[5] “Tutor de C++.” https://ccia.ugr.es/~jfv/ed1/c++/cdrom3/TIC-CD/web/tema15/teoria_2.htm

[6] TylerMSFT, “Plantillas (C++),” Microsoft Learn, Feb. 04, 2023. https://learn.microsoft.com/es-es/cpp/cpp/templates-cpp?view=msvc-170

[7] GeeksforGeeks, “Templates in C   with Examples,” GeeksforGeeks, Sep. 12, 2023. https://www.geeksforgeeks.org/templates-cpp/

[8] TylerMSFT, “Punteros inteligentes (C++ moderno),” Microsoft Learn. https://learn.microsoft.com/es-es/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170

[9] “Algoritmos de ordenación con ejemplos en C++,” Jun. 27, 2023. https://www.swhosting.com/es/comunidad/manual/algoritmos-de-ordenacion-con-ejemplos-en-c

[10] A. Navarro, “Algoritmos de ordenamiento,” Junco TIC, Apr. 26, 2021. https://juncotic.com/algoritmos-de-ordenamiento/

[11] V. Khandelwal, “What is Merge Sort Algorithm: How does it work, and More,” Simplilearn.com, Oct. 25, 2023. https://www.simplilearn.com/tutorials/data-structure-tutorial/merge-sort-algorithm