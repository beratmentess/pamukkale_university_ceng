/*
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Bileşik Faiz Hesabı uygulaması
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal ;
    double rate ;

    printf("Anaparayı giriniz: \n", principal);
    scanf("%lf", &principal);

    printf("Yıllık oranı giriniz: \n");
    scanf("%lf", &rate);


    printf("%4s%21s\n", "Yıl", "Bankadaki miktar");

    for(int year = 1; year <=10; ++year) {
        double amount = principal * pow(1.0 + rate, year);
        printf("%4d%21.2f\n", year, amount);
    }

    return 0;
}
