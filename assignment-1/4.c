#include <stdio.h>

int main()
{
    int num1, num2;
    float quotient;

    printf("Enter first number\n");
    scanf("%d", &num1);

    printf("Enter second number\n");
    scanf("%d", &num2);

    quotient = (float)num1 / num2;
    printf("Quotient = %.2f", quotient);

    return 0;
}
