#include <iostream>
using namespace std;

int main() {
    

    // int aray[/*Length of an arrays */] = { /* Value*/};
    // aray[/*Index*/ ] = {/*Value*/};

     int array[5] = {1, 2, 3, 4, 5};  // Defining an array of size 5 and initializing it

    array[2] = 10;  




  // Pointer arithmetic 

  int* p = array;

  cout<< "The value of array is array[0] "<< *p << endl;
  cout<< "The value of array is array[1] "<< (*p+1) << endl;
  cout<< "The value of array is array[2] "<< (*p+2) << endl;
  cout<< "The value of array is array[3] "<< (*p+3) << endl;


  // Its just how can we store the arayy 

  for (int i = 0; i <= 1000; i++)
  {
    cout<< i;
  }
  

    return 0;
}