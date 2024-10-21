#include <iostream>
using namespace std;

int* prepareChai(int cups) {
    int* Orders = new int[cups];

    for (int i = 0; i < cups; i++)
    {
        Orders[i] = (i+1) * 10;

    }

    return Orders;
    
}

int main() {
      
      int cups = 5;
      int* orders = prepareChai(cups);
      for (int i = 0; i < cups; i++)
      {
        cout << " Cup:"<< i+1 <<" has "<<orders[i] << " ml" << endl ;  
      }
      

      delete[] orders;  
    return 0;
}