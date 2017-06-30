#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*counting odd/even (according to user's choice) integers between two arbitrary numbers*/

int main()
{
   int num1;
   int num2;
   int i;
   int t = 0;
   int sum = 0;
   char a[4];

   printf("Enter the first integer number: ");
   scanf ("%d", &num1);

   printf("Enter the second one: ");
   scanf("%d", &num2);

   if ( num1 > num2 )
   {
      t = num1;
      num1 = num2;
      num2 = t;
   }

   printf("If you want the summation of the odd numbers between %d and %d\n", num1, num2);
   printf("type odd else type even: ");
   scanf (" %s", a);

   i = num1 ;

   if ( strcmp(a,"odd") == 0 )
   {
      while ( i <= num2 )
      {
         if ( (i % 2) != 0 )
            sum = sum + i ;
        i++;

      }

   }

   else if ( strcmp(a,"even") == 0)
   {
      while ( i <= num2 )
      {
         if ( (i % 2) == 0 )
            sum = sum + i ;
        i++;

      }

   }

   printf ("The sum is %d", sum);

  return 0;
}
