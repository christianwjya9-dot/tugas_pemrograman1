//nomor 1

#include <stdio.h>

int main() {
    int n, angka;

    scanf("%d", &n);

    angka = n;
    for (int i = 1; i <= n; i++) {
        printf("%d ", angka);
        angka = angka + n;
    }

    return 0;
}

//nomor 2

#include <stdio.h>

int main() {
    int pinBenar = 123456;
    int pinInput;
    int salah = 0;

    while (salah < 3) {
        printf("Masukkan PIN: ");
        scanf("%d", &pinInput);

        if (pinInput == pinBenar) {
            printf("PIN benar. Selamat datang!\n");
            return 0;
        } else {
            salah++;
            printf("PIN salah (%d/3)\n", salah);
        }
    }

    printf("Kartu Anda Diblokir\n");
    return 0;
}

//nomor 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rahasia, tebakan;

    srand(time(NULL));
    rahasia = rand() % 20 + 1;

    do {
        printf("Tebak angka (1-20), 99 untuk menyerah: ");
        scanf("%d", &tebakan);

        if (tebakan == 99) {
            printf("Kamu menyerah. Angkanya: %d\n", rahasia);
            break;
        } else if (tebakan < rahasia) {
            printf("lebih tinggi\n");
        } else if (tebakan > rahasia) {
            printf("lebih rendah\n");
        } else {
            printf("cocok\n");
        }
    } while (tebakan != rahasia);

    return 0;
}

//nomor 4

#include <stdio.h>

int main() {
    int n;
    char c1, c2;

    printf("Masukkan n: ");
    scanf("%d", &n);
    printf("Karakter baris ganjil: ");
    scanf(" %c", &c1);
    printf("Karakter baris genap: ");
    scanf(" %c", &c2);

    for (int baris = 1; baris <= n; baris++) {
        for (int kolom = 1; kolom <= n; kolom++) {
            if (baris % 2 == 1) {
                printf("%c ", c1);
            } else {
                printf("%c ", c2);
            }
        }
        printf("\n");
    }

    return 0;
}

//nomor 5

#include <stdio.h>

int main() {
    int harga[5] = {15678, 18910, 23456, 21234, 24998};
    int pilihan[3];
    int jumlah = 0;
    int total = 0;
    int menu;

    printf("=== DAFTAR PRODUK ===\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. Produk %d - Rp%d\n", i + 1, i + 1, harga[i]);
    }
    printf("6. Selesai\n");

    while (jumlah < 3 && total < 50000) {
        printf("Pilih (1-6): ");
        scanf("%d", &menu);

        if (menu == 6) {
            break;
        } else if (menu >= 1 && menu <= 5) {
            pilihan[jumlah] = menu;
            jumlah++;
            total = total + harga[menu - 1];
        } else {
            printf("Pilihan tidak valid!\n");
        }
    }

    printf("\n=== PRODUK YANG DIPILIH ===\n");
    for (int i = 0; i < jumlah; i++) {
        printf("- Produk %d : Rp%d\n", pilihan[i], harga[pilihan[i] - 1]);
    }
    printf("Total tagihan: Rp%d\n", total);

    return 0;
}