#include <stdio.h>

int main()
{
    int num1, num2, difference;
    printf("Enter first number\n");
    scanf("%d", &num1);

    printf("Enter second number\n");
    scanf("%d", &num2);

    difference = num1 - num2;
    printf("Difference = %d", difference);

    return 0;
}
