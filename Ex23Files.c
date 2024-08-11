#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000



int main()
{
    char veri[VERI_BOYUTU];
    char karakter;

    FILE * fPtr;

    /*fPtr = fopen("dosya1.txt", "w+");

    // fopen() eger basarisiz ise NULL doner.
    if (fPtr == NULL)
    {
        printf("Dosya olusturulamadi.\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Dosyaya kaydedilecek olan girdiyi al: /n");
    fgets(veri, VERI_BOYUTU, stdin);

    // veriyi dosyaya yaz.
    fputs(veri,fPtr);
    */
    fPtr = fopen("dosya1.txt", "r");

    if (fPtr == NULL)
    {
        printf("Dosya okunamadi\nDosyanin ilgili konumda olup olmadigini ve de erisim yetkiniz olup olmaigini kontrol ediniz.");
        exit(EXIT_FAILURE);

    }

    printf("Dosya basariyla acildi, icerigi okunuyor...\n\n");

    do
    {
        karakter = fgetc(fPtr); // Dosyadan bir karakter oku.
        putchar(karakter); // Dosyadan okudugun karakteri konsola yazdir.

    } while (karakter != EOF); // Bunu, EOF(End Of File) karakterine denk gelmedigin surece yap.  

    fclose(fPtr);


};