#include <stdio.h>
#include <stdlib.h>

void search(int arr[], int *l, size_t size);

int main() {
    int size;
    int l;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int *arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("Enter elements:\n");
    for (int i =  0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number you want to find: \n");
    scanf("%d", &l);
    search(arr, &l, size);

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
