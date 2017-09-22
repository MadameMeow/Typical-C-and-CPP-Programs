/*Rolling a Die 6000 Times and Summarizing the Results in an Array*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

int main()
{
   int roll;
   int face;
   int frequency[SIZE] = {0};

   srand( time( NULL ) );

   for ( roll = 1; roll <= 6000; roll++ )
   {
      face = 1 + rand() % 6;
      ++frequency[face];
   }
   printf("%s   %s\n", "Face", "Frequency");

   for ( face = 1; face < SIZE; face++)
   {
      printf("%d      %d\n", face, frequency[face] );
   }

   return 0;
}
