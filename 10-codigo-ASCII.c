#include <stdio.h>

int main(){

    char c;

    printf("Um caractere: ");
    scanf("%c", &c);

    printf("Código ASCII de %c: %d", c, c);
    return 0;
}