#include <iostream>

using namespace std;

int main()
{
    int num;
    int new_num = 0;

    cout << "Enter a number: " ;
    cin >> num ;

    while(num > 0)
       {
          new_num = new_num*10 + (num % 10);
          num = num/10;
       }

    cout << new_num << endl;


    return 0;
}
