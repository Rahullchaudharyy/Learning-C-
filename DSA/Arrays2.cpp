#include <iostream>

using namespace std ;


int main(){

//     int Arr[5] = {2,54,3,54,34};
//     int ans = INT32_MAX;

//     for (int i = 0; i <= 5; i++)
//     {
//         if (Arr[i] < ans)
//         {
//            ans = Arr[i];
//         }
        
//     }
//     cout << ans; 
    


//     int Arrays[5] = {1,2,3,4,5};

//     int Result = INT32_MIN;

//     for (int i = 0; i <=5; i++)
//     {

//         if (Arrays[i] > Result){

//             Result = Arrays[i];

//         }
   


        
        
//     }
    

//    cout << Result ;
    

   // Search element in an array and print the index of that arrays if not then print -1 ;


//    int Arrays2[7]={1,45,3,55,11,3,5};
//    int Search = 1 ;
//    int Index ;

//    for (int i = 0; i <= 6; i++)
//    {
//        if (Arrays2[i] ==  Search)
//        {
//         Index = i;
//         break;
//        }
       
//    }
//    cout << Index ;


    // int Arrys3[5] = {1,2,3,4,5};

    // int ReversedArr[5] = {};
    // int i = 5 , j = 0 ;


    // while (5>= 0)
    // {
    //     ReversedArr[j] = Arrys3[i];
    //     j++;
    //     i--;
    // }


    int Ar[6] = {1,2,3,4,5,46};

    int Start = 0 , End = 5 ;

    while ( Start < End )
    {
        swap(Ar[Start], Ar[End]);
        Start++;
        End--;

    }

    for (int i = 0; i < 6; i++)
    {
        cout << Ar[i]<<" ";

    }


    
    
    

   
    


    

   
    return 0; 
}