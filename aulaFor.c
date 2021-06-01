#include<stdio.h>

int main(){
    int n;

    printf("digte o numero n: ");
    scanf("%d", & n);

    for(int i = 1, j = n; i <= n; i++, j--)
        printf("(%d, %d), ", i, j);
        
}