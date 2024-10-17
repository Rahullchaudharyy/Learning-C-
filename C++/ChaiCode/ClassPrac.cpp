#include <iostream>
using namespace std;

class Car{
   private:
       string make ;
       string model;
       int year ;
    
    public:
        void setDetails(){
            make = "Toyota";
            model = "Urban Cruiser";
            year = 2024;

        }

        void getDetails(){
            cout << "Car Maker :" << make << endl;
            cout << "Car Model :" << model << endl;
            cout << "Manufectured year :" << year << endl;
        }


};

int main() {
    Car FirstCar ;
    FirstCar.setDetails();
    FirstCar.getDetails();
    
    return 0;
}