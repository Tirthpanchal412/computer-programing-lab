#include <stdio.h>

int main()
{
    float dollars, rupees;
    printf("Enter dollars\n");
    scanf("%f", &dollars);

    rupees = dollars * 48;
    printf("Rupees = %.2f", rupees);

    return 0;
}
