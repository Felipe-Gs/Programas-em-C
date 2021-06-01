#include<stdio.h>
#include<math.h>
//AreaDbase= pi.raio²
//areLateral =  2.pi. raio. altura
//volume =  AreaDbase.altura

int main(){
    //declaro as variaveis
    float altura, raio, areaLateral, areaDbase, volume;
    //peço os valores e guardo nas variaveis.
    printf("digite a altura do cilindro: ");
    scanf("%f", & altura);
//peço os valores e guardo nas variaveis.
    printf("digite o raio da base: ");
    scanf("%f", & raio);
//calculo para saber a area da base
    areaDbase = M_PI * ("%f", raio * raio);
    printf("a area da base eh: %.2f", areaDbase);
    printf("\n");
//calculo para saber a area lateral
    areaLateral = (2* M_PI) * ("%f", raio) * ("%f", altura);
    printf("a area lateral eh: %.2f", areaLateral);
    printf("\n");
//calculo para saber o volume
    volume = ("%f", areaDbase) * ("%f", altura);
    printf("o volume eh: %.2f", volume);
    




    return 0;
}