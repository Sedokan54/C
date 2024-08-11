#include <stdio.h>

int x = 10, y= 50;

void DegerArttir(int k){
    //auto int i = 0; // auto, belirtmedigimizde dahi butun degiskenler icin varsayilan depolama turu.
    static int i = 0; //static, farkli fonksiyonlarin icinde devam eden bir degisken tanimlar.

    printf("%d ",i);
    i += k;
}

int main()
{
    /*DegerArttir(3);
    DegerArttir(3);
    DegerArttir(3);
    DegerArttir(3);*/

    //extern int y; // extern olarak tanimlanmazsa degeri 0 olur. Local olarak sadece int y yazsaydik, local global'i ezerdi ve 0 olurdu. Ancak extern,disarida bir yerde tanimli olan y'yi bulur. Nerede tanimlandigi onemsiz.
    //printf("Global olan x degiskeninin degeri: %d\n",x);
    //printf("Extern olan y degiskeninin degeri: %d",y);

    register int i; //Diger belirteclerden farkli olarak CPU bellegi depolar.(Daha kisitli ancak cok hizli okunabilir/yazilabilir alan.) Hizli erisim-Performans kazanci saglar.
    int sayi_dizisi[5] = {8, 10, 12, 14, 16};
    for (i = 0; i < 5; i++)
    {
        printf("sayi_dizisi[%d] = %d\n",i ,sayi_dizisi[i]);
    }
    


    return 0;
}