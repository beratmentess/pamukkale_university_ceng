/**
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan anapara, oran ve gün sayısını alarak faizi hesaplayan
 * C programını yazınız. Faiz hesaplaması aşağıdaki formülle yapılır:
 *
 * faiz = anapara * oran * gun / 365
 * Örneğin:
 * anapara=1000.00
 * oran=0.1
 * gun=365
 * olduğunda,
 * faiz = 100.00 olur.
 * Faiz yazdırırken virgülden sonra iki basamak yazdırın.
 */


#include <stdio.h>

int main(void) {
    float principal,rate, interest;
    int day;
    printf("Anaparayı giriniz: \n", &principal);
    scanf("%f", &principal);
    printf("Oranı giriniz:\n", &rate);
    scanf("%f", &rate);
    printf("Gün sayısını giriniz: \n");
    scanf("%d", &day);

    interest = principal * rate * day / 365;

    printf("Faiz: %.2f\n", interest);

    return 0;
}
