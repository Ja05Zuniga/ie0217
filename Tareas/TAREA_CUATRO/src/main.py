from alergias import Alergia
from evaluacionEspecifica import EvaluarAlergias
from evaluacionGeneral import EvaluacionGeneral
from tipo_de_alergias import TipoDeAlergia

"""
@file
@brief Este script proporciona un programa para gestionar alergias.

El programa permite realizar diferentes acciones relacionadas con alergias, como verificar a qué tipo de alergias es sensible el usuario, conocer su puntaje de alergia, ingresar nuevas alergias, y calcular un promedio de alergias identificadas y no identificadas.
"""

def main ():
    """
    @brief Función principal que gestiona el uso general del programa.

    La función principal presenta un menú de opciones al usuario y realiza las acciones correspondientes según la elección del usuario.
    """

    hola="Ingrese un valor. \n1. Para ver a qué tipo de alergias es sensible. \n2. Para conocer su puntaje de alergia. \n3. Para ingresar una alergia. \nPresione enter para salir\nDato: "
    opcion = input(hola)
    while opcion !="":

        if opcion == "1":
            try:
                puntaje = int(input("Ingrese su puntaje de alergia: "))
                if puntaje == 0:
                    print("El valor no puede ser cero")
                else:
                    print("\n")
                    EvaluarAlergias(puntaje).imprimir_evaluacion()
                    print("\n")
            except ValueError:
                print("Error: Por favor, ingrese un número válido.")

        elif opcion == "2":
            lista = []
            while True:
                entrada_usuario = input("Ingrese un elemento (presione enter para salir): ")
                if entrada_usuario=="":
                   break
               
               #Agregar la entrada del usuario a la lista
               
                lista.append(entrada_usuario)
                try:
                   elemento = int(entrada_usuario)

                except ValueError:
                    elemento = entrada_usuario
                
                #Agre
                    
                lista.append(elemento)

            manejador_diccionario = TipoDeAlergia(*list(set(lista)))
            resultado, no_formato = manejador_diccionario.crear_diccionario_desde_lista()
            puntacionPar = manejador_diccionario.revicionPares()
            puntuacionNoPar = manejador_diccionario.revicion_no_pares()
            diccionario1 = manejador_diccionario.agregar_diccionario()
            diccionario, no_diccionario = manejador_diccionario.comparar_diccionarios()
            puntuacion = puntuacionNoPar+puntacionPar
            enteros, letras = manejador_diccionario.separar_string_int()

            print("\nPuntuacion del paciente:", puntuacion)
            print("\nDiccionario de alergias del paciente:", diccionario)
            print("\nNombres de alergias no encontradas:", enteros)
            print("\nValores de alergias no encontradas:", letras)
            print("\nElementos ingresados por pares no encontrados:", no_diccionario)
            print("\n")
            EvaluacionGeneral(*list(set(lista))).calcular_promedio()

        elif "3":
            try:
                clave = input("Ingrese el nombre de la alergia que desea agregar: ")
                valor = int(input("Ingrese el valor de la alergia que desea agregar: "))
                if clave not in Alergia.alergias or Alergia.alergias[clave] != valor:
                    if clave in Alergia.alergias:
                        print("La clave ya existe. Ingrese otra clave.")
                    elif valor in Alergia.alergias.values():
                        print("El valor ya existe. Ingrese otro valor.")
                    else:
                        Alergia.alergias[clave] = valor
                        print("La alergia se agregó con éxito")
                else:
                    print("La clave o el valor ya existen. Ingrese otro")
            except ValueError:
                 print("Error: Ingrese un valor numérico válido para la alergia.")
            except Exception as e:
                print(f"Error inesperado: {e}")
            print("\n")

                
        else: 
            print("Opcion no valida")
        opcion = input(hola)

if __name__ == "__main__":
    main()