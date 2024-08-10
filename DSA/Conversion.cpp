#include <iostream>
using namespace std;

int main()
{

    int Num,Rem,ans = 0, mul=1;
    cout<< " Enter the decimal Number:- ";
    cin >> Num ; 

    while (Num > 0 )
    {

        Rem = Num%2;
        Num /= 2;
        ans = Rem*mul+ans;

        mul*=10;
          

         


    }
          cout << "The binary of this number is : "<< ans ; 
    

    int Mod , Number , Qoutint,Remm ;
    cin>> Number ;
     while ( Qoutint>0)
     {
     
        Remm =   Number%10;
        Number = Number/10;
        


     }
     

    return 0;
}