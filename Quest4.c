#include<stdio.h>

int main(){
    //declaro as variaveis
    float nota;
    //peço o valor e guardo na variavel
    printf("Digite a nota do curso: ");
    scanf("%f", & nota);
    //verificacao
    if(nota > 10){
        printf("Nota invalida, digite um numero entre 0 e 10!");
    }
    if(nota < 0){
        printf("Nota invalida, digite um numero entre 0 e 10!");
        //esses dois ifs verfica o minino eo extremo, ou seja se o numero digitado for maior que 10 
        //ou numero for menor que 0, mostra a mensagem de erro.
    }
    if(nota >= 0 && nota < 5){
        //se nota for maio ou igual a 0 e menor que 5 printa
        printf("Conceito: E");
    }
    if(nota >= 5 && nota < 6){
        //se nota for maio ou igual a 5 e menor que 6 printa
        printf("Conceito: D");
    }
    if(nota >= 6 && nota < 7){
        //se nota for maio ou igual a 6 e menor que 7 printa
        printf("Conceito: C");
    }
    if(nota >= 7 && nota < 8){
        //se nota for maio ou igual a 7 e menor que 8 printa
        printf("Conceito: B");
    }
    if(nota >= 8 && nota <= 10){
        //se nota for maio ou igual a 8 e menor ou igual a 10 printa
        printf("Conceito: A");
    }





    return 0;
}