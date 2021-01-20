#include <stdio.h>
main()
{
    char ad[20];
    printf("adinizi giriniz : ");
    scanf("%s",ad);
    printf("girdiginiz isim: %s",ad);
    
}

--------------------------------------------------------------------------------------------------------------

//Klavyeden girilen ismin harf sayısını ekrana yazan C programı
#include <stdio.h>
main()
{
    char ad[20];
    printf("adinizi giriniz : ");
    scanf("%s",ad);
    //1.yol
    int i=0;
    do
    {
        if(ad[i]!='\0') i++;
        else break;
    }while(1);
    printf("girilen isim %d karakterden olusuyor\n",i);
    
    //2.yol
    i=0;
    while(ad[i]!='\0') i++;
    printf("girilen isim %d karakterden oluduyor",i);    
}

--------------------------------------------------------------------------------------------------------------

//Klavyeden girilen bir ismi tersten yazan yazan C programı
#include <stdio.h>
main()
{
    char ad[20];
    printf("adinizi giriniz : ");
    scanf("%s",ad);
    int uzunluk=0;while(ad[uzunluk]!='\0') uzunluk++;
    int s;
    for(s=uzunluk-1;s>=0;s--)
    {
        printf("%c",ad[s]);
    }
}

--------------------------------------------------------------------------------------------------------------

/*Klavyeden girilen ismin baştan ve sondan okunuşunu kontrol eden program*/
#include <stdio.h>
main()
{
    char ad[20],ters[20];
    printf("adinizi giriniz : ");
    scanf("%s",ad);
    int uzunluk=0;while(ad[uzunluk]!='\0') uzunluk++;
    int s;
    for(s=0;s<uzunluk;s++)
    {
        ters[(uzunluk-1)-s]=ad[s];
    }
    ters[uzunluk]='\0';
    if(strcmp(ters,ad)==0) printf("okunuslari ayni");
    else
    printf("okunuslari farkli");
}

--------------------------------------------------------------------------------------------------------------


#include <stdio.h>
#include <ctype.h>
main()
{
    printf("%d\n",isdigit('5'));//sayı değilse 0 sayıysa 0dan faklı değer döner
    printf("%d\n",isdigit('g'));
    printf("%d\n",isalpha('s'));//harf değilse 0 harfse 0dan farklı değer döner
    printf("%d\n",isalpha('1'));
    printf("%d\n",isalnum('a'));
    printf("%d\n",isalnum('3'));//sayı veya harf değilse 0 harf veya sayıysa 0dan farklı değer döner
    printf("%d\n",isalnum('-'));
    printf("%d\n",islower('a'));//küçük harf değilse 0, küçük harfse 0dan farklı değer döner
    printf("%d\n",islower('D'));
    printf("%d\n",isupper('a'));//büyük harf değilse 0, büyük harfse 0dan farklı değer döner
    printf("%d\n",isupper('D'));    
    printf("%c\n",toupper('a'));//büyük harfe çevirir
    printf("%c\n",tolower('R'));//küçük harfe çevirir
}




--------------------------------------------------------------------------------------------------------------

/*
Klavyeden
girilen en fazla 25 karakter uzunluğundaki kelimenin
büyük harflerini küçüğe, küçük harflerini büyüğe dönüştüren
programı kodlayınız
*/
#include <stdio.h>
#include <ctype.h>
main()
{
    char metin[25];
    printf("metni giriniz : ");
    scanf("%s",metin);
    int uzunluk=0;while(metin[uzunluk]!='\0') uzunluk++;
    int i;
    for(i=0;i<uzunluk;i++)
     {
         if(isupper(metin[i])) printf("%c",tolower(metin[i]));
         if(islower(metin[i])) printf("%c",toupper(metin[i]));
     }
}




--------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <ctype.h>
main()
{
char ch;
printf("bir karakter giriniz ");
ch = getchar();
printf("\nKarakter olarak ch = %c \nASCII numarası ch = %d", ch, ch);
}

--------------------------------------------------------------------------------------------------------------

/*
Karakter
Ascii kod çevrimi
*/
#include <stdio.h>
#include <ctype.h>
main()
{
char ch;
int a;
printf("karakter giriniz");
ch = getchar();
a= (int)ch;
printf("%d",a);
}

--------------------------------------------------------------------------------------------------------------

/*
Karakter
Ascii kod çevrimi
*/
#include <stdio.h>
#include <ctype.h>
main()
{
char ch;
int a;
printf("1 255 arasi sayi giriniz");
scanf("%d",&a);
ch= (char)a;
printf("%c",ch);
}

--------------------------------------------------------------------------------------------------------------

/*
Karakter
Ascii kod çevrimi
*/
#include <stdio.h>
#include <ctype.h>
main()
{
char ch;
int a;
for(a=1;a<=255;a++)
{
    ch =(char)a;
    printf("%d - %c\t",a,ch);
}
}

--------------------------------------------------------------------------------------------------------------

/*
Her harfi kendisinden 5 sonra gelen harfle şifreleyen program
(SEZAR şifreleme)
*/
#include <stdio.h>
#include <ctype.h>
main()
{
char metin[50];
int i,a;
printf("metin giriniz : ");
gets(metin); // scanf("%s",metin);
for(i=0;i<strlen(metin);i++)
{
    a=(int)metin[i];
    a=a+5;
    metin[i]=(char)a;
}
printf("metnin sifreli hali : %s",metin);

}

--------------------------------------------------------------------------------------------------------------

/*
Her harfi kendisinden 5 önce gelen harfle deşifre eden program
(SEZAR şifreleme)
*/
#include <stdio.h>
#include <ctype.h>
main()
{
char metin[50];
int i,a;
printf("metin giriniz : ");
gets(metin); // scanf("%s",metin);
for(i=0;i<strlen(metin);i++)
{
    a=(int)metin[i];
    a=a-5;
    metin[i]=(char)a;
}
printf("metnin desifreli hali : %s",metin);

}

--------------------------------------------------------------------------------------------------------------

/*
Klavyeden nokta yazılana kadar girilen dizgiyi ekrana
yazan C programı
*/
#include <stdio.h>
#include <ctype.h>
main()
{
int i=0;
char c, cumle[80];
printf("Bir cümle giriniz");
while(c!='.')
{
    c=getch();
    printf("%c",c);
    cumle[i++]=c;
}
cumle[i]='\0';
puts("\nGirilen cümle ");
puts(cumle);
}

--------------------------------------------------------------------------------------------------------------