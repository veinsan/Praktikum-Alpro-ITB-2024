#include <stdio.h>

int main() {
    /* Deklarasi variabel */
    int A, N;
    int i;
    int sumGenap = 0, sumGanjil = 0;

    /* Input: Membaca bilangan awal (A) dan bilangan akhir (N) */
    scanf("%d %d", &A, &N);

    /* Proses penjumlahan bilangan genap dalam rentang [A, N] */
    for(i = A; i <= N; i++) {
        if(i % 2 == 0) {  // Jika i adalah bilangan genap
            sumGenap += i;
            /* Jika jumlah kumulatif bilangan genap melebihi 1000, langsung cetak -1 dan hentikan program */
            if(sumGenap > 1000) {
                printf("-1\n");
                return 0;
            }
        }
    }

    /* Jika jumlah bilangan genap <= 1000, lanjutkan menghitung jumlah bilangan ganjil */
    for(i = A; i <= N; i++) {
        if(i % 2 != 0) {  // Jika i adalah bilangan ganjil
            sumGanjil += i;
        }
    }

    /* Cetak hasil penjumlahan: baris pertama untuk genap, baris kedua untuk ganjil */
    printf("%d\n", sumGenap);
    printf("%d\n", sumGanjil);

    return 0;
}
