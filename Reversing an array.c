#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size;
   int i;
   int j;

   printf("Enter the size of array: ");
   scanf("%d", &size);

   int array[size];

   for (i = 0; i < size; i++)
   {
      printf("Enter number %i: ", (i+1) );
      scanf("%d", &array[i]);
   }
   printf("\nThe original array:");

   for ( i = 0; i < size; i++ )
   {
      printf("%3d", array[i] );

   }
   printf("\nThe inverse array:");

   for (j = size - 1; j >= 0; j--)
   {
      printf("%3d", array[j] );
   }

   return 0;
}
