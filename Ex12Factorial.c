#include <stdio.h>
double fakt(int sayi){
    double sonuc =1;
    for(int i=1;i<=sayi;i++){
        sonuc*=i;
    }
    return sonuc;
}
int main(){
    printf("sayi gir:\n");
    int sayi;
    scanf("%d",&sayi);
    printf("\n\n--------\n\nsayinin faktoriyeli : %lf",fakt(sayi));
    return 0;
}