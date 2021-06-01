#include<stdio.h>
#include<limits.h>

int main(){
    //declaro as variaveis
    int n,pontosX,pontosY,auxX = INT_MIN,auxY = INT_MAX,menorY = INT_MIN,menorX = INT_MAX;
    //peço os valores e guardo na variavel
    printf("digite o numero de pontos: ");
    scanf("%d", & n );

    while(n != 0){
        //enquanto N for diferente de 0 ele executa
        printf("digite os pontos 1 e 2: ");
        scanf("%d %d",& pontosX, & pontosY);
    
        if(pontosX > auxX){
            //se pontosx for maior que auxx, auux recebe pontosX
            auxX = pontosX;
        }
        if(pontosX < menorX){
            //se pontosX for menor que menorX, menorX recebe pontosX
            menorX = pontosX;
        }
        if(pontosY > menorY){
            //se pontosY for menor que menorY, menorY recebe pontosY
            menorY = pontosY;
        }
        if(pontosY < auxY){
            //se pontosY for menor que auxY, auxY recebe pontosY
            auxY = pontosY;
        }
        n--;
//dessa forma teremos o menor valor eo maior valor entre eles, obtendo o resultado da questão
    }
    
printf("Maximo: %d %d\n", auxX,menorY);
printf("Minimo: %d %d\n", menorX,auxY);



    return 0;
}