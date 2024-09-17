#include <iostream>
using namespace std;


int main()
{

    
    
    int n = 8 ; 
    int Array[n] = {1,3,4,5,6,7,7,8};
    int low = 0;
    int high = n-1 ;
    int result = -1 ;
    int Target = 7;


    while (low<=high)
    {
        int mid= low+(high-low)/2;


        if (Array[mid]==Target)
        {
           return mid;

        }else if (Array[mid] < Target)
        {
           high = mid-1;

        }else{
            low = mid+1 ;

        }
        
    }
        return result;
    









    return 0; 
}