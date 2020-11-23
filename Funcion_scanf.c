/* 
 * File:   Funcion_scanf.c
 * Author: usuario
 *
 * Created on 23 de noviembre de 2020, 01:09 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
   int arreglo[2];
    int n;
    int x=0;
    int t=0;
    
    while(x<=2){
        n=0;
        printf("Ingrese un numero\n");
         scanf("%d",&n);
         arreglo[x]=n;
        x=x+1;
    }
    
    printf("-----Valores guardados-------\n");
    
    for(x=0;x<=2;x=x+1){
            
            printf("%d\n",arreglo[x]);

        }

    //Cristian Martin Ceballos Trejo
    

    return (0);
}

