#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car {
    private:
        int carPrice;
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

        void setCarPrice(int p) {
            carPrice = p;
        }

        int getCarPrice() {
            return carPrice;
        }
};

int main() {
    
    Car carObj(1996, "volvo");
    Car carObj1(2010, "BMW");

    carObj.carValidation();
    carObj1.carValidation();

    cout << "Year: " << carObj.year << endl;
    cout << "Brand: " << carObj.brand << endl;
    cout << "Max speed is: " << carObj.maxSpeed(299) << endl;

    carObj1.setCarPrice(10000);
    cout << carObj1.getCarPrice() << endl;

    return 0;
}