#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    /* Jika N sama dengan 1, maka keluarkan 1 (karena 1 tidak memiliki faktor prima) */
    if(N == 1){
        printf("1\n");
        return 0;
    }
    
    int factor = 2;
    int first = 1;  /* Flag untuk menentukan apakah separator " * " perlu dicetak */
    
    /* Proses faktorisasi */
    while(factor * factor <= N){
        int count = 0;
        while(N % factor == 0){
            count++;
            N = N / factor;
        }
        if(count > 0){
            if(!first){
                printf(" * ");
            }
            if(count > 1)
                printf("%d^%d", factor, count);
            else
                printf("%d", factor);
            first = 0;
        }
        factor++;
    }
    
    /* Jika sisa N > 1, maka N adalah faktor prima terakhir */
    if(N > 1){
        if(!first){
            printf(" * ");
        }
        printf("%d", N);
    }
    
    printf("\n");
    return 0;
}