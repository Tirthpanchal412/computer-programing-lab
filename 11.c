#include <stdio.h>

int main()
{
    float grams, kilograms;
    printf("Enter grams\n");
    scanf("%f", &grams);

    kilograms = grams / 1000;
    printf("Kilograms = %.2f", kilograms);

    return 0;
}
