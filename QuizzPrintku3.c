#include <stdio.h>

int main() {
    const int X = 2;

    int totalBiayaPenitipan = 0;
    int batasToleransi;
    int hariDiambil, keterlambatan, biaya;

    if (X == 0 || X == 6 || X == 7 || X == 8 || X == 9) {
        batasToleransi = 3;
    } else {
        batasToleransi = 2;
    }

    for (int i = 1; i <= 7; i++) {
        printf("masukan hari pengambilan pelanggan ke-%d: ", i);
        scanf("%d", &hariDiambil);

        if (hariDiambil > batasToleransi) {
            keterlambatan = hariDiambil - batasToleransi;
            biaya = keterlambatan * 2000;
        } else {
            biaya = 0;
        }

        totalBiayaPenitipan = totalBiayaPenitipan + biaya;
    }

    printf("Total biaya penitipan seluruh pelanggan = %d\n", totalBiayaPenitipan);

    return 0;
}