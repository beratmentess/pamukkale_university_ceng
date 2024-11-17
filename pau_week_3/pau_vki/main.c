/*
 *Mahir Berat Menteş
 *Pamukkale Üniversitesi
 *Vücut kitle indeksi, agırlıgın(kg) boyun(m) karesine bölünmesi ile elde edilir(a/b*b).
 *Kullanıcıdan kilo ve boyu alan ve asagıdaki degerlere göre kilo durumunu yazdıran program
 *18.5’den küçük: Zayıf
 *18.5 ile 24.99 arası: Normal kilolu
 *25 ile 29.99 arası: Fazla kilolu
 *30 üzeri: Obez
 */

#include <stdio.h>

int main(void) {
    float i, weight, height;
    printf("Boyunuzu metre cinsinden giriniz: \n");
    scanf("%f", &height);

    printf("Kilonuzu kilogram cinsinden giriniz: \n");
    scanf("%f", &weight);

    i = weight / (height * height);

    printf(" Vücut kitle indeksiniz: %.2f \n", i);

    if (i < 18.5) {
        printf("Zayıf\n");
    } else if(i > 18.5 && i < 24.99) {
        printf("Normal Kilolu \n");
    } else if(i > 25 && i < 29.99) {
        printf("Fazla Kilolu \n");
    } else if(i > 30) {
        printf("Obez \n");
    }


    return 0;
}
