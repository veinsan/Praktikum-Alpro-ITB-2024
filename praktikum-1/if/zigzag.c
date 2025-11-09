#include <stdio.h>
#define MAX 100

int main(){
    int n;
    scanf("%d", &n);
    
    /* Jika n melebihi MAX, kita batasi n dengan MAX */
    if(n > MAX) {
        n = MAX;
    }
    
    int matrix[MAX][MAX];
    int counter = 1;
    int d, i, j;
    
    /* Mengisi matrix berdasarkan diagonal (d = i + j) */
    for(d = 0; d <= 2 * (n - 1); d++){
        int start, end;
        if(d < n){
            start = 0;
            end = d;
        } else {
            start = d - n + 1;
            end = n - 1;
        }
        for(i = start; i <= end; i++){
            j = d - i;
            matrix[i][j] = counter;
            counter++;
        }
    }
    
    /* Cetak matrix baris per baris dengan setiap angka dipisahkan oleh satu spasi */
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d", matrix[i][j]);
            if(j < n - 1)
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}