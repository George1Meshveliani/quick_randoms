#include <stdio.h>

int binarySearch(int arr[], size_t size, int target);

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("%d", binarySearch(arr, size, 1));
    return 0;
}

int binarySearch(int arr[], size_t size, int target) {
   int left =  0;
   int right = size - 1;
   
   while (left <= right) {
       int mid = left + (right - left) / 2;
       if (mid == left) {
           return mid;
       } 
       else if (arr[mid] < target) {
           left = mid + 1;
       }
       else {
           right = mid - 1;
       }
   }
   return -1; 
} 
