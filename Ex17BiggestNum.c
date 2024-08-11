/*#include <stdio.h>
//bir dizideki en büyük elemanı bulan bir fonksiyon yaz

int EnBuyukAllah(int dizi[], int size);

int main()
{
    int dizi[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(dizi)/sizeof(dizi[0]);
    EnBuyukAllah(dizi,size);
    return 0;
}

int EnBuyukAllah(int dizi[], int size)
{
    int EnBuyukSayi = dizi[0];
    for (int i = 0; i < size; i++)
    {
        if (dizi[i]> EnBuyukSayi)
        {
            EnBuyukSayi = dizi[i];
        }
        
    }
    printf("Dizideki en buyuk sayi: %d", EnBuyukSayi);
}
*/
#include <stdio.h>

int EnBuyukAllah(int dizi[], int size);

int main()
{
    int dizi[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(dizi)/sizeof(dizi[0]);
    int enBuyuk = EnBuyukAllah(dizi,size);
    printf("Dizideki en buyuk sayi: %d", enBuyuk);
    return 0;
}

int EnBuyukAllah(int dizi[], int size)
{
    int EnBuyukSayi = dizi[0];
    for (int i = 1; i < size; i++) // İlk elemanı zaten kontrol ettiğimiz için 1'den başlıyoruz
    {
        if (dizi[i] > EnBuyukSayi)
        {
            EnBuyukSayi = dizi[i];
        }
    }
    return EnBuyukSayi;
}
