#include <stdio.h>


// Kullanıcı tarafından girilen bir 3x3 matrisin transpozesini(yani, satırları sütun yapacak ve sütunları satır yapacak şekilde bir matris) hesaplayın
// bu yeni matrisi ekrana yazdırın.

int TransTovbePoze()
{
    int matris1[3][3];

    printf("Amele gibi gir degerleri.\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matris1[%d][%d]: ",i,j);
            scanf("%d",&matris1[i][j]);           
        }
        printf("\n");
    }


    printf("T uygualniyor...");
    printf("\n");
    printf("Matris1: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matris1[j][i]);
            
        }
        printf("\n");
    }




}



int main()
{
    TransTovbePoze();
    return 0;
}