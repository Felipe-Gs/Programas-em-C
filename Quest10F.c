#include <stdio.h>


int main(){
    //declaro as variaveis
    int i,j,n,aux = 0;
    //peço o valor e guardo na variavel
    printf("Quantas linhas ela deve ter: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        //laço que determina o tamanho da piramide
        for ( j = 1; j <= i; j++){
            //laço de j iguala 1, enquanto j for menor ou igual a i printa a variavel AUX;
            //AUX está sendo acresentada apos cada verificação
            aux++;
            printf("%d ", aux);
        }
    printf("\n");
    }
return 0;
}