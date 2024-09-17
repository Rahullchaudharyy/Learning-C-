#include <iostream>
using namespace std ; 

int main (){


    printf("Who are you ?? ");
    string name ;
    getline(cin,name);
    if (name == "rahul")
    {
            cout << "You have access and authority to make the change in this code !!!" << endl;
    } else if(name == "ankit")  {

            cout << "Your reqeuast is in the pending you will get access of this code soon...." << endl;
    } else{
            cout << "It can be dangarous for you , you don't have the access of this code" << endl;

    }
    
}