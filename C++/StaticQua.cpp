#include <iostream>
using namespace std;

// static
int LifeUp(){
    int Life= 100;
     return Life =Life+1;
}
int main(){
    int Life = 50;
//    cout<< "Your health is " << Life << endl;
  Life = LifeUp();
   cout<< "Your updated health is " << Life << endl;
// Static is use to make any veeriable to global scopr 

   
    return 0 ;
}