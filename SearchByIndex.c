#include <stdio.h>

int binarSearch(int arr[], int n, size_t size);

int main() {
    int a[] = {1, 2, 3};
    int size = sizeof(a)/sizeof(a[0]);
    int result = binarSearch(a, 2, size);
    printf("%d \n", result);
    return 0;
}

int binarSearch(int arr[], int n, size_t size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int result = 1;
        int mid = left + (right - left) / 2;
        if (mid == n) {
            result = mid;
        }
        else if (mid < n) {
            mid = left + 1;
        } 
        else {
            mid = right - 1;
        }
        return result;
    }
    return -1;
}