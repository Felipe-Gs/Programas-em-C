#include <stdio.h>


int main(){
    //declaro as variaveis
    int i,j,n,aux;
//peço o valor e guardo na variavel
    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        //i valendo 1 ate N de 1 em 1
        for ( int aux = 0; aux < i; aux++){
            printf(" ");
        }//o numero de asteriscos é o valor dos espaços
        for (j = 1; j < i+1; j++){
            printf("*");
        }
    printf("\n");
    }


return 0;
}