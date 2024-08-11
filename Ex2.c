#include <stdio.h>

int main(){


    int i = 1;
    float toplam = 0, not, ortalama;
    int not_sayisi;

    printf("Not sayisini griniz.\n");
    scanf("%d", &not_sayisi);

    while (i <= not_sayisi)
    {
        printf("%d. notu giriniz\n",i);
        scanf("%f",&not);
        toplam += not;

        i++;
    }

    ortalama = toplam/not_sayisi;

    printf("Ortalama: %f\n", ortalama);
    





    return 0;
}