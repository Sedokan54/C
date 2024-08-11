#include <stdio.h>
//Fonksiyon Dönüş tipi olarak struct
// Maksimum ve minimum değerleri saklamak için bir yapı tanımı
// Dizideki maksimum ve minimum değerleri bulan fonksiyon

struct MinMax
{
    int min;
    int max;
};

struct MinMax FindMinMax(int dizi[], int size)
{
    struct MinMax result;
    result.max = 0;
    result.min = 9999;

    for (int i = 0; i < size; i++)
    {
        if (dizi[i] > result.max)
        {
            result.max = dizi[i];
        }

        if (dizi[i] < result.min)
        {
            result.min = dizi[i];
        }
        
        
    }
    
    return result;
}


int main()
{

    int dizi[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(dizi)/sizeof(dizi[0]);

    struct MinMax result = FindMinMax(dizi, size);

    printf("En buyuk: %d\n", result.max);
    printf("En kucuk: %d", result.min);


    return 0;
}