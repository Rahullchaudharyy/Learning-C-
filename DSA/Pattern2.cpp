#include <iostream>
using namespace std;

int main()
{

    string str = "*";
    for (int i = 1; i <= 5; i++)
    {

        cout << str << endl;

        str = str + " *";
    }




    int Row, Col;
    for (Row = 1; Row <= 5; Row++)
    {
        for (Col = 1; Col <= Row; Col++)
        {
            cout << Col << " ";
        }

        cout << endl;
    }

    int Row1, Col1;
    for (Row1 = 1; Row1 <= 5; Row1++)
    {
        for (Col1 = 1; Col1 <= Row1; Col1++)
        {
            cout << Row1 << " ";
        }
        cout << endl;
    }

    int ReverseRow, ReverseCol;

    for (ReverseRow = 1; ReverseRow <= 5; ReverseRow++)
    {
        for (ReverseCol = ReverseRow; ReverseCol >= 1; ReverseCol--)
        {

            cout << ReverseCol << " ";
        }
        cout << endl;
    }

    char Alphabet = 'a';

    for (int m = 1; m <= 6; m++)
    {

        for (int n = 1; n <= m; n++)
        {
            cout << Alphabet << " ";
        }
        cout << endl;

        Alphabet = Alphabet + 1;
    }

    for (int b = 1; b <= 5; b++)
    {

        for (int c = 1; c <= 5 - (b - 1); c++)
        {
            cout << " *";
        }
        cout << endl;
    }
    for (int d = 1; d <= 5; d++)
    {

        for (int e = 1; e <= 5 - (d - 1); e++)
        {
            cout << e << " ";
        }
        cout << endl;
    }

    for (int f = 1; f <= 5; f++)
    {

        for (int g = 5; g >= 5 - (f - 1); g--)
        {
            cout << g << " ";
        }

        cout << endl;
    }

    return 0;
}
