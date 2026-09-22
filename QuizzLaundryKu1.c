#include <stdio.h>

int main() {
    const int X = 2; 

    int beratKg;
    int tarif;
    int biayaDasar, biayaKantong, biayaTotal;

    printf("masukan berat cucian (kg): ");
    scanf("%d", &beratKg);

    if (beratKg <= 3) {
        tarif = 7000;
    } else if (beratKg > 3 && beratKg <= 6) {
        tarif = 6500;
    } else {
        tarif = 6000;
    }

    biayaDasar = beratKg * tarif;

    if (X % 2 == 0) {
        biayaKantong = 2000;
    } else {
        biayaKantong = 0;
    }

    biayaTotal = biayaDasar + biayaKantong;

    printf("Biaya total laundry = %d\n", biayaTotal);

    return 0;
}



