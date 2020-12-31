//Klavyeden girilen 1’den 5’e kadar olan tamsayıların okunuşlarını yazı
//ile ekrana yazan c programını kodlayınız.
#include <stdio.h>
main()
{
int sayi;
printf("1-5 arasi sayi giriniz ");scanf("%d",&sayi);
switch(sayi)
{
case 1: printf("bir"); break;
case 2: printf("iki");break;
case 3: printf("uc"); break;
case 4: printf("dort"); break;
case 5: printf("bes"); break;
default: printf("girilen deger 1-5 arasinde degil");
}
}
--------------------------------
//1-7 arasından girilen gun bilgisine göre günün adını yazan program
#include <stdio.h>
int dayofweek(int d, int m, int y)
{
static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
y -= m < 3;
return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
main()
{
int day = dayofweek(16, 11, 2020);
printf ("%d", day);
switch(day)
{
case 1: printf("pazartesi"); break;
case 2: printf("sali");break;
case 3: printf("carsamba"); break;
case 4: printf("persembe"); break;
case 5: printf("cuma"); break;
case 6: printf("cumartesi"); break;
case 7: printf("pazar"); break;
default: printf("girilen deger 1-7 arasinde degil");
}
}
--------------------------------
DÖNGÜLER
--------------------------------
// ekrana 10 kez amasya yazan program
#include <stdio.h>
main()
{
int sayac=11;
while(sayac<=10)
{
printf("Amasya \n");
sayac++; //sayac=sayac+1;
}
}
---------------------------
// ekrana 1-10 arası sayıları yazan program
#include <stdio.h>
main()
{
int sayi=1; //başlangıç değeri
while(sayi<=10) //döngü şartı
{
printf("%d \n",sayi);
sayi++; //artış miktarı
}
}
---------------------------
// ekrana 1-10 arası sayıların toplamını yazan program
#include <stdio.h>
main()
{
int sayi=1; //başlangıç değeri
int toplam=0;
while(sayi<=10) //döngü şartı
{
printf("%d \n",sayi);
toplam=toplam+sayi;
sayi++; //artış miktarı
}
printf("toplamlari %d",toplam);
}
---------------------------
// başlangıç ve bitişi dışarıdan girilen aralıktaki sayıların toplamını
#include <stdio.h>
main()
{
int baslangic,bitis;
printf("baslangic degerini giriniz ");scanf("%d",&baslangic);
printf("bitis degerini giriniz ");scanf("%d",&bitis);
int sayi=baslangic; //başlangıç değeri
int toplam=0;
while(sayi<=bitis) //döngü şartı
{
printf("%d \n",sayi);
toplam=toplam+sayi;
sayi++; //artış miktarı
}
printf("toplamlari %d",toplam);
}
---------------------------
// 0 girilinceye kadar, girilen sayıları toplayan program
#include <stdio.h>
main()
{
int sayi=-1,toplam=0;
while(sayi!=0)
{
printf("sayi giriniz");
scanf("%d",&sayi);
toplam+=sayi; //toplam=toplam+sayi;
}
printf("sayilarin toplami %d",toplam);
}
---------------------------
// 1 ile 10 arasındaki tek sayıları ekrana yazan program
#include <stdio.h>
main()
{
//1.yol
int i=1;
while(i<=10)
{
if(i%2==1) printf("%d \n",i);
i++;
}
//2.yol
i=1;
while(i<=10)
{
printf("%d \n",i);
i=i+2;
}
}
----------------------------
// Klavyeden girilen N tane tamsayının aritmetik ortalamasını bulan program
#include <stdio.h>
main()
{
int sayi,i,toplam=0,sayi2;
printf("giris yapilacak sayi sayisini giriniz ");
scanf("%d",&sayi);
i=1;
while(i<=sayi)
{
printf("%d. sayiyi giriniz ",i);
scanf("%d",&sayi2);
toplam+=sayi2;
i++;
}
double ortalama=toplam/(double)sayi;
printf("sayilarin toplami %d",toplam);
printf("ortalamasi %f",ortalama);
}
-----------------------------