/* Nama File      : TUGAS2B.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 03 september 2024 
   Deskrip        : Program ini Menampilkan Hasil Perhitungan tinggi layangan berdasarkan sudut tali (elevasi) dan panjang tali terulur
*/

#include<stdio.h>
#include<math.h>
#define PHI 3.14

int main (){
    printf("Menghitung tahanan total arus dan tegangan pada rangkaian secara paralel\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
	float a, tali, sudut, radian;
	// Masukkan variabel yang dibutuhkan
	printf("Masukkan panjang tali=");
	scanf("%f", &tali);
	printf("Masukkan sudut elevai=");
	scanf("%f", &sudut);
	// Konversi sudut derajat ke radian
	radian = sudut * PHI / 180.00;
	// Menghitung sisi tegak
	a = tali * sin(radian);
	// Hasil
	printf("Tinggi layangan= %.2f Meter \n", a);
	
	return 0;
}
