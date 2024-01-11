/**
 * @file juego.hpp
 * @brief Tarea 1. Estructuras
 * @version 1.0
 * @author Jean A. Zúñiga
 * @license MIT License
 * @copyright (c) [2014] [Jean Zuñiga]
 */

#ifndef JUEGO_HPP
#define JUEGO_HPP
#include <string>
#include <iostream>

/**
 * @brief elegirOpcion
 * Pide al usuario los numeros necesarios para llevar a cabo el juego
 * Muestra un menu que indica las dos dificulltades que presenta el juego. Tambien la opcion salir
 * 
 */
void elegirOpcion();

/**
 * @brief dificultadFacil Ejecuta la opcion de "Facil" del juego
 * 
 * @param b Son los intentos del jugador
 * @param numeroA Es el numero que el jugador debe adivinar
 * @return El resultado del juego: si el jugador ganó o perdió
 */
int dificultadFacil(int b, int numeroA);



/**
 * @brief dificultadDificil Ejecuta la opcion de "dificil" del juego
 * 
 * @param b Son los intentos del jugador
 * @param numeroA Es el numero  que el jugador debe adivinar
 * @return El resultado del juego: si el jugador ganó o perdió 
 */
int dificultadDificil(int b, int numeroA);


/**
 * @brief generarAleatorio Funcion que genera un numero aleatorio que el jugador debe adivinar
 * El numero aleatorio es generado dentro de un rango [min, max]
 * 
 * @param a Es el parametro menor del rango
 * @param b Es el parametro mayor del rango
 * @return Un numero aleatorio que se encuentra dentro del rango que recibe de parametros
 */
int generarAleatorio(int a, int b);

#endif