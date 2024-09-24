/* Nama File      : Latihan3C.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 10 september 2024 
   Deskrip        : program ini membaca karakter getchar()
*/

#include<stdio.h>

int main ()
{
    printf("Program ini membaca karakter getchar()\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
	char ch;

    printf("Tolong masukkan sebuah karakter:\n");
    ch = getche(); // membaca dan menampilkan karakter
    printf("\nAnda memasukkan karakter berikut: %c \n", ch);
	
	return 0;
}
