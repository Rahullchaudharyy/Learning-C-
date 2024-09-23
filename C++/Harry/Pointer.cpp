#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // What is pointer ??
    // Its just a data type , Which holds an adresss of the variable .

    string Varable_Name = "This is nothing but the vairable that is taken for the example ";
    string* Pointer_Variable = &Varable_Name;

    cout << "The address of Varable_Name" << setw(3) << Pointer_Variable << endl;
    cout << "The address of Varable_Name" << setw(3) << &Varable_Name << endl;

    // In the both case we would see the address of the variable that where its sotred ??
    // Address = 0x7ffcc9b2bb70

    // In case if we want to see the value that is inside the address so we would aceess in this way 
    cout << "The value  of that address is :- " << setw(3) << *Pointer_Variable << endl;

  

     // Pointer that store the address of the pointer

     string** Pointer_Address = &Pointer_Variable;
    cout << "The address of Pointer_Variable " << setw(3) << &Varable_Name << endl;

     



    return 0;
}