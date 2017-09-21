/*Graphing Array Element Values with Histograms*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size = 0;
   int i;
   int j;

   printf("Enter the number of graphs: ");
   scanf("%d", &size);

   int graph[size];

   for ( i = 0; i < size; i++ )
   {
      printf("Enter the number: ");
      scanf("%d", &graph[i]);

   }
   printf("%s  %s  %s \n", "Elements", "Numbers", "Histograms");

   for ( i = 0; i < size; i++ )
   {
      printf("%d\t   %d\t   ", i, graph[i]);

      for ( j = 1; j <= graph[i]; j++ )
      {
         printf("%c", '*' );
      }
      printf("\n");

   }


   return 0;
}
