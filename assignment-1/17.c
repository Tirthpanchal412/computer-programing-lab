#include <stdio.h>

int main()
{
    float length, area, perimeter;
    printf("Enter side length of square\n");
    scanf("%f", &length);

    area = length * length;
    perimeter = 4 * length;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}
