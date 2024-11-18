/**
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan beş adet tamsayı alacak ve bu sayıların
 * değerlerine göre yatay eksende çubuk grafik çizdirecek
 * programı yazınız. Her satırda, alınan değer kadar 'a'
 * karakteri basılması gerekmektedir. Programın örnek
 * çalışması aşağıda verilmiştir:
 *
 * Girdi: 5 3 2 0 7
 * Çıktı:
 * aaaaa
 * aaa
 * aa
 *
 * aaaaaaa
 */


#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5;

    printf("5 adet sayı giriniz: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    // Girilen her sayı için çubuk grafik çiz
    int values[] = {n1, n2, n3, n4, n5}; // Sayıları diziye al
    for (int i = 0; i < 5; i++) { // 5 sayıyı tek tek işle
        for (int j = 0; j < values[i]; j++) {
            printf("a"); // Değer kadar 'a' yazdır
        }
        printf("\n"); // Her sayıdan sonra yeni satıra geç
    }

    return 0;
}