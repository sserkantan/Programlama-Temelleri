//10dan 1 ekadar olan sayıları yazan program
#include <stdio.h>
main()
{
int sayi=10;
while(sayi>=1)
{
printf("%d\n",sayi);
sayi--;
}
}
-----------------------------------------------------
//10dan 1 ekadar olan sayıları yazan program
#include <stdio.h>
main()
{
for(sayi=10;sayi>=1;sayi--)
{
printf("%d\n",sayi);
}
}
-----------------------------------------------------
//Klavyeden girilen pozitif bir tamsayının asal olup olmadığını
//ekrana yazdıran c programını kodlayınız
//Bir ve kendisinden başka tam böleni olmayan sayıya asal denir
/* 5%5=0
5%4=1
5%3=2
5%2=3
5%1=0
*/
#include <stdio.h>
main()
{
int sayi,i,s=0;
printf("sayi giriniz ");
scanf("%d",&sayi);
for(i=1;sayi>=i;i++)
{
if(sayi%i==0) s++;
}
if(s<=2) printf("girilen sayi asaldir");
else printf("girilen sayi asal degildir");
}
-----------------------------------------------------
//kısaltılmış yöntem
#include <stdio.h>
main()
{
int sayi,i,s=0;
printf("sayi giriniz ");
scanf("%d",&sayi);
for(i=2;sayi/2>=i;i++) //sayının yarısından büyük olanları bölme işleminden çıkardık
{
if(sayi%i==0) s++;
}
if(s<=2) printf("girilen sayi asaldir");
else printf("girilen sayi asal degildir");
}
-----------------------------------------------------
#include <stdio.h>
main()
{
int sayi=1;
do
{
printf("%d\n",sayi);
sayi++;
}while(sayi<=10);
//-----------------
sayi=1;
while(sayi<=10)
{
printf("%d\n",sayi);
sayi++;
}
}
-----------------------------------------------------
#include <stdio.h>
main()
{
n=0;
for(i=1;i<=3;i++)//dıştaki döngü
for(j=1;j<=3;j++)//içteki döngü
n=n+1;
}
/*
i j n
1 1 1
1 2 2
1 3 3
2 1 4
2 2 5
2 3 6
3 1 7
3 2 8
3 3 9
*/
-----------------------------------------------------
/*Aşağıdaki gibi bir piramit oluşturan program parçasını yazmak için iç
*
**
***
****
*****
*/
#include <stdio.h>
main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
printf("*");
printf("\n");
}
}
-----------------------------------------------------
//break deyimi
#include <stdio.h>
main()
{
int i;
for(i=1;i<=10;i++)
{
if(i==5) break;
printf("%d\n",i);
}
}
-----------------------------------------------------
//continue deyimi
#include <stdio.h>
main()
{
int i;
for(i=1;i<=10;i++)
{
if(i==5) continue;
printf("%d\n",i);
}
}
-----------------------------------------------------
//1-100 arası tek sayılar
#include <stdio.h>
main()
{
int i;
for(i=1;i<=100;i++)
{
if(i%2==0) continue;
printf("%d\n",i);
}
}
-----------------------------------------------------
//Başlangıç ve bitiş değeri kullanıcı tarafından verilmiş bir
//aralıktaki sayıların toplamını bulan program
#include <stdio.h>
main()
{
int baslangic,bitis,toplam=0,i;
printf("baslangic degerini giriniz ");
scanf("%d",&baslangic);
printf("bitis degerini giriniz ");
scanf("%d",&bitis);
for(i=baslangic;i<=bitis;i++)
{
printf("%d\n",i);
toplam+=i;
}
printf("araliktaki sayilarin toplami %d",toplam);
}
-----------------------------------------------------
//Girilen 10 sayının en büyük, en küçük, pozitif sayı sayısı ve
//pozitif sayıların ortalamasını bulan program
#include <stdio.h>
main()
{
int i,sayi,enb,enk,pss=0,pst=0;
double pso;
printf("1. sayiyi giriniz "); scanf("%d",&sayi);
enb=sayi;enk=sayi;
if(sayi>0){ pss++;pst+=sayi;}
for(i=2;i<=10;i++)
{
printf("%d. sayiyi giriniz ",i);scanf("%d",&sayi);
if(sayi>enb) enb=sayi;
if(sayi<enk) enk=sayi;
if(sayi>0)
{
pss++;
pst+=sayi;
}
}
pso=pst/(double)pss;
printf("sayilarin en kucugu %d\n",enk);
printf("sayilarin en buyugu %d\n",enb);
printf("pozitif sayi sayisi %d\n",pss);
printf("pozitif sayilarin toplami %d\n",pst);
printf("pozitif sayilarin ortalamasi %f",pso);
}
-----------------------------------------------------
//1'den N'e kadar olan sayıların karelerini hesaplayıp
//ekrana yazan program
#include <stdio.h>
main()
{
int n,i;
printf("sayi sayisini giriniz ");
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("%d %d\n",i,i*i);
}
-----------------------------------------------------
//çarpım tablosu
#include <stdio.h>
main()
{
int i,j;
for(i=1;i<=10;i++)
for(j=1;j<=10;j++)
printf("%d x %d = %d \n",i,j,i*j);
}