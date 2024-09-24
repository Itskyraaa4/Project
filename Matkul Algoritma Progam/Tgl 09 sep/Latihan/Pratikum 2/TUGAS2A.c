/* Nama File      : TUGAS2A.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 09 september 2024 
   Deskrip        : program ini melakukan menkonversi waktu jam ke total detik dan sebaliknya
*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    printf("Progrm ini menkonversi waktu jam ke total detik dan sebaliknya\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
	int jj, mm, dd, totaldd;
	int jj2, mm2, dd2, totaldd2;
	char ch;
	// Masukkan variabel jam ke detik
	printf(" Konversi Jam ke Detik\n");
	printf("====================\n");
	printf("Masukkan Waktu (ex: 07:30:50)= ");
	scanf("%d%c%d%c%d", &jj ,&ch, &mm, &ch, &dd);
	// Proses
	totaldd = jj * 3600 + mm * 60 + dd;
	// Hasil
	printf("Konvrensi Detik: %d \n", totaldd);
	printf("====================\n");
	printf(" \n");
	// Masukkan variabell detik ke jam
	printf(" Konvrensi Detik ke Jam\n");
	printf("====================\n");
	printf("Masulan Detik: ");
	scanf("%d", &totaldd2);
	// Proses
	jj2 = totaldd2 / 3600;
	mm2 = (totaldd2%3600) /60;
	dd2 = ((totaldd2%3600)%60);
	// Hasil
	printf("Konvrens Jam: %d%c%d%c%d \n", jj2 ,ch, mm2, ch, dd2);
	printf("====================\n");
	printf(" \n");
	 
	return 0;
}
