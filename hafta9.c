#include <stdio.h>
main()
{
int sayilar[5];
sayilar[0]=0;
sayilar[1]=1;
sayilar[2]=2;
sayilar[3]=3;
sayilar[4]=4;
printf("%d\n",sayilar[0]);
printf("%d\n",sayilar[1]);
printf("%d\n",sayilar[2]);
printf("%d\n",sayilar[3]);
printf("%d\n",sayilar[4]);
}
-------------------------------------------------------
#include <stdio.h>
main()
{
int sayilar[5];
int i;
for(i=0;i<=4;i++)
sayilar[i]=i;
for(i=0;i<=4;i++)
printf("%d\n",sayilar[i]);
}
-------------------------------------------------------
//ilk değer ataması
#include <stdio.h>
main()
{
int sayilar[5]={3,6,7,1,9};
int i;
for(i=0;i<=4;i++)
printf("%d\n",sayilar[i]);
}
-------------------------------------------------------
#include <stdio.h>
main()
{
int sayilar[5]={3,6};
int i;
for(i=0;i<=4;i++)
printf("%d\n",sayilar[i]);
}
-------------------------------------------------------
#include <stdio.h>
main()
{
int sayilar[5]={0};
int i;
for(i=0;i<=4;i++)
printf("%d\n",sayilar[i]);
}
-------------------------------------------------------
//1) 5 elamanlı bir dizi oluşturun, ilk elemanına 8 değeri atayın
#include <stdio.h>
main()
{
int sayilar[5];
sayilar[0]=8;
}
-------------------------------------------------------
//3) 5 elamanlı bir dizi oluşturun, son elemanına 8 değeri atayın
#include <stdio.h>
main()
{
int sayilar[5];
sayilar[4]=8;
}
-------------------------------------------------------
//4) 5 elamanlı bir dizi oluşturun, tum elemanlarına 8 değeri atayın
#include <stdio.h>
main()
{
//1.yol
int sayilar[5];
sayilar[0]=8;
sayilar[1]=8;
sayilar[2]=8;
sayilar[3]=8;
sayilar[4]=8;
//2.yol
int i;
for(i=0;i<5;i++)
sayilar[i]=8;
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//5) 5 elamanlı bir dizi oluşturun, dizi numaralarını değerlerine atayın
#include <stdio.h>
main()
{
//1.yol
int sayilar[5];
sayilar[0]=0;
sayilar[1]=1;
sayilar[2]=2;
sayilar[3]=3;
sayilar[4]=4;
//2.yol
int i;
for(i=0;i<5;i++)
sayilar[i]=i;
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//6) 5 elemanlı bir dizi oluşturun, sıfırıncı elemanına 1 degeri, birinci elamanına 2… olmak üzere tüm eleamlara bir
arttırarak değer atayın.
#include <stdio.h>
main()
{
//1.yol
int sayilar[5];
sayilar[0]=1;
sayilar[1]=2;
sayilar[2]=3;
sayilar[3]=4;
sayilar[4]=5;
//2.yol
int i;
for(i=0;i<5;i++)
sayilar[i]=i+1;
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//7) 5 elamanlı bir dizi oluşturun, elamanlara sırayla 1,2,3,4,5 ilk değerleri atayın.
#include <stdio.h>
main()
{
//1.yol
int i;
int sayilar[5]={1,2,3,4,5};
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//ilk degerleri sırayla 5,5,5,5,5 olan bir dizi oluşturun. Sıfırıncı elamanına 4 değerini atayın.
#include <stdio.h>
main()
{
//1.yol
int i;
int sayilar[5]={5,5,5,5,5};
sayilar[0]=4;
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//10) ilk degerleri 5,5,5,5,5 olan diziyi oluşturun. Değerlerinin toplamını son elemana atayın.
#include <stdio.h>
main()
{
//1.yol
int i;
int toplam=0;
int sayilar[5]={5,5,5,5,5};
for(i=0;i<5;i++)
toplam=toplam+sayilar[i];
sayilar[4]=toplam;
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//11) ilk degerleri 3,5,2,7,1 olan diziyi oluşturun. Değerlerinin ortalamasını son elemana atayın.
#include <stdio.h>
main()
{
int i;
double toplam=0;
double sayilar[5]={3,5,2,7,1};
for(i=0;i<5;i++)
toplam=toplam+sayilar[i];
sayilar[4]=toplam/5.0;
for(i=0;i<5;i++)
printf("dizinin %d. elemani %f\n",i,sayilar[i]);
}
-------------------------------------------------------
//16) ilk degerleri sırayla 3,5,2,7,1 olan bir dizi oluşturun. Her Elemana değerinin bir fazlasını atayın.
#include <stdio.h>
main()
{
int i;
int sayilar[5]={3,5,2,7,1};
for(i=0;i<5;i++)
sayilar[i]++; //sayilar[i]=sayilar[i]+1;
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//16) ilk degerleri sırayla 3,5,2,7,1 olan bir dizi oluşturun.Her Elemana değerinin yarısını atayın.
#include <stdio.h>
main()
{
int i;
double sayilar[5]={3,5,2,7,1};
for(i=0;i<5;i++)
sayilar[i]=sayilar[i]/2.0;
for(i=0;i<5;i++)
printf("dizinin %d. elemani %f\n",i,sayilar[i]);
}
-------------------------------------------------------
//18) ilk degerleri sırayla 3,5,2,7,1 olan bir dizi oluşturun. Her Elemana değerinin faktöryelini atayın.
#include <stdio.h>
main()
{
int i,j,f=1;
int sayilar[5]={3,5,2,7,1};
for(i=0;i<5;i++)
{
f=1;
for(j=1;j<=sayilar[i];j++)
f=f*j;
sayilar[i]=f;
}
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//21) ilk degerleri sırayla 1,2,3,4,5 olan bir dizi oluşturun. Her elemana degerinin karesini atayın.
#include <stdio.h>
main()
{
int i,j,f=1;
int sayilar[5]={1,2,3,4,5};
for(i=0;i<5;i++)
sayilar[i]=sayilar[i]*sayilar[i];
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//24) ilk degerleri sırayla 7,3,6,0,9 olan bir dizi oluşturun. En küçük elemanının değerini k ya yazın.
#include <stdio.h>
main()
{
int i,enk;
int sayilar[5]={7,3,6,0,9};
enk=sayilar[0];
for(i=1;i<5;i++)
if(enk>sayilar[i]) enk=sayilar[i];
printf("dizinin en kucuk degeri %d\n",enk);
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//25) ilk degerleri sırayla 7,3,6,0,9 olan bir dizi oluşturun. En büyük elamanının değerini k ya yazın.
#include <stdio.h>
main()
{
int i,enb;
int sayilar[5]={7,3,6,0,9};
enb=sayilar[0];
for(i=1;i<5;i++)
if(enb<sayilar[i]) enb=sayilar[i];
printf("dizinin en buyuk degeri %d\n",enb);
for(i=0;i<5;i++)
printf("dizinin %d. elemani %d\n",i,sayilar[i]);
}
-------------------------------------------------------
//Klavyeden girilen 5 adet tamsayıyı, giriş sırasının tersinden ekrana yazan C programını kodlayınız.
#include <stdio.h>
main()
{
int i;
int dizi[5];
for(i=0;i<=4;i++)
{
printf("%d.sayiyi giriniz ",i+1);
scanf("%d",&dizi[i]);
}
for(i=4;i>=0;i--)
printf("%d.sayi %d\n",i+1,dizi[i]);
}