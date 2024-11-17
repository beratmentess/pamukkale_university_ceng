/*
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan alınan iki sayıdan ilki digerinin katı mıdır, yazdıran program
 */

#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    printf("İki adet sayı giriniz:\n");

    scanf ("%d %d", &num1, &num2);

    if (num1%num2 == 0) {
        printf("%p sayısı %p sayısının katidir", &num1, &num2);

    } else {printf("%p sayısı %p sayısının katı değildir.", &num1, &num2); }
    return 0;
}
