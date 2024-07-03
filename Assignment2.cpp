#include <iostream>
#include <string>
using namespace std;


int main (){
   
   cout << "Please rate our service between 1 to 5 " << endl ;
   cout << "1 = Bad experience" << endl ;
   cout << "2 = Not good" << endl ;
   cout << "3 = Avegrage" << endl ;
   cout << "4 = Satisfied" << endl ;
   cout << "5 = Great!!" << endl ;
    
  int Rate;
    cin >> Rate;
    cin.ignore(); 

if (Rate == 1 )
{

    cout<<"Really sorry for inconvineince , Please share you feedback so that we can improve our quality :-" << endl ; 
     string feedback ;
       getline(cin, feedback);
       cout<<"Thanks for the feedback we will work on it !!!"<< endl;

}else if(Rate == 2){
    cout<<"Please share you that why you given 2 ?? So that we can improve  :-" << endl ; 
     string feedback ;
       getline(cin, feedback);
       cout<<"Thanks for the feedback we will work on it !!!" << endl ; 
}else if(Rate == 3){
    cout<<"Please share you that why you given 3 ?? So that we can improve  :-" << endl ; 
     string feedback ;
       getline(cin, feedback);
       cout<<"Thanks , Your feedback matters a lot ,  We will work on it !!!" << endl ; 
} else if (Rate == 4){
    cout<<" Thanks for visiting, Please share the reason so that we can be consistant :-" << endl ; 
     string feedback ;
       getline(cin, feedback);
       cout<<"Thanks , Your feedback matters a lot ,  We will work on it !!!" << endl ; 
} else if (Rate==5){
cout<<" Thanks for visiting, Please share the reason so that we can be consistant :-" << endl ; 
     string feedback ;
       getline(cin, feedback);
       cout<<"Thanks , Your feedback matters a lot ,  We will work on it !!!" << endl ; 
}



    return 0 ; 
}