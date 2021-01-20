//parametre almayan ve geri değer döndürmeyen fonksiyon

#include <stdio.h>

void yaz()
{
    printf("merhaba");
}
void paragraf()
{
    printf("\n");
}

main()
{
    yaz();paragraf();
    yaz();paragraf();
    yaz();yaz();paragraf();
    yaz();paragraf();
    yaz();paragraf();
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//parametre almayan ve geri değer döndürmeyen fonksiyon

#include <stdio.h>

void topla()
{
    int s1,s2,toplam;
    printf("birinci sayiyi giriniz : ");
    scanf("%d",&s1);
    printf("ikinci sayiyi giriniz : ");
    scanf("%d",&s2);
    toplam=s1+s2;
    printf("sayilarin toplami %d",toplam);    
}

main()
{
    topla();
    topla();
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//parametre alan ve geri değer döndürmeyen fonksiyon

#include <stdio.h>

void topla(int s1,int s2)
{
    int toplam;
    toplam=s1+s2;
    printf("sayilarin toplami %d\n",toplam);    
}

main()
{
    topla(6,3);
    
    int sayi1,sayi2;
    printf("birinci sayiyi giriniz : ");
    scanf("%d",&sayi1);
    printf("ikinci sayiyi giriniz : ");
    scanf("%d",&sayi2);
    topla(sayi1,sayi2);
    
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//parametre alan ve geri değer döndüren fonksiyon
#include <stdio.h>

int topla(int s1,int s2)
{
    int toplam;
    toplam=s1+s2;
    return toplam;
}

main()
{

    int sayi1,sayi2,sonuc;
    printf("birinci sayiyi giriniz : ");
    scanf("%d",&sayi1);
    printf("ikinci sayiyi giriniz : ");
    scanf("%d",&sayi2);
    sonuc=topla(sayi1,sayi2);
    printf("sayilarin toplami %d\n",sonuc);
    
    printf("sayilarin toplami %d\n",topla(3,9));
    
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//parametre alan ve geri değer döndüren fonksiyon
#include <stdio.h>

int topla(int s1,int s2)
{
    int toplam;
    toplam=s1+s2;
    return toplam;
}
int fark(int s1,int s2)
{
    int s;
    if(s1>s2) s=s1-s2;
     else s=s2-s1;
    return s;
}

main()
{
    printf("sayilarin farki %d\n",fark(3,9));
    printf("sayilarin toplami %d\n",topla(3,9));
    
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//2 tamsayı parametre alan ve bunlardan büyük olanı geri
//döndüren program
#include <stdio.h>
//1.yol
int buyuk(int s1,int s2)
{
    int s;
    if(s1>s2) s=s1;
     else s=s2;
    return s;
}
//2.yol
int buyuk2(int s1,int s2)
{
    if(s1>s2) return s1;
     else return s2;
}

main()
{
    printf("%d\n",buyuk(13,9));
    printf("%d\n",buyuk2(13,9));
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//2 tamsayı parametre alan ve bunlar arasındaki sayıları ekrana yazn

#include <stdio.h>
void aralikyaz(int bas,int bit)
{
    int i;
    for(i=bas;i<=bit;i++)
        printf("%d - ",i);
}
int araliktopla(int bas,int bit)
{
    int i,toplam=0;
    for(i=bas;i<=bit;i++)
        toplam+=i;
    return toplam;
}

main()
{
    aralikyaz(15,20);
    printf("%d",araliktopla(15,20));
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

/*
Kendisine gönderilen tamsayı değerin tek ya da
çift olup olmadığını ekrana yazan fonksiyonu
*/

#include <stdio.h>
void tek_cift(int sayi)
{
    if(sayi%2==0) printf("cift");
     else printf("tek");
}

main()
{
    tek_cift(5);
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//fonsiyon prototipi
#include <stdio.h>
int topla(int,int);
main()
{
    printf("%d",topla(5,7));
}

int topla(int sayi1,int sayi2)
{
    int sonuc;
    sonuc=sayi1+sayi2;
    return sonuc;
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//parametre olarak dizi alan fonksiyon
//gelen dizinin en küçük elemanını geri döndürür.
#include <stdio.h>
int enkucuk(int b[],int n)
{
    int i,enk=b[0];
    for(i=0;i<n;i++)
     if(b[i]<enk) enk=b[i];
    return enk;
}

main()
{
    int a[5]={3,5,9,1,6};
    printf("%d",enkucuk(a,5));
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//parametre olarak dizi alan fonksiyon
//dizi içinde aranan değerden kaç tane olduğunu döndürür.
#include <stdio.h>
#include <math.h>
int kactane(int dizi[],int n,int aranan)
{
    int i,adet=0;
    for(i=0;i<n;i++)
     if(dizi[i]==aranan) adet++;
    return adet;
}

main()
{
    int a[12]={3,5,9,1,6,5,6,2,3,6,5,9};
    int eleman=(sizeof(a)/sizeof(a[0])); //dizinin eleman sayını hesaplar(Toplam hafıza alanı/bir eleman alanı)
    printf("%d",kactane(a,eleman,6));
}

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*





