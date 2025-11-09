#include <stdio.h>
#include <math.h>

double suhu(double nilai, char dari, char ke) {
    if (dari == 'C' && ke == 'F') {
        return (nilai * 9.0 / 5.0) + 32.0;
    } else if (dari == 'C' && ke == 'K') {
        return nilai + 273.15;
    } else if (dari == 'F' && ke == 'C') {
        return (nilai - 32.0) * 5.0 / 9.0;
    } else if (dari == 'F' && ke == 'K') {
        return (nilai - 32.0) * 5.0 / 9.0 + 273.15;
    } else if (dari == 'K' && ke == 'C') {
        return nilai - 273.15;
    } else if (dari == 'K' && ke == 'F') {
        return (nilai - 273.15) * 9.0 / 5.0 + 32.0;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        double nilai;
        char dari, ke;
        scanf("%lf %c %c", &nilai, &dari, &ke);

        double hasil = floor(suhu(nilai, dari, ke));
        printf("%.2f\n", hasil);
    }

    return 0;
}