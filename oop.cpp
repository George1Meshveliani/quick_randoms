#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car {
    public:
        int year;
        string brand;
};

int main() {
    Car carObj;

    carObj.year = 1996;
    carObj.brand = "volvo";

    cout << carObj.year << endl;
    cout << carObj.brand << endl;

    return 0;
}