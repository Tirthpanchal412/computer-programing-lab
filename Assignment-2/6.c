

#include <stdio.h>

int main() {
    float maths,chemistry,physics,total,average;
    printf("Enter maths marks\n");
    scanf("%f",&maths);

    printf("Enter chemistry marks\n");
    scanf("%f",&chemistry);

    printf("Enter physics marks\n");
    scanf("%f",&physics);

    if (maths<35 || physics<35 || chemistry<35)
    {
        printf("your are fail");
    }
    else
    {
    
        total = maths + chemistry + physics ;

              average = total / 3 ;

         printf("your total is %.2f\n", total); 

         printf("your average is %.2f\n", average);
    
         if (average >= 70 )
         {
             printf("your grade is distinction");
         }
            
         else if (average >= 60) 
         {
                  printf("your grade is first ");
         }
    
         else if ( average >= 50 )

         {
             printf("your garde is second");
         }
    
        else if (average >= 35 )
        {
         printf("your garde is third");
         }
         else if ( maths <35 || physics <35 || chemistry<35)
         {
                  printf("your are fail");
         }
         else
         {
            printf("your are fail");
         }
     }
    
    return 0;
}