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

  // int row, Num, s;

  // for (row = 1; row <= 5; row++)
  // {
  //   for (s = 5; s > row; s--)
  //   {
  //     cout << " ";
  //   }

  //   for (Num = 1; Num <= row; Num++)
  //   {
  //     cout << row;
  //   }
  //   cout << endl;
  // }

  // for (int Row = 1; Row <= 5; Row++)
  // {
  //   for (int space = 5; space > Row; space--)
  //   {
  //     cout << " ";
  //   }

  //   char Alpha = 'A';

  //   for (int I = 1; I <= Row; I++)
  //   {
  //     cout << Alpha;
  //     Alpha = Alpha + 1;

  //   }

  //   cout << endl;
  // }

  int Row, space;
  for (Row = 1; Row <= 5; Row++)
  {
    for (space = 5; space > Row; space--)
    {
      cout << " ";
    }

    for (int num = Row; num >= 1; num--)
    {
      cout << num;
    }


    cout << endl;
  }

  return 0;
}
