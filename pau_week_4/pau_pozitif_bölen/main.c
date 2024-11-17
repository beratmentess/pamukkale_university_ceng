
/**
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan alınacak pozitif tamsayının kendisinden küçük
 * kaç tane tam böleni olduğunu yazdıran C programını yazınız.
 * Örneğin 8 sayısının tam bölen sayısı 3 olacaktır(1,2,4)
 */
#include <stdio.h>

int main(void)
{
    int num, count =0;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Geçersiz Sayı! Lütfen pozitif bir tam sayı giriniz.");
        }
    }while (num <= 0);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
        printf("%d sayısının kendisinden küçük %d tam böleni vardır.\n", num, count);
    return 0;
}
