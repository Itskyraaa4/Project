/*  
	Nama File      : Tugas1.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 04 September 2024 
	Deskripsi      : program ini menghitung total belanja setelah kena pajak
*/

#include<stdio.h>
#define PAJAK 0.15

int main()
{
	printf("Project Tugas no.1\n");
	printf("=========================\n");
	printf("Programer : Rahmat Dany\n");
	printf("NIM       : 24343124\n");
	printf("=========================\n");
	float nilai1, nilai2, nilai3, nilai4, biaya, total;
	//Masukan nilai belanjaan
	printf("Masukkan nilai belanjaan 1=");
	scanf("%f", &nilai1);
	printf("Masukkan nilai belanjaan 2=");
	scanf("%f", &nilai2);
	printf("Masukkan nilai belanjaan 3=");
	scanf("%f", &nilai3);
	printf("Masukkan nilai belanjaan 4=");
	scanf("%f", &nilai4);
	//Menjumlahkan total belanjaan
	biaya=nilai1 + nilai2 + nilai3 + nilai4;
	//Total belanjaan setelah pajak
	total= biaya + (biaya * PAJAK);
	//Menampilkan hasil total belanjaan setelah kena pajak
	printf("Total biaya belanjaan= %.2f\n", total);
	
	return 0;
}.
