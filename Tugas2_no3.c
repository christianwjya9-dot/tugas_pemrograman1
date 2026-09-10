#include <stdio.h>

int main() {
    float subtotal;
    float pajak, biaya_layanan, total_tagihan;

    const float PERSEN_PAJAK = 0.11;          // Pajak pemerintah 11%
    const float PERSEN_BIAYA_LAYANAN = 0.05;  // Biaya layanan 5%

    printf("Masukkan subtotal pesanan: Rp ");
    scanf("%f", &subtotal);

    pajak = subtotal * PERSEN_PAJAK;
    biaya_layanan = subtotal * PERSEN_BIAYA_LAYANAN;
    total_tagihan = subtotal + pajak + biaya_layanan;

    printf("\n--- Rincian Tagihan ---\n");
    printf("Subtotal          : Rp%.2f\n", subtotal);
    printf("Pajak (11%%)       : Rp%.2f\n", pajak);
    printf("Biaya Layanan (5%%): Rp%.2f\n", biaya_layanan);
    printf("Total Tagihan     : Rp%.2f\n", total_tagihan);

    return 0;
}