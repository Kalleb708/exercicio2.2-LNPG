#include <stdio.h>

int main(){

    float PI = 3.14159;
    float raio;

    printf("Raio: ");
    scanf("%f", &raio);

    printf("Área: %.2f\n", PI * raio * raio);

    return 0;
}