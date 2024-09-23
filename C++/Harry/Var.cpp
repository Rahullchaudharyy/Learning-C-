
#include <iostream>
using namespace std;

int GlobalVariable = 35;


int main() {
    int GlobalVariable= 20;
    cout << "This is Localvariable "<< GlobalVariable<<endl;
    cout << "This is GlobalVariable "<< ::GlobalVariable<<endl;


     // 

     float A = 94.4f;
     long double B = 34.6l;


    //  cout<<"The Size of  of A is "<<sizeof(94.4)<<endl;
    //  cout<<"The Size of  of A is "<<sizeof(34.6)<<endl;
     cout<<"The Size of  of A is "<<sizeof(94.4f)<<endl;
     cout<<"The Size of  of A is "<<sizeof(94.4F)<<endl;
     cout<<"The Size of  of B is "<<sizeof(34.6l)<<endl;
     cout<<"The Size of  of B is "<<sizeof(34.6L)<<endl;


     cout<<"The value of A is "<< A<<endl<< "The value of B is "<< B<<endl;
 // Refrence varaiable .


    float x = 3988;
    float & y = x;

    // Type casting
    float FloatVal = 34.5;

    cout<< "The value of FloatValue is type conver to int:- "<< int(FloatVal)<< endl;
    cout<< "The value of FloatValue is "<< (int)FloatVal<< endl;


    const int a = 349;

    // a = 4040;




    
    return 0;
}