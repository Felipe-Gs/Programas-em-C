#include <stdio.h>


int main(){
    int i,j,n;

   
    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++){
        if(i % 2 == 0){
            //verifica linhas pares
        //se a linha for par ele printa " *"
            for ( j = 0; j < n; j++){
                printf(" *");
            } 
        }
        else{ 
        //se a coluna for impar printa "* "
            for ( j = 0; j < n; j++){
                printf("* ");
            } 
        }
    printf("\n");
    }
return 0;
}