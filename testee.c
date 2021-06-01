#include <stdio.h>
#include <locale.h>
#include <limits.h>

void main(){
setlocale(LC_ALL,"Portuguese");

    int n,x,y,xmax = INT_MIN,ymin = INT_MAX,ymax = INT_MIN,xmin = INT_MAX;

    printf("Sistema de cordenadas maximo e minimo:\n");
    printf("Quantas cordenas quer colocar ?\n");
    scanf("%d", &n);

    while (n != 0)
    {
        printf("Valor das cordenadas(x,y): ");
        scanf("%d %d", &x, &y);

        if (x > xmax)
        {
            xmax = x;
        }
        if (x < xmin)
        {
            xmin = x;
        }
        if (y > ymax)
        {
            ymax = y;
        }
        if (y < ymin)
        {
            ymin = y;
        }

    printf("Maximo: %d %d\n", xmax,ymax);
    printf("Minimo: %d %d\n", xmin,ymin);
    n--;
    }
return 0;
}