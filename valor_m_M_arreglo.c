

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int n;
    
    printf("Introdusca la dimencion del arreglo\n");
    scanf("%d",&n);
    
    
    float A[n];
    float x=0;
    int t=0;
    
    for(t;t<=n;t=t+1){
        printf("Ingrese un elemento\n");
        scanf("%f",&x);
        A[t]=x;
    }
    
    t=0;
    float min= A[0];
    float max= A[0];
    
    for(t;t<=n ;t=t+1){
        if(A[t] <min){
            min= A[t];
        }
        if(A[t] > max){
            max= A[t];
        }
       
    }
    
    printf("El valor minimo es %f\n",min);
    printf("El valor maximo es %f\n",max);
    
    

    return (0);
}

