#include <stdio.h>

// Function prototype
float hitung_asuransi(int jenis, float nilai, float luas);
void tampil_menu();
void cetak_jenis(int jenis);
void cetak_slip();

// Global variable
char nama[50];
int jumlah = 0;
int jenis1 = 0, jenis2 = 0, jenis3 = 0;
float biaya1 = 0, biaya2 = 0, biaya3 = 0;
float total = 0;

int main()
{
    float nilai, luas;

    printf("Nama petani: ");
    scanf(" %[^\n]", nama);

    do
    {
        printf("Jumlah jenis ladang (1-3): ");
        scanf("%d", &jumlah);
    } while (jumlah < 1 || jumlah > 3);

    // Ladang 1
    tampil_menu();
    printf("Jenis ladang 1: ");
    scanf("%d", &jenis1);
    printf("Nilai tanggungan per hektar: ");
    scanf("%f", &nilai);
    printf("Luas ladang (hektar): ");
    scanf("%f", &luas);
    biaya1 = hitung_asuransi(jenis1, nilai, luas);

    // Ladang 2
    if (jumlah >= 2)
    {
        tampil_menu();
        printf("Jenis ladang 2: ");
        scanf("%d", &jenis2);
        printf("Nilai tanggungan per hektar: ");
        scanf("%f", &nilai);
        printf("Luas ladang (hektar): ");
        scanf("%f", &luas);
        biaya2 = hitung_asuransi(jenis2, nilai, luas);
    }

    // Ladang 3
    if (jumlah == 3)
    {
        tampil_menu();
        printf("Jenis ladang 3: ");
        scanf("%d", &jenis3);
        printf("Nilai tanggungan per hektar: ");
        scanf("%f", &nilai);
        printf("Luas ladang (hektar): ");
        scanf("%f", &luas);
        biaya3 = hitung_asuransi(jenis3, nilai, luas);
    }

    total = biaya1 + biaya2 + biaya3;

    cetak_slip();

    return 0;
}

// a. Fungsi menghitung biaya asuransi tiap jenis ladang
float hitung_asuransi(int jenis, float nilai, float luas)
{
    float standar = 0.035 * nilai * luas;
    float biaya;

    if (jenis >= 1 && jenis <= 4)
    {
        biaya = 2 * standar;
    }
    else if (jenis >= 5 && jenis <= 7)
    {
        biaya = 1.5 * standar;
    }
    else
    {
        biaya = standar;
    }

    return biaya;
}

// Menampilkan pilihan jenis ladang
void tampil_menu()
{
    printf("\nPilihan jenis ladang:\n");
    printf("1. Kacang kedelai   5. Padi\n");
    printf("2. Kentang          6. Singkong\n");
    printf("3. Bawang merah     7. Jagung\n");
    printf("4. Cabai            8. Lainnya\n");
}

// Mencetak nama jenis ladang
void cetak_jenis(int jenis)
{
    switch (jenis)
    {
        case 1: printf("Kacang kedelai"); break;
        case 2: printf("Kentang"); break;
        case 3: printf("Bawang merah"); break;
        case 4: printf("Cabai"); break;
        case 5: printf("Padi"); break;
        case 6: printf("Singkong"); break;
        case 7: printf("Jagung"); break;
        default: printf("Lainnya");
    }
}

// b. Fungsi mencetak slip pembayaran
void cetak_slip()
{
    printf("\n===== SLIP PEMBAYARAN ASURANSI =====\n");
    printf("Nama petani : %s\n", nama);

    printf("Ladang 1    : ");
    cetak_jenis(jenis1);
    printf(" = Rp %.0f\n", biaya1);

    if (jumlah >= 2)
    {
        printf("Ladang 2    : ");
        cetak_jenis(jenis2);
        printf(" = Rp %.0f\n", biaya2);
    }

    if (jumlah == 3)
    {
        printf("Ladang 3    : ");
        cetak_jenis(jenis3);
        printf(" = Rp %.0f\n", biaya3);
    }

    printf("------------------------------------\n");
    printf("Total       : Rp %.0f\n", total);
}