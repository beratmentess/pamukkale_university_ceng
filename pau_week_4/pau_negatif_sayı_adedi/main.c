/**
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan alınacak 15 adet sayıdan kaç tanesinin negatif
 * olduğunu ekrana yazdıran C programını yazın.
 */

#include <stdio.h>

int main(void)
{
    int num, negativeNumber;

    for(int i= 0; i< 15; i++) {
        printf("Bir sayı giriniz: \n");
        scanf("%d", &num);
    }

    if(num < 0) {
        negativeNumber++;
    }

    printf("Negatif sayı adedi: ½d\n", negativeNumber);
    return 0;
}
