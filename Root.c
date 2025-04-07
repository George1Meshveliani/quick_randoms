#include <stdio.h>

unsigned int root(unsigned int n);

int main() {
    
    printf("%d", root(81));

    return 0;
}

unsigned int root(unsigned int n) {
    int begin = 1;
    int end = 65536;
    while(begin <= end) {
        int mid = begin + (end - begin) / 2;
        unsigned int mid_sq = mid * mid;
        if (mid_sq == n) {
            return mid;
        }
        else if (mid_sq < n) {
            begin = mid;
        }
        else {
            end = mid;
        }
    } 
    return -1; 
}
