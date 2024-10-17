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

            for(string atandee: Atandees){
                cout<< atandee << " ";
            }
            for(int num: arr){
                cout<< num << " ";
            }

        }
    
    private:
        int Age = 20 ;

};

int main() {

    Exam examOne;

    examOne.ExamName = "No Name";
    examOne.ExamMarks= 400;
    examOne.TotalExams= 7;
    examOne.Atandees = {"Alice", "Bob", "Charlie",  "David",  "Eve",  "Frank","Grace","Hannah","Ivy", "Jack" };

    examOne.GetExamDetails();
    

    return 0;
}