#include <iostream>
using namespace std;

int main()
{
    cout << "Pattern 1\n";
    for (int Row = 1; Row <= 5; Row++)
    {
        for (int Space = 0; Space < 5 - Row; Space++)
        {
            cout << " ";
        }

        for (int Star = 1; Star <= (2 * Row - 1); Star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << "Pattern 2\n";

    int N;
    cout << "Enter the number for the Palyndrom Peramid..";
    cin >> N;
    for (int Row2 = 1; Row2 <= N; Row2++)
    {
        for (int Spacee = 0; Spacee < N - Row2; Spacee++)
        {
            cout << " ";
        }

        for (int Numb = 1; Numb <= Row2; Numb++)
        {
            cout << Numb;
        }

        for (int Numb = Row2 - 1; Numb >= 1; Numb--)
        {
            cout << Numb;
        }
        cout << endl;
    }

    cout << "Pattern 3\n";

    for (int i = 1; i > 0; i--)
    {

        for (int Row3 = 5; Row3 >= 1; Row3--)
        {
            for (int Space = 1; Space <= 5 - Row3; Space++)
            {

                cout << "  ";
            }

            for (int STR = 1; STR <= 2 * Row3 - 1; STR++)
            {
                cout << "* ";
            }

            cout << endl;
        }
    }

    cout << "Pattern 4\n";

    int ROW4, STAR, NN;
    cout << "Enter the number.";
    cin >> NN;

    for (ROW4 = NN; ROW4 >= 1; ROW4--)
    {
        for (STAR = 1; STAR <= ROW4; STAR++)
        {
            cout << "* ";
        }

        for (STAR = 1; STAR <= 2 * NN - 2 * ROW4; STAR++)
        {
            cout << "  ";
        }

        for (STAR = 1; STAR <= ROW4; STAR++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (ROW4 = 1; ROW4 <= NN; ROW4++)
    {
        for (STAR = 1; STAR <= ROW4; STAR++)
        {
            cout << "* ";
        }

        for (STAR = 1; STAR <= 2 * NN - 2 * ROW4; STAR++)
        {
            cout << "  ";
        }

        for (STAR = 1; STAR <= ROW4; STAR++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Pattern 5\n";

    int Row5, Col5;

    for (Row5 = 1; Row5 <= 5; Row5++)
    {
        for (Col5 = 1; Col5 <= Row5; Col5++)
        {
            cout << "* ";
        }
        for (Col5 = 1; Col5 <= 10 - 2 * Row5; Col5++)
        {
            cout << "  ";
        }
        for (Col5 = 1; Col5 <= Row5; Col5++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (Row5 = 4; Row5 >= 1; Row5--)
    {
        for (Col5 = 1; Col5 <= Row5; Col5++)
        {
            cout << "* ";
        }
        for (Col5 = 1; Col5 <= 10 - 2 * Row5; Col5++)
        {
            cout << "  ";
        }
        for (Col5 = 1; Col5 <= Row5; Col5++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Pattern 6\n";

    int Row6, Col6;

    for (Row6 = 1; Row6 <= 4; Row6++)
    {
        for (Col6 = 1; Col6 <= 4 - Row6; Col6++)
        {
            cout << " ";
        }
        for (Col6 = 1; Col6 < Row6; Col6++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (Row6 = 4; Row6 >= 1; Row6--)
    {
        for (Col6 = 1; Col6 <= 4 - Row6; Col6++)
        {
            cout << " ";
        }
        for (Col6 = 1; Col6 < Row6; Col6++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}