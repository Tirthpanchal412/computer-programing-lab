#include <stdio.h>

int main()
{
    float rupees, dollars;
    printf("Enter rupees\n");
    scanf("%f", &rupees);

    dollars = rupees / 48;
    printf("Dollars = %.2f", dollars);

    return 0;
}

