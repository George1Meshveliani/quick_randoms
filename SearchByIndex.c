#include <stdio.h>

int binarSearch(int arr[], int n, size_t size);

int main() {
    int a[] = {0, 3, 2};
    int size = sizeof(a) / sizeof(a[0]);
    int result;

    for (int i = 0; i < size; i++) {
        if (i == a[i]) {
            result = a[i];
        }
        else {
            result -1;
        }
    }

    printf("%d \n", result);
    return 0;
}

int binarSearch(int arr[], int n, size_t size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == n ) {
            return mid;
        }
        else if (arr[mid] < n) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    return -1;
}