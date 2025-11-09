#include <stdio.h>
const float pi = 3.1415;

int main(){
    float luas, r;
    scanf ("%f", &r);
    luas  = pi * r * r;
    printf ("%f\n", luas);
    return 0;
}