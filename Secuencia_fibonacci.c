/* 
 * File:   Secuencia_fibonacci.c
 * Author: usuario
 *
 * Created on 10 de noviembre de 2020, 02:39 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
 
    int n1, n2, n3, n6;
    
    n1= 0;
    n2= 1;
    n3= 0;
    n6= 1;
    
    while(n6 <= 6){
        n6= n6+1;
        n3= n1+n2;
        n1= n2;
        n2= n3;
        printf("%d\n",n3);
    }
    
    //Cristian Martin Ceballos Trejo
    return (0);
}

