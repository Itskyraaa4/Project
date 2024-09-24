/* Nama File      : LatihanA.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 10 september 2024 
   Deskrip        : program ini represtasi input output berformat
*/

#include<stdio.h>

int main ()
{
    printf("Program ini represtasi input output berformat\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
	char name[50];
    int age;
    // Input dengan format
    printf("Masukkan nama Anda: ");
    scanf("%s", name);
    printf("Masukkan usia Anda: ");
    scanf("%d", &age);
    // Menampilkan informasi dengan format
    printf("Halo, %s! Anda berusia %d tahun.\n", name, age);
	
    return 0;
}

