#include <stdio.h>

int main(){

    for (int i = 1; i<=5; i++) 
    { //sutun
        for (int j = 1; j <=10; j++)//satır
        {
            printf("%d\t",i*j);
        }
        printf("\n");
        
    }


    return 0;
}   