#include <stdio.h>

int main()
{
    float dollars, pounds;
    printf("Enter dollars\n");
    scanf("%f", &dollars);

    pounds = (dollars * 48) / 70;
    printf("Pounds = %.2f", pounds);

    return 0;
}
