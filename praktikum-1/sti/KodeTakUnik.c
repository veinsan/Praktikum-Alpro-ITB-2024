#include <stdio.h>

int main(){
    long Kode;
    scanf("%ld", &Kode);
    while (Kode >= 10) {
        long total = 0;
        while (Kode > 0) {
            total += Kode % 10;
            Kode /= 10;
        }
        Kode = total;
    }
    printf("%ld\n", Kode);
    return 0;
}