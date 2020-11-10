/* 
 * File:   Mayor de 3 numeros.c
 * Author: usuario
 *
 * Created on 10 de noviembre de 2020, 02:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

      int a, b, c;
    
    a=4;
    b=4;
    c=4;
    
    if(a > b && a > c){
        printf("a es mayor\n\n");      
     } 
    else if(b > a && b > c){
        printf("b es mayor\n\n");
     }
    else if(c > a && c > b){
        printf("c es mayor\n\n");
     }
    else{
        printf("son iguales\n\n");
     }
    
   //Cristian Martin Ceballos Trejo
    return (0);
}

