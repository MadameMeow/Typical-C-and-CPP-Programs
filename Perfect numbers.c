#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int sum = 0 ;
   int i;

   printf("Enter an integer number: ");
   scanf("%d", &num);

   if ( num < 0 )
   {
      printf("Error: the number must be positive");
      
      return 0;
   }

   for ( i = 1; i < num; i++ )

   if ( num % i == 0 )
   {
      sum = sum + i;
   }

   if ( sum == num )
      printf("%d is a perfect number", num);
   else
      printf("%d is not a perfect number", num);

   return 0;
}
