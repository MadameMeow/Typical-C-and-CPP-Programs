#include <stdio.h>
#include <stdlib.h>

void perfect( int number );

int main()
{
   int num;
   int j;

   for (j = 1; ; j++)
   {
      printf ("Enetr a positive integer number (a negative number to End): ");
      scanf ("%d", &num);
      perfect(num);
   }

   return 0;
}
void perfect( int number )
{
   int sum = 0 ;
   int i;

   if ( number < 0 )
   {
      exit(0);

   }
   if ( number == 0)
   {
      printf("Zero is not a perfect number\n");

   }
   else
   {
      for ( i = 1; i < number; i++ )

         if ( number % i == 0 )
         {
            sum = sum + i;
         }
         if ( sum == number )
            printf("%d is a perfect number\n", number);
         else
            printf("%d is not a perfect number\n", number);
   }

}
