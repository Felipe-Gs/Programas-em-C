#include<stdio.h>

int main(){
//declaro as variaveis
    float preco, opcao, parcela, p1, p2;
//peço o valor e guardo na variavel
    printf("Preco do produto (RS): ");
    scanf("%f", & preco);
//menu de escolha com o numero digitado sendo guardado na variavel "opcao"
    printf("escolha uma opcao:\n"
     "[1]  A vista em dinheiro ou no cartão de débito\n"
     "[2] A vista no cartão de crédito\n"
     "[3] Parcelado no cartão de crédito em até 4x\n"
     "[4] Parcelado em mais de 4x,\n"
     "opcao: ");
    scanf("%f", & opcao);
//verificação
    if (opcao == 1){
        p1 = preco - (preco * 10)/100;
        //p1 recebe o preco menos o(preco multiplicado por 10)dividido por 100
        printf("Valor da venda (RS): %.2f", p1);
    }
    else if (opcao == 2){
        p2 = preco - (preco * 5)/100;
        //p2 recebe o preco menos o(preco multiplicado por 5)dividido por 100
        printf("Valor da venda (RS): %.2f", p2);
     }
    else if (opcao == 3){
        printf("Digite o numero de parcelas: ");
        scanf("%f", & parcela);
        //nessa opcao preciso de um novo valor que seria o tanto de parcelas que a pessoa quer
        preco = (preco / parcela);
        //preco é igual ao preço divido pelo numero de parcelas
        printf("valor da venda: %.2f", parcela);
        printf(" x ");
        printf("%.2f", preco);
     }
    else if (opcao == 4){
        printf("Digite o numero de parcelas: ");
        //nessa opcao preciso de um novo valor que seria o tanto de parcelas que a pessoa quer
        scanf("%f", & parcela);
        p2 = preco + (preco * 10)/100;
        //p2 recebe o preco mais (preco multiplicado por 10)divido por 100
        preco = (p2 / parcela);
        //preco recebe o p2 dividido pelo numero de parcelas
        printf("valor da venda: %.2f", parcela);
        printf(" x ");
        printf("%.2f", preco);
    }

      

    return 0;
}