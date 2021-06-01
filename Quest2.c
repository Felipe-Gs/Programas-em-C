#include<stdio.h>

/*
d(P1,P2)=√(x2−x2)2+( y2−y1)2



*/
int main(){
//declaro as variaveis
    int x1, x2, y1, y2, p1, p2, r1, r2;
    float c1, c2;
//peço os valores e guardo nas variaveis.
    printf("digite o valor de C1 = x1 e y1: ");
    scanf("%d %d", & x1 , & y1);
//peço os valores e guardo nas variaveis.
    printf("digite o valor de  C2 = x2 e y2: ");
    scanf("%d %d", & x2, & y2);
//peço os valores e guardo nas variaveis.
    printf("digite o valor de p1 e p2: ");
    scanf("%d %d", & p1, & p2);
//peço os valores e guardo nas variaveis.
    printf("Digte o valor do raio, r1 e r2: ");
    scanf("%d %d", & r1, & r2);
//formula dada na questão
    c1 = sqrt(pow(p1-x1,2) + pow(p2-y1,2));
    c2 = sqrt(pow(p1-x2,2) + pow(p2-y2,2));
//condicão
    if(c1 > r1 && c2 > r2){
        //se c1 for maior que r1 e c2 maior que r2 printa
        printf("p nao eh interno a nenhum circulo.");
    }
    else if (c1 <= r1 && c2 <= r2){
        //se c1 for menor ou igual a r1 e c2 maior ou igual a r2 printa
        printf("p eh interno a ambos os circulos.");
    }
    else if (c1 <= r1){
        //se c1 for menor ou iguala r1 printa
        printf("P entah dentro do circulo 1");
    }
    else if (c2 <= r2){
        //se c2 for menor ou igual a r2 printa
        printf("p entah dentro do circulo 2");
    }
    

   










    return 0;
}