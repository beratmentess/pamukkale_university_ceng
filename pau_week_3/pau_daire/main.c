/*
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Yarıçap(r) degerini kullanıcıdan alarak, dairenin çevresini, alanını ve çapını yazdıran program
 * Pi sayısı tanımı için double pi = 3.141592; kullanılabilir.
 * Pi sayısı tanım için const float = 3.141592; kullanılabilir.
 * Yazdırma islemi için printf("%lf", pi); kullanılabilir.
 */

#include <stdio.h>

int main(void) {
    float radius, diameter = 0, area = 0, circumference = 0;
    const float pi = 3.141592f;
    printf("Lütfen yarıçap değerini giriniz: \n");
    scanf("%f", &radius);
    circumference = 2 * pi * radius ;
    area = pi * radius * radius;
    diameter = 2 * radius;
    printf("Dairenin yarıçapı: %f\n", radius);
    printf("Dairenin çapı: %f\n", diameter);
    printf("Dairenin çevresi: %f\n", circumference);
    printf("Dairenin alanı : %f\n", area);


    return 0;
}
