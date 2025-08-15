#include <stdio.h>

int main()
{
    int hours, minutes;
    printf("Enter hours\n");
    scanf("%d", &hours);

    minutes = hours * 60;
    printf("Minutes = %d", minutes);

    return 0;
}
