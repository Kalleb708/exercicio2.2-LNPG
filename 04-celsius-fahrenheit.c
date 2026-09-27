#include <stdio.h>

int main(){

    float c;

    printf("Celsius: ");
    scanf("%f", &c);

    printf("Fahrenheit: %.1f\n", c * 9 / 5 + 32);
    return 0;
}