#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius\n");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0 * celsius) + 32;
    printf("Fahrenheit = %.2f", fahrenheit);

    return 0;
}
