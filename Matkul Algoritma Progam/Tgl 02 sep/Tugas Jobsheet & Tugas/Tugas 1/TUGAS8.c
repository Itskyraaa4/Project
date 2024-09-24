/*  
	Nama File      : Tugas8.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 04 September 2024 
	Deskripsi      : program ini menghitung kebutuhan kalori manusia
*/

#include<stdio.h>

int main()
{
	printf("Project Tugas no.8\n");
	printf("=========================\n");
	printf("Programer : Rahmat Dany\n");
	printf("NIM       : 24343124\n");
	printf("=========================\n");
	char konfirmasi;
	float x1, y1, x2, y2, titikp, titikq, titiktengahp, titiktengahq;
	printf("Masukkan koordinat X1= ");
	scanf("%f", &x1);
	printf("Masukkan koordinat Y1= ");
	scanf("%f", &y1);
	printf("Masukkan koordinat X2= ");
	scanf("%f", &x2);
	printf("Masukkan koordinat Y2= ");
	scanf("%f", &y2);
	// Konfirmasi data titik p dan q
	printf("titik p (%.0f, %.0f)", x1, y1);
	printf("titik q (%.0f, %.0f) \n", x2, y2);
	printf("Apakah koordinat sudah benar? (Y/N)");
	scanf(" %c", &konfirmasi);
	if (konfirmasi == 'Y' || konfirmasi == 'y'){
		titiktengahp = (x1+x2)/2.00;
		titiktengahq = (y1+y2)/2.00;
		printf("Titik tengah= %.0f, %.0f", titiktengahp, titiktengahq);
	}
	else {
		printf("Silahkan restart program \n");
	}
	
    return 0;
}
