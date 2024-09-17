
#include <iostream>

 using namespace std ; 

 int main (){

    int Original_Variable = 200; 
    int &Reffrance_Variable =  Original_Variable ; 
    Reffrance_Variable = 400;
     cout<<"Value:-" << Reffrance_Variable << endl; // outputwill be the 400 
     cout<<"Value:-" << Original_Variable << endl;  // Output will be the 400  because of the concpet of the reffrence variable
     
    return 0 ; 

 }