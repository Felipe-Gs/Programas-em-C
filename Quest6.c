#include<stdio.h>

int main(){
    //declaro as variaveis
    float xa, ya, xb, yb, xc, yc;
    float mX,  menX, mY, menY;
    float largura, altura;
//peço o valor e guardo nas variaveis
    printf("ponto A(xa): ");
    scanf("%f", & xa);
    printf("ponto A:(ya): ");
    scanf("%f", & ya);
//peço o valor e guardo nas variaveis
    printf("ponto A(xb): ");
    scanf("%f", & xb);
    printf("ponto A:(yb): ");
    scanf("%f", & yb);
//peço o valor e guardo nas variaveis
    printf("ponto c(xc): ");
    scanf("%f", & xc);
    printf("ponto A:(yc): ");
    scanf("%f", & yc);

    

    if(xa < xb && xa < xc) menX = xa;
    //se xa for menor que xb e xa for menor que xc entao o menor valor é xa
    else if(xb < xa && xb < xc) menX = xb;
    //se xb for menor que xa e xb for menor que xc entao o menor valor é xb
    else menX = xc;  
    //se nehuma das anteriores for verdadeira entao o menor valor é xc
    

    if(ya < yb && ya < yc) menY = ya;
    //se ya for menor que yb e ya for menor que yc entao o menor valor é ya
    else if(yb < ya && yb < yc) menY = yb;
    //se yb for menor que ya e yb for menor que yc entao o menor valor é yb
    else menY = yc;  
    //se nehuma das anteriores for verdadeira entao o menor valor é yc

    largura = mX - menX;
    //largura recebe o maior valor de x menos o menor valor de x
    altura = mY - menY;
    //altura recebe o maior valor de y menos o menor valor de y

    printf("medidas = %f, %f \n", largura, altura);                                 






    return 0;
}