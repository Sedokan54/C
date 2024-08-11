#include <stdio.h>



int main()
{
    // Degisken Beyanlari (Deklerasyonlar) (Declarations)

    char karakter = 'C';
    int tamsayi = 1;
    float gercel_sayi = 10.4f;
    long long buyuk_tamsayi = 98989898ll;

    /* Ampersand (and per se and)(&) olarak anilan & isareti ile herhangi bir 
    degiskenin bellekteki adresi alinabilir.*/
    
    /*print variable value with their memory adress. */

    printf("karakter degiskeninin degeri= %c, karakter degiskeninin adresi= %u\n",karakter, &karakter);
    printf("tamsayi degiskeninin degeri= %d, tamsayi degiskeninin adresi= %u\n",tamsayi, &tamsayi);
    printf("gercel_sayi degiskeninin degeri= %f, gercel_sayi degiskeninin adresi= %u\n",gercel_sayi, &gercel_sayi);
    printf("buyuk_tamsayi degiskeninin degeri= %lld, buyuk_tamsayi degiskeninin adresi= %u\n\n\n",buyuk_tamsayi, &buyuk_tamsayi);

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int sayi = 10;
    int * isaretci;

    // sayi degiskeninin adresi, isareti isimli isaretci (pointer) tipi degisken tarafindan tutulacak.

    isaretci = &sayi;

    printf("sayi degiskeninin adresi = %d\n", &sayi);
    printf("sayi degiskeninin icerigi = %d\n", sayi);
    
    printf("isaretci degiskeninin adresi= %d\n", &isaretci);
    printf("isaretci degiskeninin icerigi= %d\n", isaretci);
    printf("isaretci degiskeninin isaret ettigi deger= %d\n\n\n", *isaretci);

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int sayi1, sayi2, toplam;
    int *isaretci1, *isaretci2; // integer'a point eden pointer'lar

    isaretci1 = &sayi1; // isaretci 1, sayi1'in bellekteki adresini tutmakta
    isaretci2 = &sayi2; // isaretci 2, sayi2'in bellekteki adresini tutmakta

    printf("Iki sayi giriniz: \n");
    scanf("%d%d",isaretci1, isaretci2); //scanf kullanimina dikkat!

    toplam = *isaretci1 + *isaretci2;
    printf("Toplam = %d", toplam);

    return 0;

};