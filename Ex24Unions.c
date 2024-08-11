#include <stdio.h>
#include <stdlib.h>

// union : birlesim

//struc kendi icerisinde bulunan butun degiskenleri ayni anda tutabilirken hafizada onun icin buyuk bir yer acarken
//union veri yapisi bunlardan sadece 1 tanesini tutar. gomulu yazlim yapiyorsak veya hafiza/bellek kisiti cok olan platformlarda union kullanmak daha mantikli olabilir. 
//(Union icindeki butun degiskenlere ayni anda ihtiyac duymuyorsak tabiki)

union Veri
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Veri veri;

    veri.i = 10;
    veri.f = 220.5;
    strcpy(veri.str, "C Language");

    printf("Verinin buyuklugu: %d\n",sizeof(veri));
    printf("veri.i: %d\n", veri.i);
    printf("veri.f: %f\n", veri.f);
    printf("veri.str: %s\n", veri.str);
    printf("\n...\n");
    
    //Boyle yapilirsa en son girilen veri duzgun yazilir. Ilk bastakiler sapitir.
    return 0;
}