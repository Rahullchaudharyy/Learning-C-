#include <iostream>
using namespace std;
int main()
{

    int my_num[] = {1, 2, 3, 4, 5, 6, 7};
    int i = 1;
    while (i < 7)
    {
       cout<< "Current number is " << my_num[i] << endl;
       i++;
      
    }

    for (int i = 0; i < 10; i++)
    {

           cout<< my_num[i] << endl;
    }
    
    // Forrange loop or for each in other language 

    return 0;
}