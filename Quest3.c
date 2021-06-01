#include <stdio.h>

int main(){
    //declaro as variaveis
    int numero, numIvertido;
    //peço o valor e guardo na variavel
    printf("digite o valor do numero: ");
    scanf("%d", & numero);
//se numero for maior ou igual a 0(positivo)
    if( numero >= 0){
        do {
            //variavel recebe o numero resto da divisao por 10
            numIvertido = numero % 10;
            //printa o numero na tela
            printf("%d", numIvertido);
            //pega o numero e divide por 10
            numero /= 10;

        } while (numero != 0);
        //enquanto for diferente de 0 o laço executa.
        printf("\n");
    }
    else {
        if( numero <= 0){
            //caso o numero nao seja positivo, essa mensagem é mostrada na tela
           printf("desculpe mas esse numero nao eh positivo!"); 
        }
    }

    return 0;
}