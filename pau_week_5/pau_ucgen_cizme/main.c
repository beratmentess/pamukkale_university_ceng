/**
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan bir adet n tamsayısı alan ve bu n değerine göre
 * ekrana a harflerinden oluşan ve sola dayalı bir
 * üçgen şekli çizdiren programı yazınız. Programın örnek
 * çalışması aşağıda verilmiştir:

   Girdi(n): 5
   Çıktı:
   a
   aa
   aaa
   aaaa
   aaaaa
 */
#include <stdio.h>

int main()
{
    int n;
    printf("Üçgenin yüksekliğini girin(n):");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("a");
        }
        printf("\n");
    }
    return 0;
}
