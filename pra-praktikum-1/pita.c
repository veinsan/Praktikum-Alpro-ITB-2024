#include <stdio.h>

long long GCD(long long x, long long y) {
    while (y != 0) {
        long long temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);
    
    long long hasil = GCD(A, B);
    
    printf("%lld\n", hasil);
    return 0;
}
