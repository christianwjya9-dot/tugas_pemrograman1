#include <stdio.h>

int main()
{
    //  SOAL 1: Deret Fibonacci 
    printf("Soal 1\n");
    {
        int a = 1, b = 1;
        for (int i = 1; i <= 8; i++)
        {
            printf("%d  ", a);
            int berikutnya = a + b;
            a = b;
            b = berikutnya;
        }
        printf("\n\n");
    }

    //  SOAL 2: Segitiga Huruf 
    printf("Soal 2\n");
    {
        int tinggi = 4;
        char huruf = 'A';
        for (int i = 1; i <= tinggi; i++)
        {
            for (int s = 1; s <= tinggi - i; s++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", huruf);
                huruf++;
            }
            printf("\n");
        }
        printf("\n");
    }

    //  SOAL 3: Jam Pasir Bintang 
    printf("Soal 3\n");
    {
        int n = 5;
        for (int i = 0; i <= n / 2; i++)
        {
            for (int s = 1; s <= i; s++)
            {
                printf(" ");
            }
            for (int j = 1; j <= n - 2 * i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (int i = n / 2 - 1; i >= 0; i--)
        {
            for (int s = 1; s <= i; s++)
            {
                printf(" ");
            }
            for (int j = 1; j <= n - 2 * i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }

    //  SOAL 4: Bintang dan Angka 
    printf("Soal 4\n");
    {
        int a = 7, selisihA = 8, tambahA = 4;
        int b = 10, selisihB = 8;
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 6 - i; j++)
            {
                printf("*");
            }
            printf("%d %d\n", a, b);

            a += selisihA;
            selisihA += tambahA;
            tambahA--;

            b += selisihB;
            selisihB -= 2;
        }
        printf("\n");
    }

    //  SOAL 5: Segitiga Pascal 
    printf("Soal 5\n");
    {
        int n = 5;
        for (int i = 0; i < n; i++)
        {
            for (int s = 1; s <= (n - 1 - i) * 2; s++)
            {
                printf(" ");
            }
            int c = 1;
            for (int k = 0; k <= i; k++)
            {
                printf("%-4d", c);
                c = c * (i - k) / (k + 1);
            }
            printf("\n");
        }
    }

    //  BONUS: Pola Zig-zag
    printf("\nBonus\n");
    {
        int baris = 4, kolom = 5;
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                int nilai;
                if (i % 2 == 0)
                {
                    nilai = i * kolom + j + 1;
                }
                else
                {
                    nilai = i * kolom + (kolom - j);
                }
                printf("%2d ", nilai);
            }
            printf("\n");
        }
    }

    return 0;
}