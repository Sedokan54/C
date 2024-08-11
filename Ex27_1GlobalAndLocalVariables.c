#include <stdio.h>

/* Global degisken beyani (deklerasyonu) */
int a = 20;

/* Verilen iki sayiyi toplayan fonk. */
int Topla(int a, int b)
{
    printf("a degiskeninin Topla() fonk.u icerisindeki giris degeri %d\n",a);
    printf("b degiskeninin Topla() fonk.u icerisindeki giris degeri %d\n",b);

    a *= 12;
    b += 5;

    printf("a degiskeninin Topla() fonk.u icerisindeki sonraki degeri %d\n",a);
    printf("b degiskeninin Topla() fonk.u icerisindeki sonraki degeri %d\n",b);

    return a + b;
};

int main()
{
    /* Lokal degisken beyani (deklerasyonu)*/
    int a = 10;
    int b = 20;
    int c = 0;

    printf("a degiskeninin main() icerisindeki degeri %d\n",a);
    printf("b degiskeninin main() icerisindeki degeri %d\n",b);
    c = Topla(a,b);
    printf("c degiskeninin main() icerisindeki degeri %d\n",c);

    printf("a degiskeninin main() icerisindeki degeri %d\n",a);
    printf("b degiskeninin main() icerisindeki degeri %d\n",b);

    return 0;
};