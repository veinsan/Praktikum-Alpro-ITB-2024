#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int original = N;  /* Simpan nilai awal untuk perbandingan */
    int reversed = 0;
    int digit;

    /* Proses pembalikan angka menggunakan loop while */
    while(N > 0){
        digit = N % 10;         /* Ambil digit terakhir */
        reversed = reversed * 10 + digit;  /* Tambahkan digit ke reversed */
        N = N / 10;             /* Buang digit terakhir */
    }

    /* Cek apakah angka merupakan palindrom */
    if(original == reversed)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}