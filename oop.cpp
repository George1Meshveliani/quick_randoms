#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car {
    public:
        int year;
        string brand;

        Car(int y, string b) {
            year = y;
            brand = b;
        }

        // Car Validation Method
        void carValidation() {
            if (year < 2010) {
                cout << "Old" << endl;
            }
            else {
                cout << "New" << endl;
            }
        }

        int maxSpeed(int speed) {
            return speed;
        } 
};

// void Car::myMethod() {
//     cout << "2" << endl;
// };

int main() {
    
    Car carObj(1996, "volvo");
    Car carObj1(2010, "BMW");

    carObj.carValidation();
    carObj1.carValidation();

    cout << "Year: " << carObj.year << endl;
    cout << "Brand: " << carObj.brand << endl;
    cout << "Max speed is: " << carObj.maxSpeed(299) << endl;

    return 0;
}