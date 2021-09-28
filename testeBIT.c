#include <stdio.h>

int main(){
    //declaro as variaveis.
    int x;
    int y;
    int soma, soma1, soma2, ff, gg;
    //guardo o valor na variavel
    printf("digite o numero que quer somar: ");
    scanf("%d", & x);

    //guardo o valor na variavel
    printf("digite o numero que quer somar: ");
    scanf("%d", & y);

    //soma = x & y; //se os dois numeros forem iguais, o resultado é ele mesmo
    //soma = x ^ y; // numeros iguais o resultado é 0
    if(x == y){
        soma = ( (x & y) << 1);
    }
    else {
        if(x%2 == 0 && y%2 == 0){
            ff = x << 1;
            gg = y << 1;
            soma = ff ^ gg;
        }
        //0010 + 0110 = 0100
        //0100 --- 1100 = << & ^

//               0110  0100 ==  1010
  //             1000  0010      1010
// 0100 0101 = 1001 == 
        //0010 << 1 == 0100 = 4
        //0010 >> 1 == 0001 =  1
    }                  
//2 = x & y = 0010   0010
//     0010

// x ^ y =  0010     0010
//            0000
// 0010 0000
//0100 



    printf("a soma eh: %d", soma);
    printf("\n");
    printf("%d", soma1);
    printf("\n");
    printf("%d", soma2);

    return 0;

}