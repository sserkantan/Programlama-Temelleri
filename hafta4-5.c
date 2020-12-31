//ilk program
#include <stdio.h>
main()
{
printf("merhaba");
}
//kaydederken Kayıt türü olarak "C Source File" seçilmeli
//Çalıştırmak için "F11" veya "Çalıştır" menüsünden "Derle & Çalıştır"
-------------------------
//değişken tanımlama
#include <stdio.h>
main()
{
//değişkenin türü değişkenin adı
int sayi;
sayi=5;
int sayi2=5;
char karakter ='k';
double sayi3=5.256;
{
int s1;
{
s1=7;
}
}
s1=8; //hata
}
--------------------------------
//printf fonksiyonu
#include <stdio.h>
main()
{
int sayi=5;
printf("degiskenin degeri %d \n",sayi);
printf("degiskenin degeri %5d \n",sayi);
printf("degiskenin degeri %+5d \n",sayi);
printf("degiskenin degeri %-5d \n",sayi);
printf("degiskenin degeri %05d \n",sayi);
double sayi2=5.36895;
printf("degiskenin degeri %f \n",sayi2);
printf("degiskenin degeri %10f \n",sayi2);
printf("degiskenin degeri %+10f \n",sayi2);
printf("degiskenin degeri %-10f \n",sayi2);
printf("degiskenin degeri %010f \n",sayi2);
printf("degiskenin degeri %010.2f \n",sayi2);
printf("degiskenin degeri %.2f \n",sayi2);
}
------------------------------
//Üçgenin alanını hesaplayan program
#include <stdio.h>
main()
{
int taban,yukseklik;
double alan;
printf("taban uzunlugunu giriniz ");
scanf("%d",&taban);
printf("yukseklik uzunulugunu giriniz ");
scanf("%d",&yukseklik);
alan=(taban*yukseklik)/2.0;
printf("ucgenin alani %.2f",alan);
}
----------------------------------
//vize ve final ortalaması hesaplayan program
#include <stdio.h>
main()
{
int vize,final;
double ortalama;
printf("vize notunu giriniz ");
scanf("%d",&vize);
printf("final notunu giriniz ");
scanf("%d",&final);
ortalama=vize*0.2 + final *0.8;
printf("girilen notlarin ortalamasi %f",ortalama);
}