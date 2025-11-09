#include <stdio.h>

/* Fungsi untuk mengecek apakah sebuah bilangan merupakan kuadrat sempurna tanpa menggunakan math.h */
int isPerfectSquare(int x) {
    int i;
    for(i = 1; i * i <= x; i++){
        if(i * i == x)
            return 1;
    }
    return 0;
}

int main(){
    int N, count = 0;
    scanf("%d", &N);
    
    /* Cari semua faktor dari N dan hitung faktor yang merupakan kuadrat sempurna */
    for(int i = 1; i <= N; i++){
        if(N % i == 0){ // i adalah faktor dari N
            if(isPerfectSquare(i)){
                count++;
            }
        }
    }
    
    /* Cetak jumlah faktor yang merupakan kuadrat sempurna */
    printf("%d\n", count);
    
    return 0;
}
