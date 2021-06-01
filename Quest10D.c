#include <stdio.h>
int main(){
    //Declaro as variaveis que irei usar ao longo do codigo.
    int i,j,n,aux = 0,aux1 = 1;

    //Peço o numero que o usuario quer o tamanho da piramide, que será salvo na variavel (n).
    printf("Digite um numero: ");
    scanf("%d", &n);

    //laço "for" que sai do "i" igual a 1, enquanto i for menor que "n"(numero digitado pelo usuario
    //ou seja a variavel i vai de 1 ate o numero digitado, almentando de 1 em 1 (i++))
    for ( i = 1; i <= n; i++){
        //quebra linha quando o valor de "i" for igual a quantidade de numeros printados.
        for ( j = 1; j < i+1; j++){
            //printar os numeros certos nos locais certos.
            if(i % 2 == 0){
                //i são as linhas, j são as colunas.
//podemos observar que no triangulo temos uma sequencia que devemos seguir.
//las linhas impares comeca imprimindo o numero 1.
//Nas linhas pares comeca imprimindo o numero 0.
                if( j % 2 == 0 ){
                    printf("%d",aux1);
                    //verifica se as colunas sao pares, imprimi "aux1" = 1.
                }
                else{
                    //se não for par, ou seja ele vai ser impar, printa o numero 0.
                    printf("%d",aux);
                }
            }
            else{
                //verifica se as colunas sao impares, imprimi "aux" = 0.
                if( j % 2 == 0 ){
                    // se a coluna for par imprimi 0, 
                    printf("%d",aux);
                }
                else{
                    //se a coluna for impar imprimi 1.
                    printf("%d",aux1);
                }
            }
        }
    printf("\n");
    }
return 0;
}