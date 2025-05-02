#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Transport {
    public:
        int price;
        int speed;
        int numberOfPassengers;

        Transport(int p, int s, int n) {
            price = p;
            speed = s;
            numberOfPassengers = n;
        }

        void destination(string d) {
            cout << d << endl;
        }
};

class Taxi : public Transport {
    public:
        Taxi(int p, int s, int n) : Transport(p, s, n) {};
};

class Bus : Transport {
    public:
        Bus(int p, int s, int n) : Transport(p, s, n) {};
};


class Train : Transport {
    public:
        Train(int p, int s, int n) : Transport(p, s, n) {};
};

int main() {
    Taxi t(1, 2, 3);
    cout << t.numberOfPassengers << endl;
    
    t.destination("Tbilisi");
    return 0;
}