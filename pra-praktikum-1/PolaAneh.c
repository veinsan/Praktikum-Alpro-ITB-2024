#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int i, j;
    for (i = 0; i < N; i++) {
        int iPrime = (i <= N/2) ? i : (N - 1 - i);
        int left = (N/2) - iPrime;
        int right = (N/2) + iPrime;

        for (j = 0; j < N; j++) {
            if (j == left || j == right) {
                printf("*");
            } else {
                printf(".");
            }
        }
        printf("\n"); 
    }
    return 0;
}