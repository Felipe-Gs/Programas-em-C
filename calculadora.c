#include<stdio.h>
void main (){
     
     int a, b, c, opcao;

     printf("a: ");
     scanf("%d", & a);
     printf("b: ");
     scanf("%d", & b);

     printf("escolha uma opcao:\n"
     "[1] soma\n"
     "[2] subtracao\n"
     "[3] multiplicacao\n"
     "[4] divisao\n"
     "opcao: ");

     scanf("%d", & opcao);

     switch (opcao)
     {
     case 1: c = a+b; break;
     case 2: c = a-b; break;
     case 3: c = a*b; break;
     case 4: c = a/b; break; 
     
     }
    printf("resultado: %d \n", c);
    return 0;

}



