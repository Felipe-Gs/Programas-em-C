#include<stdio.h>


void escrever(float M[3][3]){
    int l, c;

    for(l = 0; l < 3; l++){
        printf("|\t");
        for(c = 0; c < 3; c++){
            printf("%.2f\t",M[l][c]);
        }
        printf("|\n");
    }
}


void identidade(float M[3][3]){
    int l, c;

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            if(l == c) M[l][c] = 1;
            else       M[l][c] = 0;
        }
        
    }
}




void strings(){
    char nomes[5][100];
    int i;

    for(i = 0; i < 5; i++){
        printf("digite o nome %d: ", i+1);
        scanf("%s", nomes[i]);
    }
    printf("[ ");    
    for(i = 0; i < 5; i++){
        printf("%s , ",nomes[i]);
    }
    printf(" ]");

}


int main(){

    float A[3][3];
    strings();
    //identidade(A);
    //escrever(A);


    return 0;
}