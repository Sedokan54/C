#include <stdio.h>


int main()
{
    /*int arr[] = {1, 2, 3, 4};
    int *ptr = &arr;

    for (int i = 0; i < 4; i++)
    {
        printf("%d. indeks: %d\n",i, *(ptr+i));
    }*/

    const char string_a[] = "pxpx px";
    const char *string_b =  "pxpx px";
    const int *string_c = "pxpx px";

    printf("%s\n", string_a);
    printf("%s\n", string_b);
    printf("%s\n", string_c);

    return 0;
}