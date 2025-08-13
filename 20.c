#include <stdio.h>

int main()
{
    float height, base, area;
    printf("Enter height of triangle\n");
    scanf("%f", &height);

    printf("Enter base of triangle\n");
    scanf("%f", &base);

    area = (height * base) / 2;
    printf("Area = %.2f", area);

    return 0;
}
