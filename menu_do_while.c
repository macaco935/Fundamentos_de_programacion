
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void verificar();
void grcf();
void grfc();
void grck();
void grfk();
void grkf();
void grkc();

int main() {
    int opcion;
    do{
        opcion = 0;
        printf("1)Convertir C° a F°\n");
        printf("2)Convertir F° a C°\n");
        printf("3)Convertir C° a K°\n");
        printf("4)Convertir F° a K°\n");
        printf("5)Convertir K° a F°\n");
        printf("6)Convertir K° a C°\n");
        printf("7)Cerrar progrma\n");
        scanf("%d",&opcion);
        verificar(opcion);
        
    }while(opcion!= 7);
    return (EXIT_SUCCESS);
}
void verificar(int opcion){
    switch(opcion){
            case 1:
                grcf();
              
                break;
            case 2:
                grfc();
                break;
            case 3:
                grck();
                break;
            case 4:
                grfk();
                break;
            case 5:
                grkf();
                break;
            case 6:
                grkc();
                break;
            case 7 :
                break;
        default:
            printf("caso erroneo\n");
            break;
            }
}
void grcf(){
    printf("Introdusca los grados C°\n",163);
    float c;
    scanf("%f",&c);
    float f= (c * 1.8)+32;
    printf("Los grados F° son %f:\n",f);
    system("cmd /c pause");
    system("cls");
    system("clear");

}
void grfc(){
    printf("Introdusca los grados F°\n");
    float f=0;
    scanf("%f",&f);
    float c=(f-32)*0.555;
    printf("Los grados C° son %f:\n",c);
    system("cmd /c pause");
    system("cls");
    system("clear");
}
void grck(){
    printf("Introdusca los grados C°\n");
    float c;
    scanf("%f",&c);
    float k= c + 273.15;
    printf("Los grados K° son %f:\n",k);
    system("cmd /c pause");
    system("cls");
    system("clear");
}
void grfk(){
    printf("Introdusca los grados F°\n");
    float f=0;
    scanf("%f",&f);
    float k= ((f-32)*0.555)+273.15;
    printf("Los grados K° son %f:\n",k);
    system("cmd /c pause");
    system("cls");
    system("clear");
}
void grkf(){
    printf("Introdusca los grados K°\n");
    float k=0;
    scanf("%f",&k);
    float f= ((k-273.15)*1.8)+32;
    printf("Los grados F° son %f:\n",f);
    system("cmd /c pause");
    system("cls");
    system("clear");
}
void grkc(){
     printf("Introdusca los grados K°\n");
     float k=0;
     scanf("%f",&k);
     float c= k - 273.15;
     printf("Los grados C° son %f:\n",c);
     system("cmd /c pause");
    system("cls");
    system("clear");
}