#include<stdio.h>

int main(){
    int Tx, Ty;
    int x, y;
    int i;
    // quero ver quais posicoes possiveis a torre pode andar
    // so pode se mexer nas linhas e colunas
    //uma torre nao pode andar na mesma cordenada que ela está
    while(Tx < 0 || Ty > 8 || Ty < 0 || Ty > 8){
        //verifica se o usuario digitou um numero menor que 0(negativo) ou maior que 8; tanto pro x quanto pro y.
        //caso verdadeiro ele pede as cordenadas novamente.
        printf("digite a posicao: ");
        //digita a posicao inicial da tore
        scanf("%d", & Tx);

        printf("digite a posicao: ");
        //digita a outra cordenada da posicao inicial da torre
        scanf("%d", & Ty);
    }
    // verificacao se o usuario digitar o numero errado

// linha
//loop de 1 ate 8(limite do tabuleiro)
    for(i = 1; i <= 8; i++){
        x = i;
        //x vai se alternando
        //vai se mover somente a linha, ou seja a cordanda y recebe a cordenada da torre
        y = Ty;

        //verificacao pra ver se o x é diferente do x da torre
        //se for diferente ele imprimi.
        if(x != Tx)
            printf("(%d, %d), ", x, y);
        }
// coluna
//agora o y é quem vai se alternado em vez do x, 
    for(i = 1; i <= 8; i++){
        x = Tx;
        //y vai se alternando, preservando o x
        y = i;
        //verifica se o y é diferente do y da torre
        //se for diferente ele imprimi
        if(y != Ty)
            printf("(%d, %d), ", x, y);    
    }
    
    
    


    return 0;
    }