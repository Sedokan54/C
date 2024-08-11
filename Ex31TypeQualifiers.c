#include <stdio.h>

// Davranissal bir tanimlama belirtmemekte
// Derleyicinin, daha kontrollu ve optimum calismasi icin ipucu vermekte

void OrnekKullanim(int* a, int* b, int* restrict c)
{
    *a += *c;

    // c restrict oldugu icin, derleyici olusturacagi assembly koduna c degerini tekrar yuklemeyecek. Dolayisiyla assembly kod daha optimize ve hizli calismis olacak.

    *b += *c;
}

// volatile : volatile olarak tanimlanan degiskene her erisildiginde ,gidip herhangi bir kisayoldan bu degeri cekmeye calismayip, her seferinde ilgili adrese gider, en guncel degeri okur. Bu sekilde kod uretir.
// Neden volatile ?: Gomulu Yazilimlar, Multithread yazilimlar, Paylasimli bellek kullanan yazilimlar.
  