#include <stdio.h>

int main(){

    float n1, n2, n3;

    printf("Três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Média: %.2f\n", (n1 + n2 + n3) / 3);
    return 0;
}