#include <iostream>
using namespace std;

int main(){
    
    bool googleUser = true;
    bool Fbuser = true ; 
    bool IsAdmin = true;

    // if (IssignedIn&&IsAdmin)
    // {
    //     printf("Welcome Admin!!");
    // }else{

    // };
    
    if ((googleUser|| Fbuser)&&IsAdmin)
    {
        if (googleUser)
        {
        puts("Hey Admin Welcome!! you are googleuser");
        }else if (Fbuser)
        {
        puts("Hey Admin Welcome!! you are fbuser");
        }
        
        
    }
    


    return 0;

}