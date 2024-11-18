/*
 * Mahir Berat Menteş
 * Pamukkale Üniversitesi
 * switch ile harf notlarını saymak
 */

#include <stdio.h>

int main(void) {
    int aNum = 0;
    int bNum = 0;
    int cNum = 0;
    int dNum = 0;
    int fNum = 0;

    puts("Harf notlarını girin.");
    puts("Girdiyi sonlandırmak için EOF Karakterini (Ctrl+d FOR LINUX, macOS, UNIX ; CTRL + Z FOR WINDOWS ) girin.\n");

    int grade = 0;
    while (1) {
        grade = getchar();


        if (grade == 'X' || grade == 'x') {
            break;
        }
        switch (grade){

            case 'A':
                case 'a':
                    aNum++;
            break;
            case 'B':
            case 'b':
                bNum++;
            break;
            case 'C':
            case 'c':
                cNum++;
            break;
            case 'D':
            case 'd':
                dNum++;
            break;
            case 'F':
            case 'f':
                fNum++;
            break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                printf("%s", "Hatalı not girildi.\n");
            puts("Yeni not girin");
            break;
        }
    }
    puts("\nHer not için toplamlar: ");
    printf("A: %d\n", aNum);
    printf("B: %d\n", bNum);
    printf("C: %d\n", cNum);
    printf("D: %d\n", dNum);
    printf("F: %d\n", fNum);
return 0;
    }

