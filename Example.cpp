#include <iostream>
#include <vector>
using namespace std;

int returnArraySize(vector<int> arr);
int numberOfSubArrays(vector<int> arr);
void printSubArrays(vector<int> arr);
int subArrayCounter(vector<int> arr);
int maximumSumOfSubArrays(vector<int> arr);
void evenSumOfSubArrays(vector<int> arr);
void specificSubArray(vector<int> arr, int givenSum);
int longestSubArrayWithSumZero(vector<int> arr);

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, -5};
    int n = arr.size();

    cout << "Array size: " << returnArraySize(arr) << endl;
    cout << "Number of sub arrays: " << numberOfSubArrays(arr) << endl;

    printSubArrays(arr);

    cout << "Counted sub arrays: " << subArrayCounter(arr) << endl;
    cout << "Maximum sum of subarrays: " << maximumSumOfSubArrays(arr) << endl;
    
    evenSumOfSubArrays(arr);
    cout << endl;
    specificSubArray(arr, 5);

    cout << "Longest subarray with sum zero: " << longestSubArrayWithSumZero(arr) << endl;


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
    cout << "All possible subarrays: " << endl;
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

int subArrayCounter(vector<int> arr) {
    int counter = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i; j < arr.size(); j++) {
            counter++;
        }
    }
    return counter;
}

int maximumSumOfSubArrays(vector<int> arr) {
    int n = arr.size();
    int maxSum = 0;

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int sum = 0;
            for (int k = start; k <= end; k++) {
                sum += arr[k];
                if (sum > maxSum) {
                    maxSum = sum;
                }
            }
        }
    }
    return maxSum;
}

void evenSumOfSubArrays(vector<int> arr) {
    int n = arr.size();

    for (int start = 0; start < n; start++) {
        int sum = 0;
        for (int end = start; end < n; end++) {
            sum += arr[end];
            if (sum % 2 == 0) {
                cout << "[";
                for (int k = start; k <= end; k++) {
                    cout << arr[k];
                    if (k != end) {
                        cout << ",";
                    }
                }
                cout << "]";
            } 
        }
    }
 }
 
void specificSubArray(vector<int> arr, int givenSum) {
    int n = arr.size();
    int count = 0;

    for (int start = 0; start < n; start++) {
        int sum = 0;
        for (int end = start; end < n; end++) {
            sum += arr[end];
            if (sum == givenSum) {
                cout << "[";
                for (int i = start; i <= end; i++) {
                    cout << arr[i];
                    if (i != end) cout << ", ";
                }
                cout << "]" << endl;
                count++;
            }
        }
    }

    if (count == 0) {
        cout << "No subarrays found with sum " << givenSum << "." << endl;
    }
}

int longestSubArrayWithSumZero(vector<int> arr) {
    int n = arr.size();
    int result = 0;

    for (int start = 0; start < n; start++) {
        int sum =  0;
        for (int end = start; end < n; end++) {
            sum += arr[end];
            if (sum == 0) {
                result = end + 1;
            }
        }
    }

    return result;
}

