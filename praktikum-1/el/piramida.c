#include <stdio.h>

/* Fungsi untuk mengecek apakah suatu bilangan merupakan kuadrat sempurna tanpa menggunakan math.h */
int isPerfectSquare(int x) {
    int j;
    for(j = 1; j * j <= x; j++){
        if(j * j == x)
            return 1;
    }
    return 0;
}

int main(){
    int N;
    scanf("%d", &N);
    
    int i, num;
    
    /* Loop untuk setiap baris piramida, dengan baris ke-i */
    for(i = 1; i <= N; i++){
        /* Cetak spasi awal agar bilangan ke-i berada di tengah piramida */
        int spaceCount = 2 * (N - i);
        for(int j = 0; j < spaceCount; j++){
            printf(" ");
        }
        
        /* Bagian ascending: dari i hingga (2*i - 1) */
        for(num = i; num <= 2*i - 1; num++){
            /* Prioritas: jika bilangan adalah kuadrat sempurna, ganti dengan "*" */
            if(isPerfectSquare(num)) {
                printf("* ");
            }
            /* Jika bilangan sudah lebih dari satu digit, cetak modulo 10-nya */
            else if(num >= 10) {
                printf("%d ", num % 10);
            }
            else {
                printf("%d ", num);
            }
        }
        
        /* Bagian descending: dari (2*i - 2) turun ke i */
        for(num = 2*i - 2; num >= i; num--){
            if(isPerfectSquare(num)) {
                printf("* ");
            }
            else if(num >= 10) {
                printf("%d ", num % 10);
            }
            else {
                printf("%d ", num);
            }
        }
        /* Setiap baris diakhiri dengan newline */
        printf("\n");
    }
    
    return 0;
}
