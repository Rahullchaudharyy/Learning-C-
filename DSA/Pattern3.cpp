#include <iostream>
using namespace std;

int main()
{

  // string space = " ";
  // string str = "*";
  // int In;
  // cout << " Please enter the number : "<< endl ;
  // cin >> In ;

  // for (int a = 1; a <= In; a++)
  // {

  //     for (int b = 1; b <= In - a; b++)
  //     {
  //         cout << space;
  //     }

  //     for (int c = 1; c <= a; c++)
  //     {
  //         cout << str;
  //     }

  //     cout << endl;
  // }

  // for (int d = 1; d <= 5; d++)
  // {
  //     for (int e = 1; e <= 5-d; e++)
  //     {
  //         cout << " " ;

  //     }

  //     for (int f = 0; f <= d; f++)
  //     {
  //         cout << d ;
  //     }

  //      cout<< endl ;

  // }

  // int row, col ;
  // int n ;
  // cout << " Hey enter your number under 10 :- ";
  // cin >> n ;

  // for (row = 1; row <= n ; row++)
  // {
  //      for (col = 1; col <= n-row; col++)
  //      {
  //         cout << " " ;

  //      }
  //      for (col= 1; col <= row; col++)
  //      {
  //        cout << col  ;
  //      }

  //      cout<< endl ;
  // }

  for (int m = 1; m <= 5; m++)
  {
    for (int n = 1; n <= 5 - m; n++)
    {
      cout << " ";
    }
    for (char name = 'A'; name <= 'A' + m - 1; name++)
    {
      cout << name<<;
    }

    cout << endl;

  }

  return 0;
}
