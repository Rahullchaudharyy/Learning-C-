
#include <iostream>
using namespace std;
int main()
{
    cout << "What is you fav colour ?? " << endl;

    string FavColour;
    //  cin >> FavColour ;

    getline(cin, FavColour);

    cout << "Woohhh!! " << FavColour << " Is my favrite colour too" << endl;

    return 0;
}
