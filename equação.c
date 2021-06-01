#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float delta, x1, x2;

    printf("a: ");
    scanf("%f", & a);
    printf("b: ");
    scanf("%f", & b);
    printf("c: ");
    scanf("%f", & c);

    delta = b*b - 4*a*c;

    x1 = (-b - sqrt(delta)) / (2*a);
    x2 = (-b + sqrt(delta)) / (2*a);
    
    printf("delta = %.2f \n", delta);
    printf("x1 = %.2f \n", x1);
    printf("x2 = %.2f \n", x2);


    return 0;
}