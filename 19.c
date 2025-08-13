#include <stdio.h>

int main()
{
    float radius, area;
    printf("Enter radius of circle\n");
    scanf("%f", &radius);

    area = (22.0 / 7.0) * radius * radius;
    printf("Area = %.2f", area);

    return 0;
}
