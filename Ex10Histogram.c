#include <stdio.h>

int main(){

    /*char dizi[] = {'m','e','r','h','a','b','a'};

    for (int i = 0; i<sizeof(dizi); i++){
        printf("%c\n",dizi[i]);
    }
    */


   
    int n[5] = {19,3,15,7,11};
    printf("%-8s%-8s%-10s\n", "Element", "Value", "Histogram");

    for (int i = 0; i < 5; i++) {
        printf("%-8d%-8d", i, n[i]);
        for (int j = 0; j < n[i]; j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}