/*
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan üç adet sayı alan ve bu sayıları azalan sırada yazdıran program
 */

#include <stdio.h>

int main(void) {
    float num1, num2, num3, max, middle, min;
    printf("Lütfen 3 adet sayı giriniz\n");
    scanf("%f%f%f", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        max = num1;
        if (num2 >= num3) {
            middle = num2;
            min = num3;
        } else {
            middle = num3;
            min = num2;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
        if (num1 >= num3) {
            middle = num1;
            min = num3;
        } else {
            middle = num3;
            min = num1;
        }
    } else {
        max = num3;
        if (num1 >= num2) {
            middle = num1;
            min = num2;
        } else {
            middle = num2;
            min = num1;
        }
    }

    printf("%.2f > %.2f > %.2f\n", max, middle, min);
    return 0;
}
