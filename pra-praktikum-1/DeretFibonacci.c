#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    
    int f0 = 0, f1 = 1;
    int fnext, i;

    for(i = 0; i < N; i++) {
        if(i == 0) {
            printf("%d", f0);
        } else if(i == 1) {
            printf(" %d", f1);
        } else {
            fnext = f0 + f1;
            printf(" %d", fnext);
            f0 = f1;
            f1 = fnext;
        }
    }
    printf("\n");
    return 0;
}