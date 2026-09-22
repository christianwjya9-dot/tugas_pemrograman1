#include <stdio.h>

int main() {
    const int X = 2;

    int jumlahHalaman;
    int tarif;
    int biayaDasar, biayaJilid, biayaTotal;

    printf("masukan jumlah halaman: ");
    scanf("%d", &jumlahHalaman);

    if (jumlahHalaman <= 20) {
        tarif = 500;
    } else if (jumlahHalaman > 20 && jumlahHalaman <= 50) {
        tarif = 400;
    } else {
        tarif = 350;
    }

    biayaDasar = jumlahHalaman * tarif;

    if (X % 2 == 0) {
        biayaJilid = 1500;
    } else {
        biayaJilid = 0;
    }

    biayaTotal = biayaDasar + biayaJilid;

    printf("Biaya cetak total = %d\n", biayaTotal);

    return 0;
}