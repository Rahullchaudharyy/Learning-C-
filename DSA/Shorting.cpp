#include <iostream>
using namespace std;

int main()
{

    bool Ison = 0;
    if (Ison == 1)
    {
        int arr[1000];
        int n;
        cout << "Enter the size of an array:- ";
        cin >> n;
        cout << "Enter the elemnts in the array:- ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = n - 2; i >= 0; i--)
        {
            bool swapped = 0;

            for (int j = 0; j <= i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swapped = 1;

                    swap(arr[j], arr[j + 1]);
                }
            }
            if (swapped == 0)
            {
                cout << "This array is already shorted...";

                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    int leth;
    cout << "Please enter the length of an arary :- ";
    cin >> leth;
    cout << "Please enter the element of an arary :- ";
    bool Swaped ;


    int array[leth];
    for (int i = 0; i < leth; i++)
    {
        cin >> array[i];
    }

    for (int j = 0; j <= leth; j++)
    {   Swaped = 0;
        for (int i = 0; i <= leth - 2; i++)
        {
            if (array[i] < array[i + 1])
            {
                Swaped = 1 ;

                swap(array[i], array[i + 1]);
            }
        }
         if (Swaped == 0)
         {
           cout<<"Already Shorted ";
           break;
         }
         

    }

    for (int i = 0; i < leth; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
