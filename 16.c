#include <stdio.h>

int main()
{
    float principal, rate, time, interest;
    printf("Enter principal amount\n");
    scanf("%f", &principal);

    printf("Enter rate of interest\n");
    scanf("%f", &rate);

    printf("Enter time in years\n");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;
    printf("Interest = %.2f", interest);

    return 0;
}
