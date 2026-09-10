#include <stdio.h>

int main() {
    float celcius, fahrenheit;

    printf("Masukkan suhu dalam derajat Celcius: ");
    scanf("%f", &celcius);

    // Rumus konversi Celcius ke Fahrenheit: F = (C * 9/5) + 32
    fahrenheit = (celcius * 9.0 / 5.0) + 32;

    printf("%.2f derajat Celcius = %.2f derajat Fahrenheit\n", celcius, fahrenheit);

    return 0;
}