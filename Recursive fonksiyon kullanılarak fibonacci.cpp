#include <stdio.h> // Buralar programýmýzýn çalýþmasý için gerekli olan 
#include <conio.h>   // kütüphanelerdir. Öniþlemciler diyede geçerler. Gerekli      
                      //açýklama ileride yapýlacaktýr.

int fibo(int say); //Bu aþaðýda kullanacaðýmýz fonksiyonun tanýmýdýr.

int main(){        //Programýmýzýn çalýþmasý için gerekli olan fonksiyon.
    int sayi;      //Deðiþkenimiz. Integer tipinde yani tamsayý.
    printf("Bir sayi giriniz:"); 
    scanf("%d",&sayi);
    printf("Sonuc: %d",fibo(sayi)); //fibo(sayi) fibo þeklinde tanýmlanmýþ olan    
    getch();                         /// fonksiyonumuza sayi deðerini gönderir.
    return (0); 
     }
  
  int fibo(int n){ //fibo isminde int tipindeki fonksiyonumuz. Parantez içinde    
                   //kalan kýsým yukarýda (fibo(sayi)) gönderilen sayi 
                   //isimli parametreyi n isimli deðiþkene aktarýr.  
if((n==0) || (n==1)){
return n;
}
  else return (fibo(n-1)+fibo(n-2));//Recursive fonksiyon kullanýlarak fibonacci     
}                                   //deðeri hesaplanarak geri deðer döndürülür.
   
