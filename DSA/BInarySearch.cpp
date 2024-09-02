

#include <iostream>
using namespace std;


int BinarySearch( int Array[],int TargetedNum , int SizeOfAnArray)
{    

    int LeftIndex = 0;
    int RightIdex = SizeOfAnArray -1 ;

    while (LeftIndex<= RightIdex)
    {

        int MiddleIndex = LeftIndex + (RightIdex-LeftIndex)/2;
        
        if (Array[MiddleIndex] == TargetedNum)
        {
             return MiddleIndex;

        }else if (Array[MiddleIndex] < TargetedNum)
        {

            LeftIndex = MiddleIndex+1 ;


        }else{
            RightIdex = MiddleIndex -1 ;

        }

        
        

        
    }
        return -1 ;
    






}




int main()
{
    int Array[]={2,3,6,8,10,70};
    int SizeOfAnArray = sizeof(Array) / sizeof(Array[0]);
    int TargetedNum = 10 ;


    int ResultINdex =  BinarySearch(Array,TargetedNum,SizeOfAnArray);

   
    if (ResultINdex != -1) {
        cout << "Target number " << TargetedNum << " found at index " << ResultINdex << "." << endl;
    } else {
        cout << "Target number " << TargetedNum << " not found in the array." << endl;
    }

    return 0;

}