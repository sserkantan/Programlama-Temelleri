//girilen sayının negatif olup olmadığını bulan program
Console.Write("Bir sayı giriniz ");
int sayi=Convert.ToInt32(Console.ReadLine());
if (sayi < 0) Console.WriteLine("negatif");
-------------------
//girilen sayının negatif veya pozitif olup olmadığını bulan program
Console.Write("Bir sayı giriniz ");
int sayi=Convert.ToInt32(Console.ReadLine());
if (sayi < 0) Console.WriteLine("negatif");
if (sayi > 0) Console.WriteLine("pozitif");
if (sayi == 0) Console.WriteLine("sıfır");
if(sayi<0) Console.WriteLine("negatif");
else if(sayi>0) Console.WriteLine("pozitif");
else Console.WriteLine("sıfır");
--------------------
//girilen sayının 0-10 11-20 21-30 arasında olduğunu kontrol eden program
Console.Write("Bir sayı giriniz ");
int sayi=Convert.ToInt32(Console.ReadLine());
if (sayi >= 0 && sayi <= 10) Console.WriteLine("sayı 0-10 arasında ");
if (sayi >= 11 && sayi <= 20) Console.WriteLine("sayı 11-20 arasında ");
if (sayi >= 21 && sayi <= 30) Console.WriteLine("sayı 21-30 arasında ");
if(sayi>=0)
if(sayi<=10) Console.WriteLine("sayı 0-10 arasında ");
else if(sayi<=20) Console.WriteLine("sayı 11-20 arasında ");
else if(sayi<=30) Console.WriteLine("sayı 21-30 arasında ");
---------------------
//girilen sayının 0-100 arasında olduğunu kontrol eden program
Console.Write("Bir sayı giriniz ");
int sayi=Convert.ToInt32(Console.ReadLine());
if (sayi >= 0 && sayi <= 100) Console.WriteLine("sayı 0-100 arasında ");
if(sayi>=0)
if(sayi<=100) Console.WriteLine("sayı 0-100 arasında ");
-------------------
/* girilen kalite değeri değer 0-30 arasında ise A kalite,
* 30-60 arasında ise B kalite
* 60-90 arasında ise C kalite
* 90 dan büyükse hatalı üretim
*/
Console.WriteLine("sayı giriniz");
int sayi = Convert.ToInt32(Console.ReadLine());
if (sayi <= 30) Console.WriteLine("A");
else if (sayi <= 60) Console.WriteLine("B");
else if (sayi <= 90) Console.WriteLine("C");
else Console.WriteLine("Hatalı üretim");
if (sayi <= 30) Console.WriteLine("A");
if (sayi>30 && sayi <= 60) Console.WriteLine("B");
if (sayi > 60 && sayi <= 90) Console.WriteLine("C");
if (sayi > 90) Console.WriteLine("Hatalı üretim