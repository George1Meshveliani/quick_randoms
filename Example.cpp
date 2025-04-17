#include <iostream>
#include <vector>
using namespace std;

int returnArraySize(vector<int> arr);
int numberOfSubArrays(vector<int> arr);

int main() {
    vector<int> arr = {1, 2, 3};
    cout << returnArraySize(arr) << endl;
    cout << numberOfSubArrays(arr) << endl;
    return 0;
}

int returnArraySize(vector<int> arr) {
    return arr.size();
}

int numberOfSubArrays(vector<int> arr) {
    int n = arr.size();
    return n * (n + 1) / 2;
}