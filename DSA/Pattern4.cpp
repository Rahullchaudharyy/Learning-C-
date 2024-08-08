#include <iostream>
using namespace std;

int main()
{

        for (int Row = 1; Row <= 5; Row++)
        {
            for (int Space = 0; Space < 5 - Row; Space++)
            {
                cout << " ";
            }

            for (int Star = 1; Star <=(2*Row-1) ; Star++)
            {
                cout << "*";
            }

            cout << endl;
        }

        int N;
        cout<< "Enter the number for the Palyndrom Peramid.." ;
        cin>>N;
    for (int Row2 = 1; Row2 <= N; Row2++)
    {
         for (int Space = 0; Space < N - Row2; Space++)
            {
                cout << " ";
            }

            for (int Numb = 1; Numb <= Row2; Numb++)
            {
                cout<< Numb ;

            }

            for (int Numb = Row2-1 ; Numb >= 1; Numb--)
            {
                cout<< Numb ;

            }
            cout << endl ;

    }

    for (int i = 1; i >0; i++)
    {

          for (int Row3 = 5; Row3 >= 1; Row3--)
    {
        for (int Space = 1; Space <= 5 - Row3; Space++)
        {

            cout << " ";
        }

        for (int STR = 1; STR <= 2 * Row3 - 1; STR++)
        {
            cout << "*";
        }

        cout << endl;
    }
        
    }
    

  

    return 0;
}