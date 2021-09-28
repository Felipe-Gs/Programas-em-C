#include<stdio.h>

int primeira(){

    int numeros[10];
    int i;
    //leitura dos numeros
    for(i=0; i<10; i++){
        printf("digite um numero %d:", i+1);
        scanf("%d", & numeros[i]);
    }
    //escrita dos numeros
    for(i = 0; i < 10; i++){
        printf("%d, ", numeros[i]);
    }


    
}

int segunda(){

    int numeros[10];
    int i, x, encontrado = 0;
    //leitura dos numeros
    for(i=0; i<10; i++){
        printf("digite um numero %d:", i+1);
        scanf("%d", & numeros[i]);
    }
    printf("numero pra procurar: ");
    scanf("%d", & numeros[i]);

    for(i = 0; i < 10; i++){
        if(numeros[i] == x){
            encontrado = 1;
            break;
        }
    }
    if(encontrado == 1){
        printf("o numero foi encontrado.", x);
    }
    else
        printf("o numero %d nao fo encontrado", x);

    
}
int main(){

    int opcao;
    printf("escolha uma opcao:\n"
     "[1] Questao 1\n"
     "[2] Questao 2\n"
     "opcao: ");
    scanf("%d", & opcao);

    if(opcao == 1){
        
    }

    return 0;
}
