

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
    float mb=0;
    int r;
    
    for(t;t<=n;t=t+1){
        printf("Ingrese un elemento\n");
        scanf("%f",&x);
        A[t]=x;
    }
   
    
    
    for(r=0;r<=n;r=r+1){
        for(t0=0;t<=n;t=t+1){
            if(A[t] > A[t+1]){
            mb=A[t];
            A[t] = A[t+1];
            A[t+1]=mb;
            }
        }
    }
    printf("Numeros ordenados con el metodo burbuja\n");
    
    for(r=0;r<=n;r=r+1){
        printf("%f_",A[r]);
        
    }    
        
        
    
    

    return (0);
}

