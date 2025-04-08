#include <stdio.h>

unsigned int rootN(unsigned int n, unsigned int k);

int main() {
    unsigned int result = (unsigned int) rootN(65536, 16);
    printf("%u", result);

    return 0;
}

unsigned int rootN(unsigned int n, unsigned int k) {
    int begin = 1;
    int end = 65536;
    
    while (begin <= end) {
        int mid = begin + (end - begin) / 2;
        unsigned int mid_root = 1;
        for (int i = 1; i <= k; i++) {
            mid_root *= mid;
            if (mid_root > n) {
                break;
            }
        }
        if (mid_root == n) {
            return mid;
        }
        else if (mid_root < n) {
            begin = mid + 1;
        }
        else {
            end  = mid - 1;
        }
    }
    return -1;
}
