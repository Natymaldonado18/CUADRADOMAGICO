#include <stdio.h>
#include "magicSquare.h"
 
int cuadradoMagico(int filas, int columnas, int cuadrado[filas][columnas], int sumar_diagonales) {


  int magicconstant = calcularConstanteMagica(filas, columnas, cuadrado);
  int sumar_filas, sumar_columnas; 

    for (int i =0; i <filas; i ++){
   sumar_columnas=0;
   sumar_filas=0;

        for (int j=0; i <columnas; i ++){
         sumar_filas += cuadrado [i][j];
         sumar_columnas += cuadrado [i][j];
        }
    

    if (sumar_filas != magicconstant || sumar_columnas != magicconstant) {
            return 0;
    }
    }

       return 1;
  
}

int calcularConstanteMagica(int filas, int columnas, int cuadrado[filas][columnas]) {
    return cuadrado[0][0]; 
    



}

void imprimirCuadrado(int filas, int columnas, int cuadrado[filas][columnas]) {
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
           printf ("%d", cuadrado [i][j]);
        }
    }
    printf ("\n");
}