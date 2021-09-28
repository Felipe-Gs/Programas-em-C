#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10
#define MAX 10
#define MIN 2

int main(){
    int numeros[TAM];
    int semente;

   // printf("digite o numero da semente");
   // scanf("%d", & semente);
    srand(time(0));
    //sorteando numeros para o vetor
    for(int i = 0; i < TAM; i++){
        numeros[i] = rand() % (MAX - MIN) + MIN;
    }
    //printando os numeros
    for(int i = 0; i < TAM; i++){
        printf("%d, ", numeros[i]);

    printf("\n");
    }


    return 0;
}