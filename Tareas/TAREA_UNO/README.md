### Instrcciones de ejecución ###
Colocar en la terminal mingw32-make all
Luego .\adivina.exe
De esta forma el programa podrá ejecutarse.

# Parte Teórica #

### 1. ¿Cuál es la principal diferencia entre C y C++? ###
C es un lenguaje de propócito general, mientras que C++ está orientado a objetos. Además, los datos son más seguros en C++, porque C++ ofrece modificadores para limitar su acceso por parte del usuario. Por último, C++ tiene un manejo de excepciones bien diseñado, lo que facilita el proceso de depuración más que en C.[1]

### 2. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado?  Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que será más adecuado un lenguaje interpretado. ###

En un lenguaje compilado, la máquina de destino traduce directamente el programa. En un lenguaje interpretado, el código fuente no es directamente traducido por la máquina de destino. En cambio, un distinto programa, mejor conocido como intérprete, lee el código y lo ejecuta. [2]

Ejemplos donde es más conveniente usar lenguaje compilado: firmware para microcontroladores, videojuegos, programas que impliquen calculos matematicos intensivos como simulaciones.

Ejemplos donde es más conveniente usar lenguaje interprete: Automatización de pruebas de software, aplicaciones web, Automatización con scripts de Python.

### 3. Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación? ###
El linker es el encargado de crear el ejecutable

La mayoría de las veces se utilizan diversos archivos (modulos) a la hora de crear un programa. Cada uno de estos módulos se compila de forma independiente y dispone de una referencia simbólica. Así pues, una vez compilados, el linker podrá crear un «único» archivo, unificando todos los archivos objeto gracias a sus referencias simbólicas.

El enlazador puede tomar la información a través de archivos objeto o de bibliotecas. Además, es capaz de eliminar todos aquellos recursos que no sean necesarios. Finalmente, enlaza toda la información recopilada para poder devolver los ejecutables o las bibliotecas que se quieran crear. [3]

### 4. Describa las diferencias clave entre los tipos de datos derivados y primarios en C++. ###
Los tipos de datos primarios en C++ son los componentes básicos que representan valores simples (float, booleans, etc), mientras que los tipos de datos derivados se construyen a partir de ellos y permiten la creación de estructuras más avanzadas y personalizadas.
### 5. Defina qué significa inicializar y declarar una variable. ###
Declarar una variable consiste en informar al compilador sobre la existencia de “un dato” y especificar su tipo de datos. Al declarar una variable, se reserva un espacio en la memoria para almacenar valores del tipo de datos especificado. Iniciar una variable consiste en darle un valor a esa variable
### 6. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios? ###
La sobrecarga de funciones en C++ se refiere a el  poder de definir varias funciones con el mismo nombre en un mismo ámbito, pero con parámetros diferentes. 

Al llamar a la funcion, se ejecutará la funcion que reciva los paramtros predeclarados.
### 7. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real. ###
Es una variable que almacena la dirección de memoria de otra variable. En lugar de contener el valor directo, un puntero "almacena" la ubicación en la memoria donde se encuentra el valor de la variable a la que apunta.
### 8. ¿Una variable global almacena el valor original de una operación en una función o una copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar de locales en ciertos contextos. ###
Una variable global almacena el valor original de una operación en una función cuando se trabaja directamente con esa variable global dentro de la función. Cuando se modifica el valor de la variable global directamente en la función, la variable global retendrá el valor modificado después de que la función haya sido ejecutada.

En algunos casos, se utilizan variables globales para almacenar valores que afectan el comportamiento de diversas partes del programa. Aunque pueden tener efectos secundarios no deseados.

### 9. Investigue y explique tres métodos comunes de la biblioteca string en C++. ###
Declaración y Asignación a un tipo string: 
A un objeto que hayamos declarado como tipo string, se le pueden asignar otros objetos del mismo tipo, cadenas entre comillas dobles e incluso un único carácter a un tipo string.[4]

Acceso a un caracter del tipo string:
la forma más común y fácil de acceder a un caracter en una determinada posición que queramos es mediante el uso de [] (corchetes) cómo se hace con los arrays, de esta forma si tenemos un tipo string de nombre str al cual le asignamos la palabra «programa» y queremos que se nos retorne la letra que está en la posición 3. [4]

Concatenación de Strings:
El operador ‘+’ (más) nos permite concatenar dos o más cadenas, entonces en el siguiente ejemplo si tengo a str1, str2 que contienen las cadenas «Julio» y «Cesar» respectivamente puedo unir (concatenar) el contenido de str2 a str1 solo poniendo str1 = str1 + str2. [4]

### 10. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while? ###
En un bucle 'while', la condición se verifica antes de que se ejecute el cuerpo del bucle. Si la condición es falsa desde el principio, el cuerpo del bucle nunca se ejecutará.

