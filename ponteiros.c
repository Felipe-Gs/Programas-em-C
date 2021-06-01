#include<stdio.h>

int main(){

    int *p;
    int l = 10;
    p = & l;
    printf("%d \n", p);
    printf("%d", *p);



    return 0;
}