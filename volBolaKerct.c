#include <stdio.h>

int main () {
    int v0, t;
    float y;
    float g = 9.8;

    printf("Masukkan kecepatan awal (v0): ");
    scanf("d%", &v0);
    printf("Masukkan waktu (t): ");
    scanf("d%", &t);
    y = v0 * t - 0.5 * (g * t * t);

    printf("Jarak yang ditempuh: %f meter/n", y);

    return 0;
    }