En el caso de un bucle do-while, la condición se verifica después de que se ejecuta el cuerpo del bucle. Esto garantiza que el cuerpo del bucle se ejecute al menos una vez, incluso si la condición es falsa desde el principio.
### 11. ¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta. ###
No, no se pueden almacenar funciones directamente en una estructura como se almacenan datos o variables.

Sí, en C++ si se puede encapsular datos en miembros privados y públicos dentro de una estructura (o clase).
### 12. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo. ###
La utilidad radica en: Compilación más eficiente, Organización, Facilitar la reutilización,
Compartir código en varios proyectos; hay veces en las que más de un proyecto utilizan el mismo código, sería genial incluir el mismo el ambos proyectos y si se modifica este código automáticamente se modifique en ambos proyectos (es la esencia de las bibliotecas). [5]

También está la de dividir tareas entre programadores. Si se tiene un equipo de programadores y se necesita que trabajen a la vez en un mismo proyecto solo se les asigna un fichero a cada uno y luego juntarlos, sin que se pisen unos a otros (Este es el principio de la Programación Orientada a Objetos y la división en clases independientes unas de otras). [5]

El propósito específico del archivo .hpp es Incluir declaraciones de funciones y clases, pero no las implementaciones detalladas.

.cpp, contiene las implementaciones detalladas de las funciones y clases declaradas en los archivos de encabezado.

Main.cpp, puede incluir instancias de clases, llamadas a funciones, y cualquier código necesario para iniciar y ejecutar el programa.

### 13. Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza. ###
Se refiere a la conversión explícita de un tipo de dato a otro(int a double, por ejemplo). Es útil cuando se desea realizar operaciones entre variables de tipos diferentes o cuando se necesita asignar un valor de un tipo a una variable de otro tipo.

Las situaciones en las que es útil usar Typa Casting se presentan cuando se requiere convertir un tipo de dato en otro para facilitar operaciones aritméticas y asignaciones, es útil para convertir entre punteros de clases base y clases derivadas. Tambien ayuda a evitar la Pérdida de Datos.

### 14. ¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto. ###
Puede hacer que el código sea difícil de leer y entender. [6] Al saltar de un lugar a otro dentro del código dificulta el seguimiento del flujo de ejecución, generando posibles errores no deseados y afectando la mantenibilidad del código.
También puede dificultar el entendimiento de la lógica del programa, especialmente en código grande y complejo. [6] Esto puede dar paso a errores difíciles de detectar y corregir.

Se puede reemplazar la sentencia goto con enfoques alternativos. En lugar de utilizar goto para saltar a una etiqueta específica, utiliza estructuras de control de flujo (if, else), para repetir código se puede usar bucles (while, for), también el hacer uso de funciones para modularizar el código y evitar la necesidad de saltos incontrolados.

### 15. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales. ###
Las variables se almacenan en la memoria RAM y el espacio de memoria que ocupan (en bytes) depende de su tipo. [7]

Las variables locales suelen almacenarse en la memoria de la pila (stack). 

Las variables globales suelen almacenarse en la memoria estática.

La memoria estática tiene una duración que abarca toda la ejecución del programa, mientras que la memoria de la pila tiene una duración limitada al ámbito de la función o bloque en el que se declaran las variables.

En la memoria estática, la asignación y liberación son automáticas y gestionadas por el sistema.
En la memoria de la pila, solo existen durante la entrada y salida del bloque.
### 16. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero? ###
Pasar Parámetros por Valor:
Se pasa el valor real de la variable al parámetro de la función.
Los cambios en el parámetro dentro de la función no afectan la variable original.

Pasar Parámetros por Referencia:
Se pasa la referencia (dirección de memoria) de la variable al parámetro de la función.
Los cambios en el parámetro dentro de la función afectan directamente a la variable original.

Pasar Parámetros por Puntero: Se pasa la dirección de memoria de la variable al parámetro de la función utilizando un puntero.
Los cambios en el parámetro dentro de la función afectan directamente a la variable original.

El uso de cada caso dependerá de las necesidad del programa.
### 17. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero. ###
El puntero apunta inicialmente a la primera dirección de memoria del arreglo. Apunta al primer elemento del arreglo(ubicación cero). La dirección de memoria del primer elemento es la misma que la dirección de memoria del propio arreglo.

Se puede utilizar un bucle for para recorrer el arreglo mediante el puntero: for (int i = 0; i < 5; ++i).

En cada iteración, i recorre donde apunta el puntero en la posición actual y luego se incrementa el puntero a la siguiente posición del arreglo.

