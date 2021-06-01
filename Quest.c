#include<stdio.h>
#include<math.h>

int main(){

    double xa, ya, xb, yb;
    double dist;


    printf("ponto A: ");
    scanf("%lf %lf", & xa, & ya);

    printf("ponto B: ");
    scanf("%lf %lf", & xb, & yb);

    dist = sqrt(pow((yb - ya),2) + pow((xb - xa),2));

    printf("distancai = %f \n", dist);
   
   
    return 0;

}