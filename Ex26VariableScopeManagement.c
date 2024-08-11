#include <stdio.h>
#include <stdlib.h>


//PART 2 : #DEFINE #UNDEF
#define BUYUK_SAYI 1000000 // satir sonunda ; yok.   global var. define : on islemci direktifi, pre proccessor directive

int BelirliIslemlerGerceklestir(int girdi)
{
    return (girdi < BUYUK_SAYI);
    //return (girdi < BASKA_BIR_BUYUK_SAYI); bu satir hata verir. Local var.
}


int main()
{
    //PART 1 : constants : sabitler : Degismeyen Degiskenler

    const int SaattekiDakikaSayisi = 60;
    const float PI = 3.14;

    printf("%d\n", SaattekiDakikaSayisi);
    printf("%f\n\n\n",PI);

    // PI = PI + 5; Bu satiri acarsak hata alacagiz.
    // Kodun neredeyse hicbir yerine salt sayi vb. yerlestirme. Bu sekilde tanimlayabiliriz.

    //PART 2 continues:

    int ilk_degisken = 20;
    int ikinci_degisken = 25;
    int sonuc1, sonuc2;
    const int BASKA_BIR_BUYUK_SAYI = 1000000;

    printf("Buyuk sayi : %d\n", BUYUK_SAYI);

    sonuc1 = (ilk_degisken < BUYUK_SAYI);
    printf("Sonuc 1 : %d\n",sonuc1);

    sonuc2 = (ikinci_degisken < BUYUK_SAYI);
    printf("Sonuc 2 : %d\n",sonuc2);

    #undef BUYUK_SAYI
    #define BUYUK_SAYI 3000000
    printf("Buyuk sayi : %d\n", BUYUK_SAYI);



    return 0;
};