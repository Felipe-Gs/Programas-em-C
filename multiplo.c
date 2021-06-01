#include<stdio.h>

int main(){

    int x, y;

    printf("x: ");
    scanf("%d", & x);

    printf("y: ");
    scanf("%d", & y);

    if(x % y == 0){
        printf("eh multiplo \n");
    }
    else{
        printf("nao eh multiplo \n");
    }


    return 0;
}