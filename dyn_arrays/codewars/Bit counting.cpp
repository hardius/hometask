#include <cmath>

unsigned int countBits(unsigned long long n){
    int sz = log2(n) + 1;
    size_t cnt = 0;
    for (int i = 0; i < sz; ++i) {
        cnt += (n&1);
        n = n >> 1;
    }
    return cnt;
}