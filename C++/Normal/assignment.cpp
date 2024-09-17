#include <iostream>
using namespace std;

int main()
{

    string FirstName;
    cout << "Please enter your first name here\n";

    getline(cin, FirstName);
    cout << "Please enter your last name here\n";
    string LastName;
    getline(cin, LastName);

    cout << "Welcome!! " << FirstName << " " << LastName << endl;

    return 0; 
}