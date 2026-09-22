#include <stdio.h>
#include <string.h>

int main() {
    const int X = 2;

    char jenisCetakan[20];
    int waktu;

    for (int i = 1; i <= 5; i++) {
        printf("masukan jenis cetakan pelanggan ke-%d: ", i);
        scanf("%s", jenisCetakan);

        if (strcmp(jenisCetakan, "Draft") == 0) {
            waktu = 10;
        } else if (strcmp(jenisCetakan, "Final") == 0) {
            waktu = 20;
        }

        if (i == (X % 5)) {
            waktu = waktu + 5;
        }

        printf("Pelanggan ke-%d: dokumen selesai dalam %d menit\n", i, waktu);
    }

    return 0;
}