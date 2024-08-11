#include <stdio.h>

int main(){


    int dizi[7];
    int index, value;

    printf("%s%13s\n", "index", "value");

    for (int i = 0; i < 7; i++)
    {
        dizi[i] = i + 1;
    }
    
    for (int i = 0; i < 7; i++)
    {
        printf("%7d%13d\n", i, dizi[i]);
    }
    


    return 0;
}