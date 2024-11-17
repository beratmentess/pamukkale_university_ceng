/*
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan alınan bes basamaklı bir sayının basamaklarını alt alta yazdıran program
 * ---------------------------------------------------------------
 * Kullanıcının bes basamaklı bir sayı girecegi varsayılacaktır, alınan sayının
 * bes basamaklı olup olmadıgının kontrolünü yapmanız istenmemektedir
 */

#include <stdio.h>

int main(void) {
    int num;
    printf("5  basamaklı bir sayı giriniz: ");
    scanf("%d", &num);
    printf("%d\n", num / 10000);
    printf("%d\n", (num / 1000) %10);
    printf("%d\n", (num / 100) %10);
    printf("%d\n", (num / 10) % 10);
    printf("%d\n", num % 10);


    return 0;
}
