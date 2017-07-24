#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i = 1;
   long sum = 0;
   long num;
   long new_num;
   int digit;

   printf("Enter an integer number: ");
   scanf("%ld", &num);

   printf("Enter the digit you want to count: ");
   scanf("%d", &digit);


   while (new_num > 1)
   {
      new_num = (num/i)%10;

      if (new_num == digit)
         sum++;

      i = i*10;

   }
   if (sum == 1)
      printf("The number of %d in %ld is %ld", digit, num, sum);
   else
      printf("The numbers of %ds in %ld is %ld", digit, num, sum);


    return 0;
}
