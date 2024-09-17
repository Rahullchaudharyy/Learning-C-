#include <iostream>

 using namespace std; 

int main (){
    int life ;
     life = 3 ; 
     int card ; 
     card = 34 ; 
     int New_card = card ; 


    //  With pointers 

    int *Mypointer ; 
    Mypointer = &New_card;
    
   New_card = *Mypointer ;     //This is called the pointer de-refrence
     printf("The value of the new variable is %d\n", New_card);
     printf("The value of the pointer is %p\n", Mypointer);
     printf("The value of the new variable is %d\n", New_card);

     return 0;



}


