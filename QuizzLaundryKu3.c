#include <stdio.h>

int main() {
    const int X = 2;

    int totalDenda = 0;
    int batasToleransi;
    int hariDiambil, keterlambatan, denda;

    if (X == 0 || X == 6 || X == 7 || X == 8 || X == 9) {
        batasToleransi = 4;
    } else {
        batasToleransi = 3;
    }

    for (int i = 1; i <= 7; i++) {
        printf("masukan hari pengambilan pelanggan ke-%d: ", i);
        scanf("%d", &hariDiambil);

        if (hariDiambil > batasToleransi) {
            keterlambatan = hariDiambil - batasToleransi;
            denda = keterlambatan * 1000;
        } else {
            denda = 0;
        }

        totalDenda = totalDenda + denda;
    }

    printf("Total denda seluruh pelanggan = %d\n", totalDenda);

    return 0;
}