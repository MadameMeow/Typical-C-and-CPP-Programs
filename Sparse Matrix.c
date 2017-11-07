#include <stdio.h>
#include <stdlib.h>

void transpose(int[][3],int[][3]);
void T_sparse(int total,int[][3]);

int main()
{
   int i;
   int j;
   int k = 1;
   int sum = 0;
   int row_size;
   int column_size;

   int arr1[sum][3];

   printf("Enter the number of array's rows: ");
   scanf("%d", &row_size);

   printf("Enter the number of array's columns: ");
   scanf("%d", &column_size);

   int array1[row_size][column_size];

   printf("Enter the elements of the array: \n");

   for (i = 0; i < row_size; i++)
   {
      for (j = 0; j < column_size; j++)
      {
         printf("Enter element[%d][%d]: ", i, j);
         scanf("%d", &array1[i][j]);

         if ( array1[i][j] != 0 )
         {
            sum = sum + 1;
            arr1[k][0] = i;
            arr1[k][1] = j;
            arr1[k][2] = array1[i][j];
            k++;
         }
      }
   }
   arr1[0][0] = row_size;
   arr1[0][1] = column_size;
   arr1[0][2] = sum;

   printf("\n*The Sparse Matrix*\n");
   printf("\nRow\tColumn\tValue\n");

   for (i = 0; i <= sum; i++)
      printf("%d\t%d\t%d\n",arr1[i][0], arr1[i][1], arr1[i][2]);

   int arr2[sum][3];

   transpose(arr1,arr2);
   T_sparse(sum,arr2);

   return 0;

}
void transpose(int array[][3],int array2[][3])
{
    int i;
    int j;
    int k = 1;
    int num;

    array2[0][0] = array[0][1];
    array2[0][1] = array[0][0];
    array2[0][2] = array[0][2];

    num = array[0][2];

    for(i = 0; i < array[0][1]; i++)
    {
       for(j = 1; j <= num; j++)
       {
          if(i == array[j][1])
          {
             array2[k][0]=i;
             array2[k][1]=array[j][0];
             array2[k][2]=array[j][2];
             k++;
          }
       }
    }

   printf("\n*The Transpose of the Sparse Matrix*\n");
   printf("\nRow\tColumn\tValue\n");

   for (i = 0; i <= num; i++)
      printf("%d\t%d\t%d\n", array2[i][0], array2[i][1], array2[i][2]);

}
void T_sparse(int total,int array2[total][3])
{
    int i;
    total = array2[0][2];

    printf("\n*Now, the Sparse Matrix is transposed and arranged*\n");

    printf("\nRow\tColumn\tValue\n");

    for(i = 0; i <= total; i++)
        printf("%d\t%d\t%d\n", array2[i][0], array2[i][1], array2[i][2]);
}
