#include <stdio.h>
#include <stdlib.h>

// Dort temel fonksiyon : malloc(), calloc()[], realloc()[], free()


// malloc() [Memory Allocation] :        Herhangi bir tipte talep edilen boyutta, o tipin ne kadar birim boyutu varsa onun belirli bir olcekte carpilmis hali kadar bellekte yer ayirir.
// Derleyici ayrilan hafizaya hic dokunmaz. Hafizayi ari ayirir ve hazfizayi ayirdiktan sonra onun icerisinde daha onceden kalma veri varsa o veriye dokunmaz. O bellek adresine eristikce orayabir seyler yazariz. 
// Calloc()'un aksine butun halinde bir alan ayirmak zorunda degil.

/*int main(){
    int n, i, *isaretci, toplam = 0;
    printf("Toplanacak eleman sayisini giriniz: \n");
    scanf("%d", &n);

    isaretci = (int*) malloc(n * sizeof(int));

    //bellek ayirma isleminin basarisiz olmasi durumunda;

    if (isaretci == NULL)
    {
        printf("Hata! Bellek ayirma islemi basarisiz oldu..");
        exit(0);
    }
    
    printf("toplanacak elemanlari giriniz: \n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", isaretci + i);
        toplam += *(isaretci + i);
    }

    printf("Toplam = %d", toplam);
    
    free(isaretci);
    return 0;

}*/

// calloc() [Contiguous Allocation] :    Bellek alaninda, bitisik-butunlesik-yekpare-tek parca halinde, bir ondalikli sayinin x kati kadar bir alan acmayi saglar.
// Hafizayi ayirdigi anda, o bellek adreslerinde bulunan her yere 0 doldurur. Ilklendirir(Initilization).  

/*int main(){
    int n, i, *isaretci, toplam = 0;

    printf("Toplanacak eleman sayisini giriniz: \n");
    scanf("%d", &n);

    isaretci = (int*) calloc(n, sizeof(int));

    //bellek ayirma isleminin basarisiz olmasi durumunda;

    if (isaretci == NULL)
    {
        printf("Hata! Bellek ayirma islemi basarisiz oldu..");
        exit(0);
    }
    
    printf("toplanacak elemanlari giriniz: \n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", isaretci + i);
        toplam += *(isaretci + i);
    }

    printf("Toplam = %d", toplam);
    
    free(isaretci);
    return 0;
}
*/

// realloc() : Daha once halihazirda allocate edilmis, ayrilmis bir hafiza alani ve ona iliskin bir isaretci(pointer) varsa 
// ve bunun bir sekilde boyutunun arttirilmasi veya azaltilmasina yonelik bir ihtiyac varsa soz konusu isaretci icin yeni bir boyut belirterek yeni boyut talep edilir.

int main(){
    int n1, n2, i, *isaretci, toplam = 0;

    printf("Boyut Giriniz : \n");
    scanf("%d", &n1);

    isaretci = (int*) malloc(n1 * sizeof(int));

    if (isaretci == NULL)
    {
        printf("Hata! Bellek ayirma islemi basarisiz oldu..");
        exit(0);
    }

    printf("Ayrilan ilk bellek adresleri: \n");
    for (i = 0; i < n1; ++i)
    {
        printf("%pc\n",isaretci + i);
    }

    printf("\nYeni boyutu giriniz : \n");
    scanf("%d", &n2);

    // Yeniden bellek ayirma islemi
    isaretci = realloc(isaretci, n2 * sizeof(int));

    if (isaretci == NULL)
    {
        printf("Hata! Bellek ayirma islemi basarisiz oldu..");
        exit(0);
    }

    printf("Ayrilan ikinci bellek adresleri : \n");
    for (i = 0; i < n2; ++i)
    {
        printf("%pc\n", isaretci + i);
    }

    free(isaretci);
    return 0;
}

// free() : Daha once yukaridaki 3 fonksiyon ile tanimlanmis bir isaretci var ise ve halihazirda ayrilmis bir bellek adresine isaret ediyorsa isaretci,
// ve bellek adresinde bulunan verilere ihtiyac kalmadiysa, orayi serbest birakmak icin kullanilir.

