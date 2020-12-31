//girilen sayının karekökünü hesaplama
// sqrt(x) x’in karakökünü alır sqrt(900.0)=30.0
#include <stdio.h>
#include <math.h>
main()
{
int sayi;
printf("sayi giriniz");
scanf("%d",&sayi);
double sonuc=sqrt(sayi);
printf("girilen sayinin karekoku %f",sonuc);
}
-------------------------------------------------------------------------------------
//girilen sayının mutlak değerini hesaplama
// fabs(x) x’in mutlak değeri fabs(-5.0)=5.0
#include <stdio.h>
#include <math.h>
main()
{
int sayi;
printf("sayi giriniz");
scanf("%d",&sayi);
double sonuc=fabs(sayi);
printf("girilen sayinin mutlak degeri %f",sonuc);
}
--------------------------------------------------------------------------------
//sayının yuvarlanması
// ceil(x) x’i kendisinden büyük en küçük sayıya yuvarlar. ceil(9.2)=10.0
//floor(x) x’i kendisinden küçük en büyük sayıya yuvarlar. floor(9.8)= 9.0
//nearbyint(x) x’i en yakın tamsayıya yuvarlar
#include <stdio.h>
#include <math.h>
main()
{
double sayi1,sayi2;
printf("sayi1 giriniz ");
scanf("%lf",&sayi1);
printf("sayi2 giriniz ");
scanf("%lf",&sayi2);
double sonuc=sayi1/sayi2;
printf("sayi1/sayi2 sonucu %f\n",sonuc);
printf("ceil ile yuvarlama %f\n",ceil(sayi1/sayi2));
printf("floor ile yuvarlama %f\n",floor(sayi1/sayi2));
printf("nearbyint ile yuvarlama %f\n",nearbyint(sayi1/sayi2));
}
-------------------------------------------------------------------------
//pow(x,y) x üzeri y hesaplamak için pow(2.0,3.0)=8.0
#include <stdio.h>
#include <math.h>
main()
{
double sayi1,sayi2;
printf("sayi1 giriniz ");
scanf("%lf",&sayi1);
printf("sayi2 giriniz ");
scanf("%lf",&sayi2);
double sonuc=pow(sayi1,sayi2);
printf("islem sonucu %f",sonuc);
}
------------------------------------------------------------------------------
/*
rand() rastgele sayı üretir.
0-32767 arası değer üretir.Bunu istediğimiz aralığa indirmek için mod(%) işlemini kullanırız.
sayi%10 ->0..9 (sayi%10)+1 ->1..10
30256%10=6 (30256%10)+1=7
152%10=2 (152%10)+1=3
7%10=7 (7%10)+1=8
20%10=0 (20%10)+1=1
129%10=9 (129%10)+1=10
srand() rastgele sayı üretecinin başlangıç noktası değiştirir.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
//0-9 arası rastgele 10 sayı üretir.
int sayi,i;
srand(time(NULL));
for(i=1;i<=10;i++){
sayi=rand()%10;
printf("%d\n",sayi);
}
printf("--------------\n");
//1-10 arası rastgele 10 sayı üretir.
for(i=1;i<=10;i++){
sayi=rand()%10+1;
printf("%d\n",sayi);
}
}
---------------------------------------------------------------------------
/*sayı tahmin oyunu, bu oyunda bilgisayarın tuttuğu sayıyı tahmin etmeye çalışıyoruz.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
//1-100 arası rastgele sayı üretir.
int sayi,tahmin;
srand(time(NULL));
sayi=(rand()%100)+1;
int puan=100;
do
{
printf("tahmininizi giriniz : ");
scanf("%d",&tahmin);
if(tahmin>sayi) printf("azalt\n");
if(tahmin<sayi) printf("artir\n");
if(tahmin==sayi) break;
puan-=10;
if(puan<=0) break;
}while(1);
if(puan<=0) printf("bulmaya puanin yetmedi :(");
else printf("tebrikler buldun!! %d puan aldın",puan);
}
----------------------------------------------------------------------------
/*
sayı tahmin oyunu, bilgisayar bizim tuttuğumuz sayıyı tahmin etmeye çalışır
sayı=80
tahmin=50 > artır
sayı 50-100 arasında
tahmin=90 < azalt
sayı 50-90 arasında
tahmin=70 >artır
sayı 70-90 arasında
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
int sayi,tahmin,i;
srand(time(NULL));
int tavan=100,taban=1,cevap;
printf("aklından bir sayi tut ben tahmin edeyim\n");
printf("artirmam icin 1 azaltmam icin 2 de\n");
do{
sayi=(rand()%(tavan-taban+1))+taban;
printf("tuttugun sayi %d mi?\n",sayi);
printf("artir(1) - azalt(2) - buldun (3) : ");
scanf("%d",&cevap);
if(cevap==1) taban=sayi;
if(cevap==2) tavan=sayi;
if(cevap==3) break;
}while(1);
printf("tuttugun sayiyi buldum sayi %d",sayi);
}