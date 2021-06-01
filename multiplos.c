#include<stdio.h>

int main(){
    int x, n, v, q;

    printf("valor de x: ");
    scanf("%d", & x);
    printf("quantidade: ");
    scanf("%d", & q);

    for(n = 1; n <= q; n++){
        v = x * n;
        printf("%d, ", v);

    }
    printf("\n");



    return 0;
}