#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;
    printf("Enter length\n");
    scanf("%f", &length);

    printf("Enter breadth\n");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}
