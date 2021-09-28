#include<stdio.h>

//função subtraior
int subtrair(int x, int y)
{
    if (y == 0)
    //se y for igual a 0, retorna o valor de x.
        return x;
    else{
        return subtrair(x ^ y, (~x & y) << 1);
    }
}

int main(){

    int x = 10, y = 5;
    printf(" %d", subtrair(x, y));



    return 0;
}