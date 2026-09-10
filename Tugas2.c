#include <stdio.h>

int main() {
    int jam_kerja[7];
    float upah_per_jam;
    float upah_harian;
    float total_upah_minggu = 0;
    char *nama_hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};

    printf("Masukkan upah per jam: Rp ");
    scanf("%f", &upah_per_jam);

    // Input jam kerja untuk setiap hari dalam 1 minggu
    for (int i = 0; i < 7; i++) {
        printf("Masukkan jam kerja hari %s: ", nama_hari[i]);
        scanf("%d", &jam_kerja[i]);
    }

    printf("\n--- Rincian Upah Harian ---\n");
    for (int i = 0; i < 7; i++) {
        upah_harian = jam_kerja[i] * upah_per_jam;
        total_upah_minggu += upah_harian;
        printf("%-7s : %d jam x Rp%.2f = Rp%.2f\n", nama_hari[i], jam_kerja[i], upah_per_jam, upah_harian);
    }

    printf("\nTotal upah pegawai selama 1 minggu: Rp%.2f\n", total_upah_minggu);

    return 0;
}
