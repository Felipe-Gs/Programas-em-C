#include<stdio.h>


int main(){
//declaro as variaveis
    int i, aInicial, bInicial,aFinal, bFinal, Aresultado, Bresultado;
//peço os valores e guardo na variavel
    printf("digite os valres iniciais de A e B: ");
    scanf("%d %d", & aInicial,& bInicial );
//peço os valores e guardo na variavel
    printf("digite os valres Finais de A e B: ");
    scanf("%d %d", & aFinal,& bFinal );

    Bresultado = bFinal - bInicial;
    //Bresultado é igual a bfinal menos o bInicial(cordenadas B do ponto de saida menos a cordenada B do ponto de chegada)
    Aresultado = aFinal - aInicial; 
    //Aresultado é igual a afinal menos o aInicial(cordenadas A do ponto de saida menos a cordenada A do ponto de chegada)
//desse modo eu encontrei os valores das diferenças das cordenadas
//basta agora saber para onde ela vai, direita, esquerda, cima ou baixo
    printf("%d", Bresultado);
    printf("\n");
    printf("%d", Aresultado);
    printf("\n");
    
    
    if(aInicial < aFinal && bInicial < bFinal){
        if(Bresultado < 0)
        //vrifica se o resultado é negativo
        Bresultado = Bresultado * -1;
        if(Aresultado < 0)
        Aresultado = Aresultado * -1;
        for(i = 0; i < Bresultado; i++){
            //printa a palavra CIMA o numero de vezez do BRESULTADO
            printf("cima, ");
        }
        for(i = 0; i < Aresultado; i++){
            //printa DIREITA o numero de vezes de ARESULTADO
            printf("direita, ");
        }
    }
    //verificaçao se é direita ou esquerda, cima ou baixo
    else if(aFinal < aInicial && bFinal > bInicial){
        //verifica o local que os pontos estão para saber se é direita ou esquerda, cima ou baixo
        if(Bresultado < 0)
        Bresultado = Bresultado * -1;
        if(Aresultado < 0)
        Aresultado = Aresultado * -1;
        for(i = 0; i < Bresultado; i++){
            printf("cima, ");
        }
        for(i = 0; i < Aresultado; i++){
            printf("esquerda, ");
        }
    }
    else if(bInicial < bFinal && bFinal > bInicial){
        //verificaçao se é direita ou esquerda, cima ou baixo
        if(Bresultado < 0)
        Bresultado = Bresultado * -1;
        if(Aresultado < 0)
        Aresultado = Aresultado * -1;
        //verifica o local que os pontos estão para saber se é direita ou esquerda, cima ou baixo
        for(i = 0; i < Bresultado; i++){
            printf("cima, ");
        }
        for(i = 0; i < Aresultado; i++){
            printf("esquerda, ");
        }
    }
    else if(aInicial > aFinal && bInicial > bFinal){
        //verificaçao se é direita ou esquerda, cima ou baixo
        if(Bresultado < 0)
        Bresultado = Bresultado * -1;
        if(Aresultado < 0)
        Aresultado = Aresultado * -1;
        //verifica o local que os pontos estão para saber se é direita ou esquerda, cima ou baixo
        for(i = 0; i < Bresultado; i++){
            printf("baixo, ");
        }
        for(i = 0; i < Aresultado; i++){
            printf("esquerda, ");
        }
    }
    else if(aInicial < aFinal && bInicial > bFinal){
        //verificaçao se é direita ou esquerda, cima ou baixo
        if(Bresultado < 0)
        Bresultado = Bresultado * -1;
        if(Aresultado < 0)
        Aresultado = Aresultado * -1;
        for(i = 0; i < Bresultado; i++){
            //verifica o local que os pontos estão para saber se é direita ou esquerda, cima ou baixo
            printf("baixo, ");
        }
        for(i = 0; i < Aresultado; i++){
            printf("direita, ");
        }
    }


    

    
    return 0;
}