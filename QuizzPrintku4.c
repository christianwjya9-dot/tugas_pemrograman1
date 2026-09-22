#include <stdio.h>

int main() {
    const int X = 2;

    int jumlahTransaksi;
    float biayaAwal, biayaSetelahDiskon, biayaAkhir;
    int persenDiskon;

    for (int i = 1; i <= 6; i++) {
        printf("masukan jumlah transaksi pelanggan ke-%d: ", i);
        scanf("%d", &jumlahTransaksi);
        printf("masukan biaya awal pelanggan ke-%d: ", i);
        scanf("%f", &biayaAwal);

        if (jumlahTransaksi <= 3) {
            persenDiskon = 0;
        } else if (jumlahTransaksi > 3 && jumlahTransaksi <= 6) {
            persenDiskon = 5;
        } else {
            persenDiskon = 10;
        }

        biayaSetelahDiskon = biayaAwal - (biayaAwal * persenDiskon / 100);

        if (X % 2 == 0) {
            biayaAkhir = biayaSetelahDiskon - 1000;
        } else {
            biayaAkhir = biayaSetelahDiskon;
        }

        printf("Pelanggan ke-%d: biaya akhir = %.2f\n", i, biayaAkhir);
    }

    return 0;
}