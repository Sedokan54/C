#include <stdio.h>

int main(){


/*    int height = 5;    
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
*/    


    int depth = 3, height = 3, width = 3;

    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < height; j++)
        {
            for (int k = 0; k < width; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}