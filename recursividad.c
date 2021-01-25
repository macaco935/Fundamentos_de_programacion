
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Factorial(long n);
long fibonacci(long n2);
long torres_hanoi(long n3);

int main() {
    
    int n=4;
    int n2=6;
    int n3=5;
    
    printf("--------------RECURSIVIDAD-------------\n");
    for (int i=0; i<=n;i++){
        printf("%d\n",Factorial(i));
    }
    
    printf("--------------FIBONACCI----------------\n");
    
    for (int f=0; f<=n2;f++){
        printf("%d\n",fibonacci(f));
    }
    
    printf("------------TORRES_HANOI---------------\n");
    
    for (int t=0; t<=n3;t++){
        printf("%d\n",torres_hanoi(t));
    }
    
    return (0);
}
long Factorial(long n){
    if(n==0){
        return 1;
    }
    else{
        return(n* Factorial(n-1));
    }
}
long fibonacci(long n2){
    
    if((n2==0)||(n2==1)){
      return 1;  
    }
    else{
        return fibonacci(n2-1)+fibonacci(n2-2);
    }
}
long torres_hanoi(long n3){
    if(n3==0){
        return 0;
        
    }
    else if(n3==1){
        return 1;
    }
    else {
        return (pow(2,n3-1))+torres_hanoi(n3-1);
    }
}

