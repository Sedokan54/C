#include <stdio.h>
#include <string.h>

int main()
{


    struct Person
    {
        int age;
        double salary;
        char sex[100];
        char name[100];
        

    };
    
    struct Person Kaan;

    Kaan.age = 20;
    Kaan.salary = 40000;
    strcpy(Kaan.sex, "male"); 
    strcpy(Kaan.name, "Kaan Furkan");

    printf("Lutfen kisinin adini giriniz (tek kelime):\n ");
    scanf("%49s", &Kaan.name); // %49s, buffer overflow önlemek için

    printf("Lutfen kisinin cinsiyetini giriniz (tek kelime):\n ");
    scanf("%49s", &Kaan.sex); 
    
    printf("Lutfen kisinin yasini giriniz: \n");
    scanf("%d", &Kaan.age);
    
    printf("Lutfen kisinin maasini giriniz: \n");
    scanf("%lf", &Kaan.salary);    




    printf("Kisisel Bilgiler: \n");
    printf("Age: %d\n",Kaan.age);
    printf("Salary: %lf\n", Kaan.salary);
    printf("Sex: %s\n", Kaan.sex);
    printf("Name: %s\n", Kaan.name);


    return 0;
}







/*
char src[40] = "Hello, World!";
char dest[40];                                                 strcpy usage
strcpy(dest, src);
printf("Kopyalanan String: %s\n", dest);

char dest[50] = "Hello";
char src[20] = ", World!";                                    strcap usage
strcat(dest, src);
printf("Birleştirilmiş String: %s\n", dest);

#include <stdio.h>
#include <string.h>
int main(){
char str1[10] = "abc";
char str2[10] = "abc";
int result = strcmp(str1,str2);                                 strcmp usage
if (result == 0) {
printf("Stringler esit.\n");
} else {
printf("Stringler esit degil.\n");
}
return 0;
}

*/