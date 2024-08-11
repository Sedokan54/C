#include <stdio.h>

//enum numaralandirilmis tipler.

enum Seviyeler{
    DUSUK,
    ORTA,
    YUKSEK
};

// Kategorik bir degisken sinirli sayida bir deger aliyor

int main()
{
    
    enum Seviyeler Odasicakligi = DUSUK;

    printf("%d", Odasicakligi);


    return 0;

};