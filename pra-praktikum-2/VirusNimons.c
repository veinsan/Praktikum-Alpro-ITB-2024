#include <stdio.h>

int main() {
    long long int N, T, X;
    
    scanf("%lld", &N);
    scanf("%lld", &T);
    scanf("%lld", &X);
    
    long long int total = N;
    long long int virusbaru = N;
    
    for (long long int i = 0; i < T; i++) {
        virusbaru *= X;
        total += virusbaru;
    }
    
    printf("Terdapat %lld Virus Nimons Gila pada jam ke-%lld\n", total, T);
    
    return 0;
}
