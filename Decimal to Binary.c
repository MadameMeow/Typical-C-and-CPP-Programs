#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int num;
   int i;
   int sum = 0;


   printf("Enter an integer binary number: ");
   scanf("%d", &num);

   for (i=0;num>=1;i++)
   {
      sum = ((num%10)*pow(2,i)) + sum;
      num = num/10;

   }
   printf("The decimal form is %d", sum);


  return 0;
}
