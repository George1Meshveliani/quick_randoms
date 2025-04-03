#include <stdio.h>

void search(int arr[], int *l, size_t size) {
    int check = 0;
    for(int i = 0; i < size; i++) {
        if (*(arr + i) == *l) {
            printf("%d", i);
            check = 1;
            return;
        } 
    }
    if (!check) {
        printf("%s", "There is no such kind of element in the given array, try again");
    }
}

int main() {
    int n;
    printf("%s \n", "Enter the number: ");
    scanf("%d",&n);
    int *l = &n;
    int a[] = {1, 2, 3};
    int size = sizeof(a) / sizeof(a[0]);
    search(a, l, size);
    return 0;
}
