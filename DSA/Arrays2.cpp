#include <iostream>

using namespace std;

int main()
{

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

    // int Ar[6] = {1,2,3,4,5,46};

    // int Start = 0 , End = 5 ;

    // while ( Start < End )
    // {
    //     swap(Ar[Start], Ar[End]);
    //     Start++;
    //     End--;

    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << Ar[i]<<" ";

    // }

    // int n = 6;
    // int sum = 0;
    // int Arrays4[n - 1] = {1, 3, 4, 5, 6};
    // for (int i = 0; i < n; i++)
    // {
    //     sum += Arrays4[i];
    // }

    // int ans = n * (n + 1) / 2;
    // return ans - sum;
    int n ;
    cout<< "Enter the number";
    cin>> n;


    int ArR[1000] ;
    ArR[0]=0;
    ArR[1]=1;


    for (int i = 2; i <= n-1; i++)
    {
        ArR[i] = ArR[i - 1] + ArR[i - 2];
        
    }
    cout << ArR[n-1];


    return 0;
}