#include <stdio.h>
#include <stdlib.h>

int main()
{
   float num;

   printf("Enter a number: ");
   scanf("%f", &num);

   if ( num > 0 )
      printf("%f", num);
   else
      printf("%f", num*(-1));

   return 0;
}
