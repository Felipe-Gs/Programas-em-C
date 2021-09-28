#include<stdio.h>
#include<string.h>

#define tam 50
int main(){
    char palavra[tam] = "Universidade Federal do Ceara";
    char teste[] = "idade";
    char *local = strstr(palavra, teste);

    printf("palavra = %p\n", palavra);
    printf("local = %p\n", local);
    printf("local = %s\n", local);
    return 0;
}