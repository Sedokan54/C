#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bolen = 20;
    int bolunen = 0;
    int bolum;

    if (bolen == 0)
    {
        fprintf(stderr,"Sifira Bolme Hatasu! Programdan Cikiliyor...\n");
        exit(-1); // exit(EXIT_FAILURE);
    }

    bolum = bolunen/bolen;

    fprintf(stderr, "Bolum (Sonuc) : %d\n", bolum);

    exit(0); // exit(EXIT_SUCCESS);
    





};