#include <stdio.h>

int main(){
    int N;
    int count = 0;
    scanf("%d", &N);
    while (N > 0){
        N /= 5;
        count += N;
    }
    printf("%d\n", count);
    return 0;
}