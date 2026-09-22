#include <stdio.h>
#include <string.h>

int main() {
    const int X = 2;

    char jenisLayanan[20];
    int hari;

    for (int i = 1; i <= 5; i++) {
        printf("masukan jenis layanan pelanggan ke-%d: ", i);
        scanf("%s", jenisLayanan);

        if (strcmp(jenisLayanan, "Reguler") == 0) {
            hari = 2;
        } else if (strcmp(jenisLayanan, "Express") == 0) {
            hari = 1;
        }

        if (i == (X % 5)) {
            hari = hari + 1;
        }

        printf("Pelanggan ke-%d dapat diambil dalam %d hari\n", i, hari);
    }

    return 0;
}