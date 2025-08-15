#include <stdio.h>

int main()
{
    int num1, num2, product;
    printf("Enter first number\n");
    scanf("%d", &num1);

    printf("Enter second number\n");
    scanf("%d", &num2);

    product = num1 * num2;
    printf("Product = %d", product);

    return 0;
}
