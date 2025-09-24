/******************************************************
 * Archivo: modulo.h
 * Nombre: Mauricio Beltrán Huertas
 * Fecha: 24/09/2025
 * Descripción:
 *  Archivo que contiene las declaraciones 
 *  de las funciones auxiliares que se usaron en el 
 *  programa.
 *  
 *  Contiene:
 *   - InicioMuestra: marca el inicio de la medición de tiempo.
 *   - FinMuestra: marca el fin y calcula el tiempo transcurrido.
 *   - iniMatriz: inicializa dos matrices con valores predefinidos.
 *   - imprMatrices: imprime una matriz en consola.
 *  
 *  Nota: Este archivo evita múltiples inclusiones 
 *  mediante directivas de preprocesador (#ifndef, #define, #endif).
 ******************************************************/

#ifndef __MODULO_H__ // Se evita que el archivo se incluya mas de una vez 
#define __MODULO_H__ // se define la constante de control 

void InicioMuestra(); // Funcion que marca el inicio de la medicion de tiempo 
void FinMuestra(); // Esta funcion determina el fin de la medicion y calcula en tiempo transcurrido 
void iniMatriz(int n, double *m1, double *m2); // funcion que inicializa dos matrices con valores predefinidos 
void imprMatrices(int n, double *matriz); // funcion que imprime la matriz 

#endif 
