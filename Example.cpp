#include <iostream>
#include <vector>
using namespace std;

int returnSubArraySize(vector<int> arr);

int main() {
    vector<int> arr = {1, 2, 3};
    cout << returnSubArraySize(arr) << endl;
    return 0;
}

int returnSubArraySize(vector<int> arr) {
    return arr.size();
}