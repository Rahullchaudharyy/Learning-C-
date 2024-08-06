#include <iostream>
using namespace std;

int main()
{

    int rating = 4;

    switch (rating)
    {
    case 1:
        puts("Its 1");
        break;
    case 2:
        puts("Its 2");
        break;
    case 3:
        puts("Its 3");
        break;
    case 4:
        puts("Its 4");
        break;
    case 5:
        puts("Its 5");
        break;

        

    default: 
    puts("Please rate something");
        break;
    }

    return 0;
}