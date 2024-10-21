#include <iostream>
using namespace std;

int totalChaiServed(int chai[], int size)
{

    int total = 0;
    for (int i = 0; i < size; i++)
    {
       total = total + chai[i];
    }
    return total;
}

int main()
{
    int CoffeTemprature[5] = {2, 3, 6, 42, 56};
    for (int Temp = 1; Temp <= 5; Temp++)
    {   
        // cout << CoffeTemprature[Temp] << " degree C" << endl;
    };

    int ChaiServed[7] = {50, 60, 70, 20, 23};

    // cout << "Chai served on the day 1 " << ChaiServed[0];
    // passing the arrays as an parameters in the fucntions
      
     const int Row = 3 ;
     const int collumn = 4; 

    int twoDarrays[Row][collumn] = {
          {1,2,3,4},
          {5,6,7,8},
          {9,10,11,12}
    };

cout << "Data form the 2D arrays :-" << twoDarrays[2][1] << "\n" ; 
    
     
   int total = totalChaiServed(ChaiServed,7);

   cout<< "Toal chai served :"<< total ;
    return 0;
}
