#include <stdio.h>

int main(){
    int N;
    
    /* Input: membaca bilangan bulat N */
    scanf("%d", &N);
    
    /* Validasi input: N harus > 0 */
    if(N <= 0){
        printf("Masukan tidak valid\n");
        return 0;
    }
    
    int i, j, num;
    
    /* Bagian atas jam pasir (baris 1 hingga N) */
    for(i = 1; i <= N; i++){
        /* Cetak spasi: (i - 1) spasi di awal baris */
        for(j = 1; j < i; j++){
            printf(" ");
        }
        /* Cetak angka: dari i sampai N, pisahkan dengan spasi, tanpa spasi ekstra di akhir */
        for(num = i; num <= N; num++){
            printf("%d", num);
            if(num < N){
                printf(" ");
            }
        }
        printf("\n");
    }
    
    /* Bagian bawah jam pasir (baris N+1 hingga 2*N - 1) */
    for(i = N - 1; i >= 1; i--){
        /* Cetak spasi: (i - 1) spasi di awal baris */
        for(j = 1; j < i; j++){
            printf(" ");
        }
        /* Cetak angka: dari i sampai N */
        for(num = i; num <= N; num++){
            printf("%d", num);
            if(num < N){
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
