#ifndef JUEGO_HPP
#define JUEGO_HPP
#include <string>
#include <iostream>

//Funcion que muestra las opciones de juego
void menu();

// Elegir la dificultad
void elegirOpcion();

//Ejecuta la funcion tras elegir dificultad facil
int dificultadFacil(int b, int numeroA);

////Ejecuta la funcion tras elegir dificultad dificil
int dificultadDificil(int b, int numeroA);

//Genera el numero aleatorio
int generarAleatorio(int a, int b);
#endif