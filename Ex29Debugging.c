#include <stdio.h>

// Debugging islemi https://www.onlinegdb.com/ sitesinde yapilmistir. 

int main(){
    int i, n;

    /* Kullanicidan ust sinir degeri al. */
    printf("Ust sinir degeri giriniz: \n");
    scanf("%d", &n);

    printf("1'den %d'ye kadar tum cift sayilar : \n", n);

    /*
     * Dongu sayacini 1'den baslat (i=1)
     * n degerine kadar git (i<=n)
     * her sefernde dongu sayacini 1 arttir (i++)
     * her seferinde i degerinin 2'ye bolunup bolunmedigini kontrol et
     * 2'ye bolunuyorsa yazdir ve alt satira gec
    */
    for (i = 1; i <= n; i++)
    {
        if (i%2 == 0) //breakpoint
        {   
            printf("%d\n", i);
        }
        
    }

    return 0;   
}