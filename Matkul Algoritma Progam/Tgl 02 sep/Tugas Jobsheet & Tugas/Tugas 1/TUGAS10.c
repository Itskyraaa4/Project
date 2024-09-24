/*  
	Nama File      : Tugas10.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 04 September 2024 
	Deskripsi      : program ini untuk konversi waktu
*/

#include<stdio.h>

int main()
{
	printf("Project Tugas no.10\n");
	printf("=========================\n");
	printf("Programer : Rahmat Dany\n");
	printf("NIM       : 24343124\n");
	printf("=========================\n");
	float jj, mm, dd, totaldd;
    // Masukkan variabel
	printf("Masukkan Jam= ");
	scanf("%f", &jj);
	printf("Masukkan Menit= ");
	scanf("%f", &mm);
	printf("Masukkan Detik= ");
	scanf("%f", &dd);
	printf("%.0f : %.0f : %.0f \n", jj, mm, dd);
	// Konversi ke detik
	totaldd = (jj * 3600) + (mm * 60) + dd;
	// Hasil
	printf("Total Detik= %.0f \n", totaldd);
	printf("==================== \n");
	// Masukkan variabel (detik ke format jj:mm:dd
	float jj2, mm2, dd2;
	int totaldd2;
	printf("Masukkan total detik yang mau di konversi= ");
	scanf("%d", &totaldd2);
	// Konversi
	jj2 = totaldd2 / 3600;
	mm2 = (totaldd2 % 3600)/ 60;
	dd2 = totaldd2 % 60;
	// Hasil
	printf("%.0f : %.0f : %.0f \n", jj2, mm2, dd2);
    
    return 0;
}
