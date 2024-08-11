#include <stdio.h>

/*  Global degiskenler, eger programci tarafindan belirtilmezse derleyici tarafindan otomatik olarak ilklendirilir.
    Global degiskenler main disinda beyan etmek gerekir.
    
Veri Tipi   Varsayilan Ilklendirme Degeri   (ilk icerik derleyici tarafindan atilir eger programci atamazsa)
int                     0
char                   '\0'
float                   0
double                  0
pointer                 NULL
*/

/* global degisken beyani (deklerasyonu)*/
int g_degisken1;  // global degiskenlere g ile baslayarak isimlendir yandaki gibi.

int main()
{
    /* lokal degisken beyani (deklerasyonu) */

    int a,b;

    /* 
    Lokal degiskenler, eger programci tarafindan belirtilmezse derleyici tarafindan otomatik olarak ilklendirilMEZ.
    Bilgisayar belleginde kalan garip/tuhaf degerleri almamalari icin programcilar tarafindan ilklendirilmelerinde fayda bulunur.
    */

    /* Ilklendirme */

    a = 10;
    b = 20;
    g_degisken1 = a + b;

    return 0;


};