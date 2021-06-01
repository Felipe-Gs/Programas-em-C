#include<stdio.h>
//Escreva as potencias de 3 menores  do que 100
int main(){

    int n, potencia;
    int maximo;
    printf("valor da potencia: ");
    scanf("%d", & potencia);

    printf("valor maximo: ");
    scanf("%d", & maximo);

    n = potencia;
    
    while(n < maximo){
        printf("%d \n", n);
        n = n * potencia;
    }





    return 0;
}