#include <iostream>
#include <vector>
using namespace std;

int returnArraySize(vector<int> arr);
int numberOfSubArrays(vector<int> arr);
void printSubArrays(vector<int> arr);

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    cout << "Array size: " << returnArraySize(arr) << endl;
    cout << "Number of sub arrays: " << numberOfSubArrays(arr) << endl;
    printSubArrays(arr);
    return 0;
}

int returnArraySize(vector<int> arr) {
    return arr.size();
}

int numberOfSubArrays(vector<int> arr) {
    int n = arr.size();
    return n * (n + 1) / 2;
}

void printSubArrays(vector<int> arr) {
    int n = arr.size();
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            cout << "["; 
            for (int i = start; i <= end; i++) {
                cout << arr[i];
                if (i != end) {
                    cout << ",";
                }
            }
            cout << "];" << endl;
        }
    }
}


