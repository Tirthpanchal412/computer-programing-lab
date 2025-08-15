#include <stdio.h>

int main()
{
    float kilograms, grams;
    printf("Enter kilograms\n");
    scanf("%f", &kilograms);

    grams = kilograms * 1000;
    printf("Grams = %.2f", grams);

    return 0;
}
