/* 
 * File:   arreglo_secuencia_100.c
 * Author: usuario
 *
 * Created on 22 de noviembre de 2020, 07:02 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int arreglo[99];   
    int x= 0;
    int n1= 0;
    int n2= 0;
    int n3= 0;
    
    arreglo[0]= 2;
    arreglo[1]= 3;
    
      n1= arreglo[0];
      n2= arreglo[1];
      printf("%d\n",arreglo[0]);
      printf("%d\n",arreglo[1]);
      printf("-----------------------------\n");
      
        for(x=2;x<=99;x=x+1){
            
	    arreglo[x]= n1 + n2;
            n1= n2;
            n2= arreglo[x];
            printf("%d\n",arreglo[x]);

        }
      //Cristian Martin Ceballos Trejo

    return (0);
}

