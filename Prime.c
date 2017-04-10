#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   int number;
   int prime = 1 ;

   printf("Enter an integer number: ");
   scanf("%d",&number);

   for ( i = 2; i < number; i++ )
   {
      if ( ( number % i ) == 0 )
      {
         prime = 0 ;
      }
   }
   
   if ( prime == 1 )
      printf("%d is a prime number.\n", number);
   else
      printf("%d is not a prime number.\n", number);
    
   return 0;
}
