//Aluno: Felipe Gomes da Silva
//Matricula: 498842

#include<stdio.h>
//função somar dois numeros...
int somar(int x, int y){
    //se y for igual a 0 entao sua somar é o valor de x.
    if (y == 0)
        return x;
    else{
        return somar(x ^ y, (x & y) << 1);
        printf("%d",somar);
    }
}


//função subtrair dois numeros...
int subtrair(int x, int y)
{
    if (y == 0)
    //se y for igual a 0, retorna o valor de x.
        return x;
    else{
        return subtrair(x ^ y, (~x & y) << 1);
    }
    
}


int main()
{//opção de escolha
    int opcao;
    printf("escolha uma opcao:\n"
     "[1] soma\n"
     "[2] subtracao\n"
     "opcao: ");
    scanf("%d", & opcao);

    if (opcao == 1){
        //se for igual a 1, chama a função soma
        int x, y;
        printf("digite o primeiro valor: ");
        scanf("%d", & x);
        printf("digite o outro valor: ");
        scanf("%d", & y);
        printf("A soma desses valores eh: %d", somar(x, y));
    }
    if (opcao == 2){
        //se for igual a 2, chama a função subtrair
        int x, y;
        printf("digite o primeiro valor: ");
        scanf("%d", & x);
        printf("digite o outro valor: ");
        scanf("%d", & y);
        printf("a subtracao desses valores eh:  %d", subtrair(x, y));
    }
    //se opcao for diferente das opcoes de escolha
    if (opcao != 1 && opcao != 2){
        printf("opcao invalida, digite 1 ou 2.");
    }

    

    return 0;
}