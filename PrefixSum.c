#include <stdio.h>

int PrefixSum(int arr[], int i, int j, size_t size);

int main() {
    int a[] = {2, 4, 6, 8, 10};
    int size = 5;
    printf("%d \n", PrefixSum(a, 1, 2, 5));
    return 0;
}

int PrefixSum(int arr[], int i, int j, size_t size) {
    int P[size];
    if (size > 0) {
        for (int k = 0; k < size; k++) {
            P[k] = P[k - 1] + arr[k];
        }
    }

    return P[j] - P[i - 1];
}