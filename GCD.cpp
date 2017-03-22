#include <iostream>


using namespace std;

int main()
{
   int m;
   int n;
   int big;
   int small;
   int i = 1;


   cout << "Enter 2 integer numbers: " ;
   cin  >> m >> n ;

   if ( m > n )
   {
      big = m ;
      small = n ;
   }
   else
   {
      big = n ;
      small = m ;
   }
   while ( i != 0 )
   {
      i = big % small ;
      big = small ;
      small = i ;
   }
   cout << "GCD of " << m << " and " << n << " is " << big ;

return 0;

}
