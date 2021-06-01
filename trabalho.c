#include <stdio.h>

int main(){
    int mat;
    int n1, n2;
    
    printf("Entre com o seu número de matrícula: ");
    scanf("%d",&mat);
    
    n1 = mat % 100;
    n2 = mat / 100;
    n2 = n2 % 100;
    
    printf("Questões para apresentar:\n");
    printf("- 9 (item %c)\n", 'b'+ n1 % 5);
    printf("- %d\n", 10 + n2 % 3);
    
    return 0;
}