### 18. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos. ###
Un puntero doble es un puntero que apunta a otro puntero. También los hay triples (que contienen la dirección de un puntero doble), cuádruples, etc.

Ejemplos:

Matrices dinámicas, los punteros dobles son útiles para asignar memoria de manera dinámica y acceder a los elementos de la matriz.

Se utilizan punteros dobles para que una función pueda modificar un puntero original.

Matrices tridimensionales, los punteros dobles se utilizan para gestionar la asignación y liberación de memoria.
### 19. ¿Cuál es la diferencia entre un break y un continue en los bucles de C++? ###
'break' se utiliza para salir inmediatamente de un bucle, interrumpiendo su ejecución basándose en alguna condición.

'continue' se utiliza para saltar a la siguiente iteración del bucle, omitiendo el resto del código dentro del bucle para la iteración actual.
### 20. ¿Para qué se utiliza la directiva #ifndef? ###
La directiva #ifndef comprueba si no se ha definido una macro.

Si el identificador especificado no está definido como una macro, las líneas de código inmediatamente después de la condición se pasan al compilador. [8]
### 21. ¿Qué es el puntero this en C++? ###
Es un puntero accesible solo dentro de las funciones miembro no estáticas de un tipo class, struct o union. Señala al objeto para el que se llama a la función miembro. [9]
### 22. ¿Qué es un puntero nullptr? ###
Un puntero nulo tiene un valor reservado que se denomina constante de puntero nulo para indicar que el puntero no apunta a ningún objeto o función válidos. Puede utilizar punteros nulos en los casos siguientes:
Inicializar punteros,
Representan condiciones como el final de una lista de longitud desconocida,
Indica errores al devolver un puntero de una función. [10]
### 23. ¿Cuál es la diferencia entre un arreglo y una lista en C++? ###
Los arreglos son estructuras de datos estáticas, ya que hay que declarar su tamaño antes de utilizarlos. A diferencia de los arreglos, las listas son estructuras de datos que pueden ir creciendo conforme se vaya requiriendo. [11]
### 24. ¿Qué es una función prototipo? ###
Es una declaración que proporciona información anticipada acerca de una función antes de su definición completa. Este prototipo sirve para informar al compilador sobre la existencia de una función, su nombre, tipo de retorno y los tipos de sus parámetros. La función prototipo se coloca generalmente al inicio de un programa
### 25. ¿Investigue qué es un memory leak? ###
Es una forma involuntaria de consumo de memoria mediante la cual el desarrollador no puede liberar un bloque de memoria asignado cuando ya no es necesario. Las consecuencias de tal problema dependen de la propia aplicación. [12]

# Parte Automatización - Makefile #
## Parte Teórica ##


### 1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile? ###
CC: indica el uso del compilador. Especificando el compilador que se utilizará.

CFLAGS: indicadores adicionales para entregar al compilador de C++. [13]

CXXFLAGS: indicadores adicionales para proporcionar al compilador de C++. [13]

LDFLAGS: Contiene las opciones de enlazado que se pasan al enlazador.
### 2. ¿De qué se compone una regla en un Makefile? ###
Una regla tiene un nombre (etiqueta) y dice como recompilar un archivo (mediante
comandos) si algún archivo del que depende se modifica (dependencias). Una regla puede ejecutar más de un
comando.

### 3. Defina qué es un target y cómo se relaciona con sus prerequisitos. ###
El Target de una regla de archivo MAKE suele ser el nombre de un archivo que se creará como parte del proyecto. Suele ser un archivo ejecutable o un archivo de código objeto. Pero no tiene por qué ser un archivo. El destino debe separarse de los requisitos previos con dos puntos. El nombre del objetivo debe comenzar en la posición de la primera columna de la línea. [14]

Son los archivos o acciones que deben estar disponibles o completarse antes de que el objetivo pueda ser construido o actualizado. Si los prerequisitos cambian más recientemente que el target, se ejecutarán los comandos asociados con la regla. [15]
### 4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?  ###
-I:
se utiliza para especificar directorios donde el compilador debe buscar archivos de encabezado (headers) durante la compilación. Los archivos de encabezado contienen declaraciones de funciones y variables que se utilizan en el código fuente.

-c:
indica al compilador que solo realice la fase de compilación, generando archivos objeto (.o) a partir de archivos fuente (.c o .cpp). No se realiza la fase de enlazado.

-o:
Se utiliza para especificar el nombre del archivo de salida (ejecutable o archivo objeto). Indica al compilador el nombre del archivo que debe generar como resultado.
x
### 5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?  ###
Existen dos formas en las que una variable de un makefile puede obtener un valor, y se distiguen en la manera en la que están definidas.

Las variables de la primera forma se denominan variables de expansión recursiva, y se definen usando el símbolo = o por la directiva define. Para usar la variable debemos ponerla entre paréntesis predecida por '$' [16]

