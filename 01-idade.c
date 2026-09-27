#include <stdio.h>

int main(){

    int ANO_ATUAL = 2026;
    int ANO;

    printf("Ano de nascimento: ");
    scanf("%d", &ANO);
    printf("Idade: %d\n", ANO_ATUAL - ANO);
    
    return 0;
}