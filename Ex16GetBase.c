#include <stdio.h>

// math.h kullanmadan us alma fonk.


double UsAlma(double BaseSayi, double UsSayi);

int main()
{
    double BaseSayi;
    double UsSayi;

    printf("Ussunu almak istedigin sayiyi gir lan!  ");
    scanf("%lf", &BaseSayi);
    printf("Altini alma... saka saka, Ussu gir:  ");
    scanf("%lf", &UsSayi);

    UsAlma(BaseSayi, UsSayi);

    return 0;
}

double UsAlma(double BaseSayi, double UsSayi)
{
    double sonuc = 1.0;
    
    if (UsSayi < 0)
    {
        BaseSayi = 1/BaseSayi;
        UsSayi = -UsSayi;
    }
    

    for (int i = 0; i < UsSayi; i++)
    {
        sonuc *= BaseSayi; 
    }
    printf("Sonuc = %.1lf", sonuc);
}
