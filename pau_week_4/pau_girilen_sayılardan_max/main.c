/**
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan [-100,100] aralığında alınan 10 tane tamsayının en
 * büyüğünü ekrana yazdıran C programını yazınız.
 */

#include <stdio.h>

int main(void) {
    int num, largest, i;

    do {
        printf("-100 ile 100 aralığında bir sayi giriniz: ");
        scanf("%d", &num);

        if (num < -100 || num > 100) {
            printf("Geçersiz sayı! Lütfen [-100, 100] aralığında bir sayı girin: ");
        }
    } while (num < -100 || num > 100);

    largest = num;

    i = 1;
    while (i < 10) {
        printf("-100 ile 100 aralığında bir sayi giriniz: ");
        scanf("%d", &num);

        if (num < -100 || num > 100) {
            printf("Geçersiz sayı! Lütfen [-100, 100] aralığında bir sayı girin: ");
            continue;
        }

        if (num > largest) {
            largest = num;
        }
        i++;
    }
    printf("Girilen sayılardan en büyüğü: %d\n", largest);

    return 0;
}