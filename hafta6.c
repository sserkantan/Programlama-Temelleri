//girilen iki sayının ortalamasını hesaplayan program
#include <stdio.h>
main()
{
    int sayi1,sayi2;
    printf("sayi giriniz "); scanf("%d",&sayi1);
    printf("sayi giriniz "); scanf("%d",&sayi2);
    double ortalama;
    ortalama=(sayi1+sayi2)/2.0;
    //tamsayı / tamsayı = tamsayı
    // 5+6    /  2       =   5
    //tamsayı / ondalıklısayı  = ondalıklısayı
    // 5+6    /      2.0       =     5.5
    printf("sayilarin ortalamasi %f",ortalama);
    
}

-----------------------------------

//girilen iki sayının ortalamsını hesaplayan program
#include <stdio.h>
main()
{
    int sayi1,sayi2;
    printf("sayi giriniz "); scanf("%d",&sayi1);
    printf("sayi giriniz "); scanf("%d",&sayi2);

   if(sayi1>sayi2) printf("sayi1 buyuk");
    else printf("sayi2 buyuk veya esitler");
    
}

-----------------------------

//girilen sayının negatif olup olmadığını bulan program#include <stdio.h>
main()
{
    int sayi;
    printf("sayi giriniz "); scanf("%d",&sayi);
    
    if(sayi<0) printf("negatif");
    
    
}

------------------------------

//girilen sayının negatif veya pozitif olup olmadığını bulan programmain()
#include <stdio.h>
main()
{
    int sayi;
    printf("sayi giriniz "); scanf("%d",&sayi);
    
    if(sayi<0) printf("negatif");
    if(sayi>0) printf("pozitif");
    if(sayi==0) printf("sıfır");
    
}

-----------------------

//girilen sayının negatif,pozitif veya sıfır olup olmadığını bulan programmain()
#include <stdio.h>
main()
{
    int sayi;
    printf("sayi giriniz "); scanf("%d",&sayi);
    
    if(sayi<0) printf("negatif");
     else if(sayi>0) printf("pozitif");
      else printf("sıfır");
    
}

---------------------------

//girilen sayının tek veya çift olduğunu bulan program
// % -> bölümden kalan
// 5%2=1   4%2=0  2ye bölümden kalan 0sa sayı çift kalan 1se sayı tek

#include <stdio.h>
main()
{
    int sayi;
    printf("sayi giriniz "); scanf("%d",&sayi);
    
    
    if(sayi%2==0) printf("Cift");  
      else printf("tek");
  
}

-----------------------------

//Girilen 3 sayıdan büyük olanı bulup ekrana yazan C programını yazınız

#include <stdio.h>
main()
{
    int s1,s2,s3;
    printf("sayi giriniz ");scanf("%d",&s1);
    printf("sayi giriniz ");scanf("%d",&s2);
    printf("sayi giriniz ");scanf("%d",&s3);

/*    
    s1>s2 ve s1>s3    s1 dıgerlerınden buyuk
    s2>s1 ve s2>s3    s2 dıgerlerınden buyuk
    s3>s1 ve s3>s2    s3 dıgerlerınden buyuk
*/
    
    if(s1>s2 && s1>s3) printf("buyuk olan %d",s1);
    if(s2>s1 && s2>s3)  printf("buyuk olan %d",s2);
    if(s3>s1 && s3>s2)  printf("buyuk olan %d",s3);
    
    int enbuyuk;
    enbuyuk=s1;
    if(s2>enbuyuk) enbuyuk=s2;
    if(s3>enbuyuk) enbuyuk=s3;
    printf("buyuk olan %d",enbuyuk);
    
}

-----------------------

//Girilen sayının 0-10   11-20    21-30 arasında olduğunu bulan program

#include <stdio.h>
main()
{
    int sayi;
    printf("sayi giriniz ");scanf("%d",&sayi);
    
    if(sayi>=0 && sayi<=10) printf("sayi 0-10 arasinda");
    if(sayi>=11 && sayi<=20) printf("sayi 11-20 arasinda");
    if(sayi>=21 && sayi<=30) printf("sayi 21-30 arasinda");
    
    //ikinci yontem
    if(sayi>=0)
     if(sayi<=10) printf("sayi 0-10 arasinda");
      else if(sayi<=20) printf("sayi 11-20 arasinda");
       else if(sayi<=30) printf("sayi 21-30 arasinda");

    
}

-----------------------

/*Vize ve final notları girildikten sonra aşağıdaki tabloya göre öğrencinin harf
notuna karar verip gösteren C programını yazınız. Program aşağıdaki
kurallara göre çalışmalıdır.
Başarı ortalaması= Vize ‘nin %40’ı +Finalin %60’ı
Başarı ortalaması;
50’den küçük olanlar için F
50 ve 59 arası için D
60 ve 69 arası için C
70 ve 79 arası için B
80 ve yukarısı için A
*/
#include <stdio.h>
main()
{
    int vize,final;
    double ortalama;
    printf("vize giriniz ");scanf("%d",&vize);
    printf("final giriniz ");scanf("%d",&final);
    ortalama=vize*0.4+final*0.6;
    printf("not ortalamasi %f ",ortalama);
    if(ortalama<50) printf(" F ");
    if(ortalama>=50 && ortalama<60) printf(" D ");
    if(ortalama>=60 && ortalama<70) printf(" C ");
    if(ortalama>=70 && ortalama<80) printf(" B ");
    if(ortalama>=80) printf(" A ");
    
    if(ortalama<50) printf(" F ");
     else if(ortalama<60) printf(" D ");
      else if(ortalama<70) printf(" C ");
       else if(ortalama<80) printf(" B ");
        else printf(" A ");
    
}

-----------------------

/* dışarıdan girilen kalite değerine göre
0-30 arasında ise A kalite,
30-60 arasında ise B kalite
60-90 arasında ise C kalite
90 dan büyükse hatalı üretim mesajını veren program
*/

#include <stdio.h>
main()
{
    int kalite;
    printf("kalite degerini giriniz ");
    scanf("%d", &kalite);
    if(kalite<=30) printf("A Kalite");
      else if(kalite<=60) printf("B Kalite");
      else if(kalite<=90) printf("C Kalite");
       else printf("Hatali Uretim");
    
}

----------------------