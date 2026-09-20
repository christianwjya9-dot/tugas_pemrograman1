#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nomor = 1;
    int skor = 0;
    int benar = 0;
    int salah = 0;

    int maks, poin;
    int a, b, op, hasil;
    int jawaban, status, c;
    int tukar, q;
    char simbol;

    srand(time(0));

    printf("=== GAME HITUNG ===\n");
    printf("Jawab 30 soal. Salah 3 kali = game over.\n");
    printf("Untuk pembagian, jawab dengan bilangan bulat.\n\n");

    while (nomor <= 30)
    {
        if (nomor <= 10)
        {
            maks = 10;
            poin = 5;
        }
        else if (nomor <= 20)
        {
            maks = 30;
            poin = 10;
        }
        else
        {
            maks = 60;
            poin = 15;
        }

        a = rand() % maks + 1;
        b = rand() % maks + 1;
        op = rand() % 4;

        if (op == 0)
        {
            simbol = '+';
            hasil = a + b;
        }
        else if (op == 1)
        {
            simbol = '-';
            if (a < b)
            {
                tukar = a;
                a = b;
                b = tukar;
            }
            hasil = a - b;
        }
        else if (op == 2)
        {
            simbol = 'x';
            hasil = a * b;
        }
        else
        {
            simbol = '/';
            q = rand() % (maks / b) + 1;
            a = b * q;
            hasil = q;
        }

        printf("Soal %d/30  [Skor: %d | Sisa nyawa: %d]\n", nomor, skor, 3 - salah);

        do
        {
            printf("  %d %c %d = ", a, simbol, b);
            status = scanf("%d", &jawaban);
            if (status == EOF)
            {
                return 0;
            }
            if (status != 1)
            {
                while ((c = getchar()) != '\n' && c != EOF);
                printf("  Masukkan angka yang valid!\n");
            }
        } while (status != 1);

        if (jawaban == hasil)
        {
            skor = skor + poin;
            benar++;
            printf("  Benar! +%d\n\n", poin);
        }
        else
        {
            salah++;
            printf("  Salah! Jawaban yang benar: %d\n\n", hasil);
            if (salah == 3)
            {
                break;
            }
        }

        nomor++;
    }

    if (salah == 3)
    {
        printf("*** GAME OVER: kamu sudah salah 3 kali ***\n");
    }
    else
    {
        printf("*** GAME SELESAI! ***\n");
    }

    printf("\n=== HASIL AKHIR ===\n");
    printf("Benar      : %d\n", benar);
    printf("Salah      : %d\n", salah);
    printf("Skor akhir : %d (maks 300)\n", skor);

    return 0;
}