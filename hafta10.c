//Klavyeden girilen 10 adet tamsayı sınav notuna göre, ortalamanın üstünde olanları ekrana yazan C programı…
#include <stdio.h>
main()
{
int notlar[10];
int toplam=0,i;
double ortalama;
for(i=0;i<=9;i++)
{
printf("%d.ogrencinin notunu giriniz : ",i+1);
scanf("%d",&notlar[i]);
toplam=toplam+notlar[i];
}
ortalama=toplam/10.0;
printf("notlarin ortalamasi %.2f\n",ortalama);
for(i=0;i<=9;i++)
{
if(notlar[i]>=ortalama)
printf("%d.ogrenci %d ile ortalama ustu\n",i+1,notlar[i]);
}
}
--------------------------------------------------
//değişkenlerin yer değiştirmesi (swap)
#include <stdio.h>
main()
{
int a=5;
int b=7;
int c;
printf("a %d b %d\n",a,b);
c=a;
a=b;
b=c;
printf("a %d b %d\n",a,b);
}
--------------------------------------------------
//Buble sort algoritması ile küçükten büyüğe sıralama
#include <stdio.h>
main()
{
int dizi[5]={14,1,9,12,5};
int i,j,yedek;
printf("dizinin sirasiz durumu\n");
for(i=0;i<=4;i++) printf("%d.eleman %d\n",i,dizi[i]);
for(i=0;i<=4;i++)
for(j=0;j<=3;j++)
if(dizi[j]>dizi[j+1])
{
yedek=dizi[j];
dizi[j]=dizi[j+1];
dizi[j+1]=yedek;
}
printf("dizinin sirali durumu\n");
for(i=0;i<=4;i++) printf("%d.eleman %d\n",i,dizi[i]);
}
--------------------------------------------------
//Lineer arama algoritması
//aranan degerin son bulundugu konum
#include <stdio.h>
main()
{
int dizi[5]={14,5,9,12,5};
int i,aranan,konum=-1;
printf("dizi icinde aranacak degeri giriniz : ");
scanf("%d",&aranan);
for(i=0;i<=4;i++)
if(dizi[i]==aranan) konum=i;
if(konum!=-1) printf("aranan deger %d konumunda",konum);
else printf("aranan deger bulunamadi");
}
--------------------------------------------------
//Lineer arama algoritması
//aranan degerin ilk bulundugu konum
#include <stdio.h>
main()
{
int dizi[5]={14,5,9,12,5};
int i,aranan,konum=-1;
printf("dizi icinde aranacak degeri giriniz : ");
scanf("%d",&aranan);
for(i=0;i<=4;i++)
if(dizi[i]==aranan)
{
konum=i;
break;
}
if(konum!=-1) printf("aranan deger %d konumunda",konum);
else printf("aranan deger bulunamadi");
}
------------------------------------------------------------------------
//3,8,11,8,9 başlangıç değerleri olan dizinin elemanları toplamı
#include <stdio.h>
main()
{
int dizi[5]={3,8,11,8,9};
int i,toplam=0;
for(i=0;i<=4;i++)
toplam=toplam+dizi[i];
printf("elemanlari toplami %d",toplam);
}
------------------------------------------------------------------------
/*
WELL ORDERED NUMBERS
138 iyi sıralı bir sayıdır çünkü rakamları büyükten küçüğe doğru sıralanmıştır. 365 iyi sıralı bir sayı değildir çünkü
3<6<5 şartı sağlanmamaktadır.
3 basamaklı bütün iyi sıralı sayıları ve bunların toplamlarını bulan bir program yapınız. Programın çıktısı aşağıdaki
gibi olacaktır.
123 124 125 126 127 128 129 134
135 136 137 138 139 145 146 147
............
............
678 679 689 789
Toplam=?
123 sayısını basamaklarına ayırmak için
123 % 10= 3
123 % 100 = 23 -> 23 / 10 =2
123 / 100 = 1
*/
#include <stdio.h>
main()
{
int b,o,y,i,toplam=0;
for(i=100;i<=999;i++)
{
b=i%10;
o=(i%100)/10;
y=i/100;
if((b>o) && (o>y)) {
printf("%d - ",i);
toplam+=i;}
}
printf("toplam=%d",toplam);
}
------------------------------------------------
/*
ilk degerleri sırayla 7,3,6,0,9 ve 9,0,7,3,6 olan iki dizi oluşturun. İki
dizinin toplamlarını üçüncü diziye ekleyin.
*/
#include <stdio.h>
main()
{
int dizi1[5]={7,3,6,0,9},dizi2[5]={9,0,7,3,6},dizi3[5];
int i;
for(i=0;i<=4;i++)
dizi3[i]=dizi1[i]+dizi2[i];
printf("dizi1\tdizi2\tdizi3\n");
for(i=0;i<=4;i++)
printf("%d\t%d\t%d\t\n",dizi1[i],dizi2[i],dizi3[i]);
}
---------------------------------------------
/*
ilk degerleri sırayla 7,3,6,0,9 ve 9,0,7,3,6 olan iki dizi oluşturun. İki
dizinin değerlerini birbiriyle değiştirin
*/
#include <stdio.h>
main()
{
int dizi1[5]={7,3,6,0,9},dizi2[5]={9,0,7,3,6};
int i,c;
printf("diziler yer degismeden once\n");
printf("dizi1\tdizi2\t\n");
for(i=0;i<=4;i++)
printf("%d\t%d\t\n",dizi1[i],dizi2[i]);
for(i=0;i<=4;i++)
{
c=dizi1[i];
dizi1[i]=dizi2[i];
dizi2[i]=c;
}
printf("diziler yer degisdikten sonra\n");
printf("dizi1\tdizi2\t\n");
for(i=0;i<=4;i++)
printf("%d\t%d\t\n",dizi1[i],dizi2[i]);
}