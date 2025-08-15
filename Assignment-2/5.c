
#include <stdio.h>

int main() {
    float gross_sales,net_sales,discount;

    printf("Enter your gross sales \n");

    scanf("%f",&gross_sales);

    if (gross_sales > 20000)
    {
        discount = gross_sales * 0.15;
    
    }
    
    else if ( gross_sales > 10000)
    {
         discount = gross_sales * 0.10 ;
    }
    
    else
    {
        discount = gross_sales * 0.05 ;
    }
      
    net_sales = gross_sales - discount ;

    printf("net salary is %.2f", net_sales);
    
    return 0;
}