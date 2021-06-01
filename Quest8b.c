#include<stdio.h>

int main(){
    //declaro as variaveis
    int a, b, n, v, q, aux, f, z;
//peço os valores e guardo na variavel
    printf("valor de A: ");
    scanf("%d", & a);
//peço os valores e guardo na variavel
    printf("valor de B: ");
    scanf("%d", & b);

//verificação
    if(a > b){
        //se A for maior que B
        z = a;
        //Z recebe A
        a = b;
        // A recebe B
        b = z;
        //B recebe Z
    }
    if(a == b){
        //se A for igual B, então o MMC é A ou B
        printf("o Minimo Multiplo comum  eh: %d", a);
       
    }
    //procura o multiplos de A e B
    for(n = 1; a != b; n++){
        //V recebe o resultado da multiplicação de A por N
        v = a * n;
        printf("%d,", v);
        //printa o resultado V
        if(v == f){
            //se V for igual a F entao o MMC é V
            printf("\n");
            printf("Minimo Multiplo Comum eh: %d", v);
            break;
        }
        printf("\n");
        //f recebe o resultado de B por N
        f = b * n;
        printf("%d,", f);
        //printa F
        

    }
    
    
    
   

    return 0;
}




       

   
