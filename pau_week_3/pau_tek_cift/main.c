/*
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan alınan bir sayının tek sayı mı, çift sayı mı oldugunu yazdıran program
 */

#include <stdio.h>

int main(void) {
    int number;
    printf("Bir sayı giriniz:\n");
    scanf("%d", &number);

    if(number%2==0) {
        printf("%d sayısını çifttir", number);
    } else if(number%2!=0) {
        printf("%d sayısı tektir.", number);
    }
    return 0;
}
