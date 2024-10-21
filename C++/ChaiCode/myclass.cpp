#include <iostream>
#include <vector>
using namespace std;

class Exam{
     
     public:
        string ExamName;
        int ExamMarks;
        int TotalExams;
        vector<string> Atandees ;
        int arr[10] = {13,5,2,4,3,4,2,3};

        void GetExamDetails(){

            cout << "Exam name is " << ExamName << endl;
            cout << "Exam marks is " << ExamMarks << endl;
            cout << "Total number of exam " << TotalExams << endl;

             cout<< "Atandees are : \n" ; 
            for(string atandee: Atandees){
                cout <<atandee << " \n";
            }
            for(int num: arr){
                cout<< num << " ";
            }

        }
    
    private:
        int Age = 20 ;

};

int main() {

    Exam bcaEcam;

    bcaEcam.ExamName = "No Name";
    bcaEcam.ExamMarks= 400;
    bcaEcam.TotalExams= 7;
    bcaEcam.Atandees = {"Alice", "Bob", "Charlie",  "David",  "Eve",  "Frank","Grace","Hannah","Ivy", "Jack" };

    bcaEcam.GetExamDetails();
    

    return 0;
}