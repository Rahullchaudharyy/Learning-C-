#include <iostream>
using namespace std ;



int main(){
      

     char call_api = 'rahul';
     

    try
    {
         cout<<"trying to use the api value \n";
         cout<<"Did some testing with api value\n";
        throw call_api;
         cout<<"No code execute after return and throw\n";

    }
    catch(int x )
    {
cout<<"Integer exeception\n";
    } catch(float f){
cout<<"Float exeception\n";

    }catch(...){
        cout<< "Opps !! Something went wrong\n";
    }
    

   cout << "keep on moving with the rest of code\n"<< endl;




    return 0;
}