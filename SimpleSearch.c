#include <stdio.h>

void search(int arr[], int *l, size_t size);

int main() {
    int size;

    // Get array size from user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];  // Declare an array of user-defined size

    // Taking array input
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);  // Taking array input
    }

    int n;
    printf("Enter the number to search: ");
    scanf("%d", &n);  // Input the number to search

    int *l = &n;  // Pointer to the number entered by the user

    search(arr, l, size);  // Call search function

    return 0;
}

void search(int arr[], int *l, size_t size) {
    int found = 0;  // Flag to check if the number is found

    for (int i = 0; i < size; i++) {
        if (*(arr + i) == *l) {  // Pointer arithmetic
            printf("Element found at index: %d\n", i);
            found = 1;  // Mark as found
            return;     // Stop searching after finding the first match
        }
    }

    if (!found) {
        printf("Element not found\n");
    }
}
