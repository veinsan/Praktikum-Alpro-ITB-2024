#include <stdio.h>

int main(){
    int n, t, i;

    scanf("%d %d", &n, &t);

    for (i = 1; i <= t; i++) {
        n += 9;
        printf("tahun ke-%d = %d\n", i, n);
    }
    return 0;
}