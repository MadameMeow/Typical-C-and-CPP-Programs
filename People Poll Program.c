/*In this poll program, a certain number of people are asked to rate from 1 to 10 to user's arbitrary subject*/
#include <stdio.h>
#include <stdlib.h>

#define FREQUENCY_SIZE 10

int main()
{
   int size = 0;
   int frequency[FREQUENCY_SIZE] = {0};
   int i;

   printf("Enter the number of people: ");
   scanf("%d", &size);

   int response [size];

   for ( i = 0; i < size; i++ )
   {
       printf("Enter the rate (1-10): ");
       scanf("%d", &response[i]);
       if ( response[i] > 10 )
       {
          printf("Out of range, try again\n");
          printf("Enter the rate between 1 to 10: ");
          scanf("%d", &response[i]);

       }
       ++frequency[response[i] - 1];
   }
   printf("%s\t   %s\n", "RATING", "FREQUENCY" );

   for ( i = 0; i < 10; i++ )
   {
      printf("%d\t   %d\n", i+1, frequency[i] );
   }

   return 0;
}
