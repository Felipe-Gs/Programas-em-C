#include <stdio.h>
int main(){
    //declaro as variaveis
    int i,j,n,aux;
    //peço o valor e guardo na variavel
    printf("Quantas linhas ela deve ter: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++){
        //laço de 1 ate N de 1 em 1
        for ( int aux = 0; aux < i; aux++){
            //o vaclor de i é o numero de espeços que tem que ser printado
            printf(" ");
        }

        for ( j = i; j < i+1; j++){
            printf("%d", j);
            //printa o valor que esta guardado
            //vai de 1 ate o valor digitado de 1 em 1
        }
    printf("\n");
    }


return 0;
}