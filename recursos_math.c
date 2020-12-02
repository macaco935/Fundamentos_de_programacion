
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main() {
    
     // Raiz cuadrada de x 
    printf("%.2f\n",sqrt(900.0));
    printf("%.2f\n",sqrt(9.0));

    // Funcion exponencial
    printf("%.2f\n",exp(1.0));
    printf("%.2f\n",exp(2.0));

    // Logaritmo natural de x(base e)
    printf("%.2f\n",log(2.7118282));
    printf("%.2f\n",log(7.389056));

    // Logaritmo de x (de base 10)
    printf("%.2f\n",log10(1.0));
    printf("%.2f\n",log10(10.0));
    printf("%.2f\n",log10(100.0));

    // Valor absoluto de x 
    int x = 1;
    if (x > 0)
    {
        x = fabs(x);
    }
   

    if (x == 0)
    {
        x = fabs(x);
    }
    
    if (x < 0)
    {
        x = fabs(x);
    }
    printf("%.2f\n", fabs(x));

    // Redondear a x al entero mas pequeño que no sea menor que x
    printf("%.2f\n", ceil(9.2));
    printf("%.2f\n", ceil(-9.8));

    // Redondear a x al entero mas grande no mayor que x 
    printf("%.2f\n", floor(9.2));
    printf("%.2f\n", floor(-9.8));

    // x elevado a la potencia y(x^) 
    printf("%.2f\n", pow(2,7));
    printf("%.2f\n", pow(9, 5));
    
    // Residuo de xfv como numero de punto flotante 
    printf("%.2f\n", fmod(13.657, 2.333));

    // Seno trigonometrico de x (x en radicales )
    printf("%.2f\n", sin(0.0));

    // Coseno trigonometrico de x (x en radicales )
    printf("%.2f\n", cos(0.0));

    // Tangente trigonometrico de x (x en radicales )
    printf("%.2f\n", tan(0.0));

  
    return (0);
}

