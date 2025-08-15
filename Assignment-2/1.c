#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter first number\n");
    scanf("%d", &num1);

    printf("Enter second number\n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("Largest = %d\n", num1);
        printf("Smallest = %d", num2);
    }
    else if (num2 > num1)
    {
        printf("Largest = %d\n", num2);
        printf("Smallest = %d", num1);
    }
    else
    {
        printf("Both numbers are equal");
    }

    return 0;
}

