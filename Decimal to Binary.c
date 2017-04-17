#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int num;
   int n;
   int i;

   printf("Enter a decimal number: ");
   scanf("%d", &num);

   n = ((log(num))/(log(2)))+1;
   int a[n];
    
   for ( i = 0; i < n; i++ )
   {
       a[i] = num%2;
       num = num/2;
   }
   
   for ( i = n-1; i >= 0; i-- ) 
   {
      printf("%d",a[i]);
   }

   return 0;
}
