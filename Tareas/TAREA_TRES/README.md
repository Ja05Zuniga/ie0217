## Instrucciones ##
Los programas se encuentran dentro de la carpeta src con el Makefile de los archivos de operaciones con matrices.
Dentro de src, también está la carpeta 'correo' en la que se encuetra la segunda parte de la tarea, también con su respectivo Makefile. Ambos proyecto pueden correr con mingw32-make                                                             

# Parte Teórica #
## Templates: ##
### 1. Definición de Templates: Explique el concepto de templates en C++ y proporcione un ejemplo simple. ### 
El concepto se basa en pasar el tipo de datos como parámetro para que sea no necesario escribir el mismo código para diferentes tipos de datos. 

Por ejemplo, para un determinado proyecto, es necesario un sort() para diferentes tipos de datos. En lugar de escribir y mantener varios códigos, podemos escribir un sort() y pasar el tipo de datos como parámetro. 

### 2. Sobrecarga de Plantillas: ¿Cómo se realiza la sobrecarga de funciones con plantillas en C++? ###
Se declara una platilla genérica: una función void que se llama mostrarNumero. Que recibe de parametro un valor tipo T.

Para hacer sobrecarga se necesita especificar el tipo de dato entre "<>" (después del nombre de la función) y especificar el tipo de dato en el parametro que recibe la funcion. 

###  3. Plantillas de Clases: Explique cómo se pueden utilizar plantillas en la definición de clases en C++. ###
Lo primero sería declarar la clase usando plantillas. Estas se declaran igual que las funciones. Si la clase recibe parámetros, estos se declaran de forma genérica para hacer uso de las plantillas.

El uso de la clase sigue siendo el habitual solo que, para hacer uso de templete, se necesita especificar el tipo de dato entre "<>" cuando se invoca la clase.
## Excepciones: ##
 ### 4. Manejo de Excepciones: Describa los bloques try, catch y throw y cómo se utilizan para el manejo de excepciones en C++. ###
 try: dentro de este bloque se coloca código que sea propicio a generar excepciones. Si se genera una escepción, este lo enviará al bloque catch.

 catch: este bloque recibe las excepciones generadas en 'try'. Pueden haber distintos bloques cath que manejen distintos tipos de excepciones. El tipo de excepción que maneja cada bloque de catch se especifica entre parentesis después de la declaración de catch.

 throw: este es más un comando que un bloque. Se usa dentro del bloque try y se encarga de lanzar excepciones (si las encuentra) y enviarlas al catch que maneja ese tipo de excepción.
###  5. Excepciones Estándar: Nombre al menos tres excepciones estándar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrían ser útiles. ###
out_of_range: Cuando se trata de ingresar a un rango fuera de un array.

invalid_argument: se utiliza para errores causados por argumentos que no son válidos. Por ejemplo, dividir por cero

e.what: es útil para obtener cuál fue la excepción.
 ### 6. Política de Manejo de Excepciones: ¿Qué es una política de manejo de excepciones y por qué es importante considerarla al diseñar software? ###
 Se refiere a las decisiones y estrategias que un programador o un equipo de progra,ación elige para manejar excepciones o errores dentro del software. Estas políticas establecen cómo se deben detectar, lanzar, propagar y manejar las excepciones en un programa.

 El manejo adecuado de excepciones contribuye a la robustez del programa. si el programa es robusto será capaz de enfrentar y recuperarse de situaciones excepcionales sin comprometer la estabilidad y la integridad del sistema. El manejo inadecuado de excepciones puede llevar a fallas inesperadas o comportamientos no deseados.
 ### 7. Noexcept: Explica el propósito de la palabra clave noexcept y cómo se utiliza en C++. ###
Se utiliza para especificar que una función no lanza excepciones. Su propósito principal es proporcionar información al compilador y a otros programadores sobre la garantía de que una función no generará excepciones durante su ejecución.

