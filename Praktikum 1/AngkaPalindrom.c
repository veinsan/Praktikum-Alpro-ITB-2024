#include <stdio.h>

int main(){
    int N, Nasli, Nreversed = 0, sisa;
    scanf("%d", &N);
    Nasli = N;
    while (N != 0) {
        sisa = N % 10;
        Nreversed = Nreversed * 10 + sisa;
        N = N / 10;
    }
    if (Nasli == Nreversed) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}