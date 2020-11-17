/* 
 * File:   tablas_for.c
 * Author: usuario
 *
 * Created on 16 de noviembre de 2020, 10:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int x,y,tabla,turno ;
     
     x=10;
     y=10;
     
     for(tabla=1;tabla<=x;tabla++){
         turno= 1;
         for(turno=1;turno<=y;turno++){
             printf("%d X %d = %d\n",tabla,turno,tabla*turno);
        
         
         }
         printf("\n");
       
     }

    return (0);
}

