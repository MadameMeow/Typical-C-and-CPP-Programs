#include <iostream>

using namespace std;

int main()
{
   int num;
   int i;
   int sum = 0;

   cout << "Enter an integer number: " ;
   cin >> num ;

   if ( num == 0 )
      cout << num << " is a tiangular number. " ;
   else
      for ( i = 1; sum <= num; i++ )
      {
         sum = sum + i;

         if ( sum == num )
         {
            cout << num << " is a triangular number. " ;
            break;
         }
      }
   if ( num < sum )
      cout << num << " is not a triangular number. " ;

    return 0;
}