La otra forma que existe de definir variables, siendo su nombre variables de expansión simple, y definidas por := o ::= (preferiblemente el primero, puesto que ::= no está implementado en todas las versiones de make). [16]

Utilidad:

Este tipo de variables generalmente ayudan a hacer los makefiles más complejos predecibles, además de dejar redefinir una variable usando su propio valor. [16]

El uso de variables hace que el Makefile sea más legible y fácil de mantener. Cambiar un valor en un solo lugar afecta a todas las referencias a esa variable.


### 6. ¿Qué utilidad tiene un @ en un Makefile? ###
Se utiliza para suprimir la impresión del comando que sigue. Es una forma de hacer que la ejecución del comando sea silenciosa, evitando que el comando y sus resultados se impriman en la salida estándar.

Sin el @, el Makefile imprimiría el comando antes de ejecutarlo, lo cual puede ser útil, pero en situaciones normales, es común querer que la salida del Makefile sea más limpia y que solo muestre información relevante.

### 7. ¿Para qué se utiliza .PHONY en un Makefile? ###
es en sí mismo un destino para el makecomando y denota etiquetas que no representan archivos del proyecto. [17]
Se consideran como objetivos ficticios que siempre deben ejecutar sus comandos, independientemente de la existencia de archivos con el mismo nombre.

### Referencias: ###

[1] A. S, “C vs. C++: ¿Qué lenguaje de programación aprender?,” BitDegree.org Online Learning Platforms, Jan. 01, 2024. https://es.bitdegree.org/tutoriales/c-vs-c-plus-plus/

[2] Erick, “Lenguajes de programación interpretados vs compilados: ¿Cuál es la diferencia?,” freeCodeCamp.org, Sep. 23, 2022. https://www.freecodecamp.org/espanol/news/lenguajes-compilados-vs-interpretados/

[3] P. G. Álvarez, “¿Qué es un linker o enlazador?,” IA Notes, Jul. 25, 2021. https://ainotes298786558.wordpress.com/2021/05/24/que-es-el-linker/

[4] “La Clase String y sus Métodos más Importantes en C++,” Julio Echeverri, Jul. 24, 2014. https://julioecheverri.wordpress.com/2014/07/23/el-tipo-string-y-sus-metodos-mas-importantes-en-c/

[5] Adrigm, “Estructura del código fuente en C++,” Genbeta, Feb. 18, 2013. https://www.genbeta.com/desarrollo/estructura-del-codigo-fuente-en-c

[6] “IBM documentation,” Mar. 17, 2023. https://www.ibm.com/docs/es/db2/11.1?topic=procedures-goto-statement-in-sql

[7] “variables-y-constantes - MIKROE,” MIKROE. https://www.mikroe.com/ebooks/microcontroladores-pic-programacion-en-c-con-ejemplos/variables-y-constantes

[8] “IBM documentation,” Oct. 10, 2023. https://www.ibm.com/docs/es/i/7.5?topic=directives-ifndef-directive

[9] TylerMSFT, “El puntero this.,” Microsoft Learn. https://learn.microsoft.com/es-es/cpp/cpp/this-pointer?view=msvc-170

[10] “IBM documentation,” Oct. 10, 2023. https://www.ibm.com/docs/es/i/7.5?topic=pointers-null

[11] Platzi, “Cual es la diferencia entre arreglos y listas??,” platzi.com. https://platzi.com/discusiones/1543-kotlin/100973-cual-es-la-diferencia-entre-arreglos-y-listas/

[12] Memory leak |  Fundación OWASP.” https://owasp.org/www-community/vulnerabilities/Memory_leak

[13] “CFLAGS, CCFLAGS, CXXFLAGS - what exactly do these variables control?,” Stack Overflow. https://stackoverflow.com/questions/5541946/cflags-ccflags-cxxflags-what-exactly-do-these-variables-control

[14] “make and Makefiles.” https://faculty.cs.niu.edu/~mcmahon/CS241/Notes/makefiles.html

[15] “Tipos de requisitos previos (marca GNU).” https://www.gnu.org/software/make/manual/html_node/Prerequisite-Types.html

[16] “DGIIM1/C1/FS/Apuntes/Practicas/Makefiles.md at master · DGIIMUnderground/DGIIM1,” GitHub. https://github.com/DGIIMUnderground/DGIIM1/blob/master/C1/FS/Apuntes/Practicas/Makefiles.md

[17] M. Caci, “The meaning of the ‘.PHONY’ target inside a Makefile,” DEV Community, Jan. 08, 2021. https://dev.to/mcaci/the-meaning-of-the-phony-target-inside-a-makefile-4fj8