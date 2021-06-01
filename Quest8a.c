#include<stdio.h>

int main(){
    //declaro as variaveis
    int a = 0, b = 0,max = 0;
//peço os valores
    printf("Digite o numero A: ");
    scanf("%d",&a);
    printf("Digite o numero B: ");
    scanf("%d",&b);

    printf("Divisores de A: ");
    int cont = 1;
    //enquanto A for maior que CONT
    while(a > cont){
        if(a % cont == 0 && b % cont == 0){
            max = cont;
        //se A resto da divisão por CONT for igual a 0 e B resto da divisãp por CONT for igual 0
        //MAX recebe CONT
        }
        if(a % cont == 0){
            printf("%d,",cont);
        //se A resto da divisão por CONT for igual a 0 
        //printa CONT
        }
        cont ++;
        //adciona 1 no CONT
    }
    printf("\nDivisores de B: ");
    cont = 1;
    while(b > cont){
        //enquanto B > que CONT
        if(b % cont == 0){
            //se resto da divisao de B por CONT for igual a 0
            //printa CONT
            printf("%d,",cont);
        }
        cont ++;
        //adciona 1 no CONT
    }
    //printa o MMC(max)
    printf("\nMaior divisor comun: %d",max);
    return 0;
}

    
    
   

 
