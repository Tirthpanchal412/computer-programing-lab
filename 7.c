#include <stdio.h>

int main()
{
    int minutes;
    float hours;

    printf("Enter minutes\n");
    scanf("%d", &minutes);

    hours = minutes / 60.0;
    printf("Hours = %.2f", hours);

    return 0;
}
