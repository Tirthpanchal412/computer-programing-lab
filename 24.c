
#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter first value\n");
    scanf("%d", &a);

    printf("Enter second value\n");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First value = %d\n", a);
    printf("Second value = %d", b);

    return 0;
}
