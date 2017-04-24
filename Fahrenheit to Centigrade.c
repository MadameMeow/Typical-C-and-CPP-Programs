#include <stdio.h>
#include <stdlib.h>

int main()
{

   float f;
   float c;

   printf("Enter the temperature according to fahrenheit: ");
   scanf("%f", &f);

   c = (5.9*(f-32));

   printf("\nThe temperature according to centigrade is %f", c);

   return 0;
}
