#include <iostream>
#include <vector>
using namespace std;

int returnArraySize(vector<int> arr);
int numberOfSubArrays(vector<int> arr);
vector<int> subArrays(vector<int> arr);

int main() {
    vector<int> arr = {1, 2, 3};
    cout << "Array size: " << returnArraySize(arr) << endl;
    cout << "Number of sub arrays: " << numberOfSubArrays(arr) << endl;
    
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i; j < arr.size(); j++) {
            for (int k = i; k <= j; k++) {
                cout << arr[k] << "|";
            } 
        }
    }
    return 0;
}

int returnArraySize(vector<int> arr) {
    return arr.size();
}

int numberOfSubArrays(vector<int> arr) {
    int n = arr.size();
    return n * (n + 1) / 2;
}

vector<int> subArrays(vector<int> arr) {
    vector<int> subArr(arr.size(), 0);

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i; j < arr.size(); j++) {
            for (int k = i; k <= j; k++) {
                subArr[j] = arr[i];
            } 
        }
    }

    return subArr;
}

