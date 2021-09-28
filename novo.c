#include<stdio.h>
#define TAM 5
int main(){

    int numeros[TAM];
   
    for(int i = 0; i < TAM; i++){
        printf("digite um valor: ");
        scanf("%d", & numeros[i]);
    }
    for(int i = 0; i < TAM; i++){
        while(numeros[i] < numeros[0]){
            printf("%d, ", numeros[i]);
            break;
        } 
    }
    printf("%d, ", numeros[0]);

    for(int i = 0; i < TAM; i++){
        while(numeros[i] > numeros[0]){
            printf("%d, ", numeros[i]);
            scanf("%d", & numeros[i]);
            break;
        } 
    }
    
    return 0;
}