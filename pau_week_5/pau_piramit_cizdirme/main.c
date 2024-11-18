/**
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * Kullanıcıdan bir adet n tamsayısı alan ve bu n değerine göre
 * ekrana a harflerinden oluşan bir piramit şekli çizdiren
 * programı yazınız. Programın örnek çalışması aşağıda verilmiştir:

   Girdi(n): 5
   Çıktı:
       aa
      aaaa
     aaaaaa
    aaaaaaaa
   aaaaaaaaaa
 */



#include <stdio.h>



#include <stdio.h>

int main() {
    int n;
    printf("Piramit yüksekliğini girin (n): ");
    scanf("%d", &n);

    int total_width = 2 * n; // Piramit genişliği

    for (int i = 1; i <= n; i++) {
        int charNum = 2 * i; // O satırdaki "a" sayısı
        int spaceNum = (total_width - charNum) / 2; // Her iki tarafa eşit boşluk

        // Boşluklar
        for (int j = 1; j <= spaceNum; j++) {
            printf(" ");
        }
        // Karakterler
        for (int j = 1; j <= charNum; j++) {
            printf("a");
        }
        // Yeni satıra geç
        printf("\n");
    }

    return 0;
}
