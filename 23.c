#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, total, average;
    printf("Enter marks of subject 1\n");
    scanf("%f", &sub1);

    printf("Enter marks of subject 2\n");
    scanf("%f", &sub2);

    printf("Enter marks of subject 3\n");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    average = total / 3;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f", average);

    return 0;
}

