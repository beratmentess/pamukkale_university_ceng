/**
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan bir ondalıklı sayı(x) ve tamsayı kuvvet değeri(y)
 * alan ve x^y değerini hesaplayan programı yazınız. Sonucu
 * yazdırırken virgülden sonra iki basamak yazdırın.
 */


#include <math.h>
#include <stdio.h>

int main(void)
{
    float num1, num2 , num3;
    printf("Taban sayısını giriniz: \n ");
    scanf("%f", &num1);
    printf("Üs sayısını giriniz\n");
    scanf("%f", &num2);

    num3 = powf(num1, num2);
    printf("%f^%f = %.2f\n", num1, num2, num3);

    return 0;
}
