#include <iostream>
#include <vector>
using namespace std;

int returnArraySize(vector<int> arr);
int numberOfSubArrays(vector<int> arr);
vector<int> subArrays(vector<int> arr);

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    cout << "Array size: " << returnArraySize(arr) << endl;
    cout << "Number of sub arrays: " << numberOfSubArrays(arr) << endl;

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            cout << "["; 
            for (int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << "]" << endl;
        }
        // cout << "[";
        // cout << arr[start];
        // cout << "]" << endl;
    }
    

    
    // for (int i = 0; i < arr.size(); i++) {
    //     for (int j = i; j < arr.size(); j++) {
    //         cout << "[";
    //         for (int k = i; k <= j; k++) {
    //             cout << arr[k];
    //             if (k != j) {
    //                 cout << ",";
    //             }
    //         } 
    //         cout << "]" << endl;
    //     }
    // }
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

