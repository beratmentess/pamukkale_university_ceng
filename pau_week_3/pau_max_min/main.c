/*
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan alınan üç değerden en küçüğünü ve en büyüğünü ekrana yazdıran program
 */

#include <stdio.h>

int main(void) {
    float num1, num2, num3;
    printf("Üç adet sayı giriniz: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    float max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    float min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }



    printf("En büyük sayı: %.2lf\n En küçük sayı: %.2lf\n", max, min);

    return 0;
}
