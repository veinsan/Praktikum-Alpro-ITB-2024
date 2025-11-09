#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    // Loop untuk setiap baris (dari 0 sampai n-1)
    for (int i = 0; i < n; i++){
        int coef = 1; // Bilangan pertama pada setiap baris selalu 1
        // Loop untuk mencetak setiap elemen pada baris ke-i
        for (int j = 0; j <= i; j++){
            printf("%d", coef);
            // Cetak spasi jika bukan elemen terakhir pada baris tersebut
            if(j < i)
                printf(" ");
            // Hitung nilai berikutnya secara iteratif menggunakan rumus:
            // coef_next = coef * (i - j) / (j + 1)
            coef = coef * (i - j) / (j + 1);
        }
        // Akhiri setiap baris dengan newline
        printf("\n");
    }
    
    return 0;
}
