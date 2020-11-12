/* 
 * File:   tablas_while_anidado.c
 * Author: usuario
 *
 * Created on 12 de noviembre de 2020, 11:08 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int x1,x2,x10,tope,turnos ;
     
     x1=1;
     x2=2;
     x10=10;
     tope=10;
     turnos=1;
     
     while(turnos<=tope){
         
        while(turnos<=tope){
             printf("%d x %d = %d\n",x1,turnos,x1*turnos);
             turnos= turnos+ 1;
        }
         
           turnos=1;
           printf("\n"); 
         
        while(turnos<=tope){
             printf("%d x %d = %d\n",x2,turnos,x2*turnos);
             turnos= turnos+ 1;
        }
         
           turnos=1;
           printf("\n"); 
         
        while(turnos<=tope){
             printf("%d x %d = %d\n",x10,turnos,x10*turnos);
             turnos=turnos+1;
        }
      
     }
   
   
     
    return (EXIT_SUCCESS);
}

