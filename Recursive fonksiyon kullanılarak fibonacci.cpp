#include <stdio.h> // Buralar program�m�z�n �al��mas� i�in gerekli olan 
#include <conio.h>   // k�t�phanelerdir. �ni�lemciler diyede ge�erler. Gerekli      
                      //a��klama ileride yap�lacakt�r.

int fibo(int say); //Bu a�a��da kullanaca��m�z fonksiyonun tan�m�d�r.

int main(){        //Program�m�z�n �al��mas� i�in gerekli olan fonksiyon.
    int sayi;      //De�i�kenimiz. Integer tipinde yani tamsay�.
    printf("Bir sayi giriniz:"); 
    scanf("%d",&sayi);
    printf("Sonuc: %d",fibo(sayi)); //fibo(sayi) fibo �eklinde tan�mlanm�� olan    
    getch();                         /// fonksiyonumuza sayi de�erini g�nderir.
    return (0); 
     }
  
  int fibo(int n){ //fibo isminde int tipindeki fonksiyonumuz. Parantez i�inde    
                   //kalan k�s�m yukar�da (fibo(sayi)) g�nderilen sayi 
                   //isimli parametreyi n isimli de�i�kene aktar�r.  
if((n==0) || (n==1)){
return n;
}
  else return (fibo(n-1)+fibo(n-2));//Recursive fonksiyon kullan�larak fibonacci     
}                                   //de�eri hesaplanarak geri de�er d�nd�r�l�r.
   
