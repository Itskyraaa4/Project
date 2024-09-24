/* Nama File      : Latihan3B.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 10 september 2024 
   Deskrip        : program ini menampilkan teks
*/

#include<stdio.h>

int main ()
{
    printf("Program ini menampilkan teks\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
	char text[100];

    printf("Masukkan beberapa baris teks :\n");
    // Membaca beberapa baris teks dengan gets()
    gets(text);

    printf("\nAnda memasukkan teks berikut:\n");

    // Menampilkan teks dengan puts()
    puts(text);

	
	return 0;
}
