#include <iostream>
using namespace std;

int main()
{

    string space = " ";
    string str = "*";
    for (int a = 1; a <= 5; a++)
    {

        for (int b = 1; b <= 5 - a; b++)
        {
            cout << space;
        }

        for (int c = 1; c <= a; c++)
        {
            cout << str;
        }

        cout << endl;
    }

    return 0;
}


