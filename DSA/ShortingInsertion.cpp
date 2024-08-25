#include <iostream>
using namespace std ;

int main(){






    int Array[5] = {4, 1, 3, 2, 5};

    for (int i = 1; i < 5; i++)  // Start loop from 1 to avoid index -1
    {
        if (Array[i] < Array[i - 1])
        {
            swap(Array[i], Array[i - 1]);
        }
    }

    for (int j = 0; j < 5; j++)  // Changed loop to < 5 to print all elements
    {
        cout << Array[j] << " ";
    }

    return 0;

 

}