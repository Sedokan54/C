#include <stdio.h>

int main(){

    int islem;
    float sayi1, sayi2, sonuc;


    while (1)
    {
        printf("Istenilen islem icin verili sayilari giriniz: Toplama icin 1, Cikartma icin 2, Carpma icin 3, Bolme icin 4, Programdan cikmak icin 0\n");
        scanf("%d",&islem);

        
        if (islem==0)
        {
            printf("Program kapatiliyor..\n");
            break;
        }

        printf("Iki sayi giriniz.\n");
        scanf("%f %f", &sayi1, &sayi2);

        switch (islem){
            case 1:
                sonuc = sayi1 + sayi2;
                printf("cevap %f\n",sonuc);
                break;

            case 2:
                sonuc = sayi1 - sayi2;
                printf("cevap %f\n",sonuc);
                break;
            case 3:
                sonuc = sayi1 * sayi2;
                printf("cevap %f\n",sonuc);
                break;          
            case 4:

                if (sayi2 !=0)
                {
                    sonuc = sayi1 / sayi2;
                    printf("cevap %f\n",sonuc); 
                }
                else {
                    printf("Sayi sifira bolunemez.");
                }
                break;
            default:
                 printf("Gecersiz Secim");
                break;
                
                
        }

        
        
    }
    





    return 0;
}