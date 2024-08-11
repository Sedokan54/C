#include <stdio.h>

int main()
{
    char dizi[] = {1,2,3,4};
    char *ptr = &dizi; // ptr arraydeki ilk elemani temsil eder
    //char *ptr = dizi; // dizi kullaniminda yukaridakinden farki yoktur

    printf( "Ilk Deger: %d\n", *ptr);
    printf("Ikinci Deger: %d\n",*(ptr+1));
    printf( "Ilk Deger adresi: %p\n", ptr);
    printf( "Ilk Deger adresi: %p\n", &dizi);
    printf( "Ilk Deger adresi: %p\n", &dizi[0]);
    printf( "Ilk Deger adresi: %p\n", ptr+1);
    printf( "Ilk Deger adresi: %p\n", &dizi[1]);

    return 0;   
}