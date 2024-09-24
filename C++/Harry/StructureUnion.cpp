#include <iostream>
using namespace std;

typedef struct Student
{
    string Name;
    int RollNumber;
    int Class;
    char section;
} ep;

union money
{
    int rice;
    char car;
    int pound;
};

int main()
{
    ep rahul;
    rahul.Name = "Rahul";
    rahul.RollNumber = 27;
    rahul.Class = 13;
    rahul.section = 'C';

    // Outputting the student information
    cout << "Name: " << rahul.Name << endl;
    cout << "Roll Number: " << rahul.RollNumber << endl;
    cout << "Class: " << rahul.Class << endl;
    cout << "Section: " << rahul.section << endl;

    // Enum declaration
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;

    // Output enum values
    cout << "\nEnum Values:" << endl;
    if (m1 == 0)
    {
        cout << "Breakfast: " << breakfast << endl;
    }

    if (m2 == 1)
    {
        cout << "Lunch: " << lunch << endl;
    }

    if (m3 == 2)
    {
        cout << "Dinner: " << dinner << endl;
    }

    return 0;
}
