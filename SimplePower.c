#include <stdio.h>

unsigned long long powTwo(unsigned int k);

int main() {
    unsigned int test1 = powTwo(3);
    printf("%u \n", test1);
    return 0;
}

unsigned long long powTwo(unsigned int k) {
    return k * k;
}
