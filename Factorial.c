#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int i;
   int factorial = 1;

   printf("Enter an integer number: ");
   scanf("%d", &num);

   if ( num < 0 )
      printf("Out of range");

   else if ( num == 0 )
      printf("The factorial of 0 is 1");

   else
   {
      for ( i=1; i <= num; i++ )
         {
            factorial = factorial*i;
         }
         printf("The factorial of %d is %d", num, factorial);
   }

  return 0;
}
