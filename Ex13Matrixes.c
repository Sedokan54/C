#include <stdio.h>


int MatrisGosterimi()
{
    int matris1[2][2] = {{1,2},{3,4}};
    int matris2[2][2] = {{5,6},{7,8}};
    int sonuc[2][2];

    printf("Matris 1:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matris1[i][j]);
        }
        printf("\n");
        
    }
    
    printf("\n");


    printf("Matris 2:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matris2[i][j]);
        }
        printf("\n");
        
    }
    
    printf("\n");

    printf("Matrisler Toplami:\n");
    for(int i = 0 ;i<2 ;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sonuc[i][j] = matris1[i][j] + matris2[i][j];
            printf("%d\t",sonuc[i][j]);
        }
        printf("\n");
    }

}


int ManuelMatrisGirdisiVeCarpim()
{
    int matris1[2][2];
    int matris2[2][2];
    int sonuc[2][2];

    printf("Maris1 degerlerini gir: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("matris1[%d][%d]: ", i, j);
            scanf("%d",&matris1[i][j]);
            
        }
           
    }

    printf("\n");
    printf("Maris2 degerlerini gir: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("matris2[%d][%d]: ", i, j);
            scanf("%d",&matris2[i][j]);
            
        }
           
    }
    printf("\n");

    printf("\nMatris 1:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matris1[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    printf("\nMatris 2:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matris2[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    printf("Matrislerin Carpimi: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sonuc[i][j] = matris1[i][j] * matris2[i][j];
            printf("%d\t",sonuc[i][j]);
        }
        printf("\n");
        
    }
}


int main()
{   
    //MatrisGosterimi();
    ManuelMatrisGirdisiVeCarpim();

    return 0;
}