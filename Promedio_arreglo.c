

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int n;
    
    printf("Introdusca el numero total de elementos\n");
    scanf("%d",&n);
    
    n=n-1; //Esta resta es para que se cuente n desde 1 y no de 0
    
    float A[n];
    float x=0;
    int t=0;
    float p=0;
    
    for(t;t<=n;t=t+1){
        printf("Ingrese un elemento\n");
        scanf("%f",&x);
        A[t]=x;
        p=p+A[t];
        
    }
    
    n=n+1;//para regresar a n al numeo original
    p=p/n;
    printf("El promedio es = %f\n",p);


    return (0);
}

