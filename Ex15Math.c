//Klavyeden girilen derecenin sinüs’ü alınıp, 10 ile çarpan, ardından 90 dereceden çıkaran bir alt program (fonksiyon) yazalım
//Verilen sayidan 1e kadar toplayan fonk
#include <stdio.h>
#include <math.h>
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

double SinusAl(int derece)
{
    printf("derece gir: "); 
    scanf("%d", &derece);
    //radyan al
    double radyan = derece * M_PI / 180;
    double sonuc = sin(radyan) * 10.0;
    sonuc = 90.0 - sonuc;
    printf("Sonuc = %lf", sonuc);
}

int ToplaAzalan(int sayi)
{   
    int sonuc;
    for (int i = sayi; i > 0; i--)
    {  
        sonuc += i;
    }
    printf("Sonuc = %d", sonuc);

}

int FaktoriyelAl(int sayi)
{
    int sonuc = 1;
    for (int i = sayi; i > 0; i--)
    {
        sonuc *= i;
    }
    printf("Sonuc: %d", sonuc);
    
}





int main()
{
    int BaslangicSayisi;
    printf("Sayi girin: "); 
    scanf("%d",&BaslangicSayisi);
    //ToplaAzalan(BaslangicSayisi);
    //FaktoriyelAl(BaslangicSayisi);

 
    return 0;
}