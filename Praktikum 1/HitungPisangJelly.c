#include <stdio.h>

int main(){
    int N, X;
    long long i, pisang = 0, jelly = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &X);

        if (X == 0) {
            break;
        } if (X % 2 == 0) {
            pisang += X;
        } else {
            jelly += X;
        }
    }
    printf("%lld %lld\n", pisang, jelly);
    return 0;
}