#include<stdio.h>

int main(){
//declaro as variaveis
    int H_agora, M_agora, H_despertador, M_despertador, H_resto, M_resto, ff, gg, hh, aa, diferenca, diferencaHoras;
//peço o valor e guardo na variavel no formato 12 30, um espaço entre os valores
    printf("Digite a Hora e os minutos de agora: ");
    scanf("%d %d", & H_agora, & M_agora);

//peço o valor e guardo na variavel no formato 12 30, um espaço entre os valores
    printf("Digite a Hora eos Minutos do despertador: ");
    scanf("%d %d", & H_despertador, & M_despertador);

    //printa os valores da forma correta
    printf("agora: ");
    printf("%d", H_agora);
    printf(":");
    printf("%d", M_agora);
    printf("\n");
//printa os valores da forma correta
    printf("Despertador: ");
    printf("%d", H_despertador);
    printf(":");
    printf("%d", M_despertador);
    printf("\n");

if(H_despertador >= H_agora){
    //se Hora do despertador for maior ou igual a hora de agora, h_resto recebe a diferença entre os dois
    H_resto = H_despertador - H_agora;
    printf("Restam ");
    printf("%d", H_resto);
    printf(":");
    //hh recebe os minutos do depertador menos os minutos de agora
    hh = M_despertador - M_agora;
    
    if(hh <= 0){
        //se hh for negativo, multiplico por -1 para ficar positivo
            aa = hh * -1;
            printf("%d", aa);
            printf(" ateh despertar!");
        }
    else{
            printf("%d", hh);
            printf(" ateh despertar! ");
        }
    }
else{
    //hora restante recebe a hora de agora menos 23
    H_resto = H_agora - 23;
    //ff recebe a diferença entre a hora do despetador menos a hora restante
    ff = H_despertador - H_resto;
    //gg recebe 60 menos os minutos de agora
    gg = 60 - M_agora;
    //hh recebe o gg que conseguimos agora mais os minutos do despertador
    hh = gg + M_despertador;

    //if hh for maior que 60
    if(hh > 60){
        //tiro a diferenca e acresento 1 na hora
            diferenca = hh - 60; 
            diferencaHoras = ff + 1;
            ff = diferencaHoras;
            hh = diferenca;   
                }
    printf("Restam ");
    printf("%d", ff );
    printf(":");
    printf("%d", hh);
    printf(" ateh despertar!");

    }
   //ff horas que vai printar


    return 0;
}