#include <stdio.h>


int main(){
    int i,j,n,aux;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) {
        for( aux = 1; aux < i; aux++){
            printf(" ");
            //printa as linhas vazias nos locais certos
        }
        for ( j = i; j < n+1; j++){
            printf("**");
            //faz o desenho desejado com os "**"
            //percebe-se que ele comeca do dobro do valor por isso coloquei os dois asterisco ("**")
        }
    printf("\n");
    }
return 0;
}