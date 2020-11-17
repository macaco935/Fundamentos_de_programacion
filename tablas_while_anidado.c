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
    
    int x,y,t,turno ;
     
     x=10;
     y=10;
     turno=1;
     t= 1;
     
     while(t<=x){
         turno= 1;
         while(turno<=y){
             printf("%d X %d = %d\n",t,turno,t*turno);
             turno=turno+1;
         
         }
         printf("---------------------------\n");
         t=t+1;
         
        
      
     }
 
   
     
    return (EXIT_SUCCESS);
}

