#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int a = 12, b = 22, c = 23;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl;

    cout << "The value of a is with setw " << setw(7) << a << endl;
    cout << "The value of b is with setw " << setw(7) << b << endl;
    cout << "The value of c is with setw " << setw(7) << c << endl;

    // Lets understand the Operator Precedence and Associativity
    // Precedence = Which oprrator would be first 
    // Associativity = diraction 
    // https://en.cppreference.com/w/cpp/language/operator_precedence visit this website 
    return 0;


}