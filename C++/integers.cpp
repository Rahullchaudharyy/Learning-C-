#include <iostream>
// #include <cstdint>
using namespace std ; 

int main(){


    printf("The size of short int is %d bits\n" ,sizeof(short int) * 8);
    printf("The size of int is %d bits\n" ,sizeof(int) * 8);
    printf("The size of long int is %d bits\n" ,sizeof(long int) * 8);
    printf("The size of long long int is %d bits\n" ,sizeof(long long int) * 8);

    //We can use the binary code to store and use the value  !!! Its new addition ;


    int a = 0b11011 ; 
    cout<< "Fun value is " << a<< endl ;

    return 0 ; 
}

