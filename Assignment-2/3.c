#include <stdio.h>

int main() {

     float gross_ssalary, allowances,deductions,net_salary;
    printf("Enter your gross salary\n");
    scanf("%f",&gross_ssalary);

    if (gross_ssalary > 10000)
    {
        allowances=gross_ssalary*0,10;
        deductions=gross_ssalary*0.03;
    }
    else if (gross_ssalary > 5000)
    {
        allowances=gross_ssalary*0.07;
        deductions=gross_ssalary*0.02;
    }

    net_salary=gross_ssalary + allowances - deductions ;

    printf("net salary = %.2f",net_salary );
    return 0;
}