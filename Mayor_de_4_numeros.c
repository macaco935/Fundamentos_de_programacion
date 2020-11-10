/* 
 * File:   Mayor de 4 numeros.c
 * Author: usuario
 *
 * Created on 10 de noviembre de 2020, 02:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
     int a, b, c, d;
    
    a=4;
    b=4;
    c=45;
    d=4;
    
    if(a > b && a > c && a > d){
        printf("a es mayor\n\n");      
     } 
    else if(b > a && b > c && b > d){
        printf("b es mayor\n\n");
     }
    else if(c > a && c > b && c > d){
        printf("c es mayor\n\n");
     }
    else if(d > a && d > b && d > c){
        printf("d es mayor\n\n");
     }
    else{
        printf("son iguales\n\n");
     }

    //Ceballos Trejo Cistian Martin 

    return (0);
}