Noexcept es agregado al final de la declaración de una función. Sin embargo, se puede especificar si una funcion puede lanzar o no excepciones usando 'Noexcept(false ó true)' al final de la declaración de la función.
## STL (Standard Template Library): ##
###  8. Contenedores STL: Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno. ###
std::vector: es útil en situaciones donde la cantidad de elementos puede variar dinámicamente.

std::list: es útil en situaciones donde se necesita manipular frecuentemente la estructura de la lista, al tener que insertar o eliminar eficientemente elementos en cualquier posición.

std::map: puede ser útil en la implementación de un 'buscador' para encontrar definiciones extensas ingresando palabras claves como en un diccionario.

std::queue: útil para procesar tareas en el orden en que fueron recibidas, como en algoritmos que emplean "Primero en entrar, primero en salir".

std::set: útil para no agregar valores repetidos y no desperdiciar almacenamiento de memoria. Por ejemplo, agregar un nuevo contacto que ya existe; en este caso no se agregaría.
###  9. Iteradores en STL: Explique el concepto de iteradores en la STL y cómo se utilizan para acceder a elementos en contenedores. ###
Los iteradores son objetos que permiten recorrer secuencias de elementos en contenedores. Permiten acceder y modificar elementos de forma generica.

Existen varios iteradores en STL que se usan de formas diferentes. Por ejemplo .begin() y .end() retornan un iterador al inicio del contenedor y otro un campo más allá que el último elemento del contenedor. Sin embargo, it'++' se usa para avanzar el iterador al siguiente elemento, por lo que es común emplearlo en ciclos for.
###  10. Algoritmos STL: Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas. ###
std::sort: Ordena los elementos en un rango especificado en orden, por defecto, ascendente.

std::find: Busca un elemento específico en un rango y devuelve un iterador al primer elemento encontrado o al final si no se encuentra.

std::accumulate: calcula la suma de los elementos en un rango.
###  11. Algoritmos Personalizados: ¿Cómo podría utilizar un algoritmo personalizado con la STL? ###
Se puede crear una funcion y pasarla como argumento al algoritmo personalizado. Ejemplo: podemos hacer un vector que reciba varios enteros y usar std::accumulate para sumarlos e imprimir el resultado.
## Expresiones Regulares: ##
 ### 12. Definición de Expresiones Regulares: Defina qué son las expresiones regulares y proporcione un ejemplo simple. ###
 Son patrones de búsqueda que se utilizan para buscar, coincidir y manipular texto basado en ciertas reglas. Un uso es cuando se necesita encotrar numeros en lineas de texto
 ### 13. Caracteres Especiales: Enumere al menos tres caracteres especiales comúnmente utilizados en expresiones regulares y describa sus funciones. ###
 1. punto(' . '): hace que coincída con cualquier carácter único. Ejemplo a.b coincidirá con cualquier patron que inicie con a y termine con b sin importar la 'letra' del medio.

 2. Asterisco ('*'): Indica que el elemento anterior puede aparecer cero o más veces.

 3. Corchetes '[ ]': definen una clase de caracteres. El patrón coincide con cualquier carácter que esté dentro de los corchetes. También se puede usar rangos.

 ### 14. Uso de Expresiones Regulares en C++: ¿Cómo se utilizan las expresiones regulares en C++? Proporciona un ejemplo. ###
 Para trabajar con expresiones regulares se necesita la biblioteca regex. Un ejemplo de su ejecución sería declarar una variable 'string' y usando std::regex definir un rango de numeros, declarar un objeto que almacene las coincidencias y usando std::regex_search poder buscar los numeros en el texto que, para este caso almacenarlos en una variable.
### 15. Validación de Patrones: ¿Por qué las expresiones regulares son útiles para la validación de patrones en cadenas de texto? ###
Permiten realizar búsquedas eficientes de patrones en grandes cantidades de texto. se puede buscar, coincidir y extraer información específica de manera rápida, precisa y sencilla.
