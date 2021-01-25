

#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int n=3;

    float A[n];
    float x=0;
    int t=0;
    float p;
    
    for(t;t<n;t=t+1){
        printf("Ingrese un elemento\n");
        scanf("%f",&x);
        A[t]=x;
        p=p+A[t];
    }
    float n1,n2,n3,n4;
    A[3]=p/3;
    n1=A[0];
    n2=A[1];
    n3=A[2];
    n4=A[3];
            
     FILE* fichero;
    fichero = fopen("D://Universidad//datos.txt", "wt");
     fprintf (fichero, " %f\n", n1);
     fprintf (fichero, " %f\n", n2);
     fprintf (fichero, " %f\n", n3);
     fprintf (fichero, " %f\n", n4);
    
    printf("Proceso completado");

    return (0);
}

