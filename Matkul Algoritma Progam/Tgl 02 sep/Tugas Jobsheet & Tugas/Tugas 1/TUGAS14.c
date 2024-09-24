/*  
	Nama File      : Tugas14.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 04 September 2024 
	Deskripsi      : program ini untuk mencari ketinggian tanah di dalam suatu bidang datar
*/

#include<stdio.h>
#include<math.h>
#define PHI 3.14

int main()
{
	printf("Project Tugas no.14\n");
	printf("=========================\n");
	printf("Programer : Rahmat Dany\n");
	printf("NIM       : 24343124\n");
	printf("=========================\n");
	float d, k, t, p, l;
	// Masukkan variabel
	printf("Masukkan kedalaman= ");
	scanf("%f", &k);
	printf("Masukkan diameter= ");
	scanf("%f", &d);
	printf("Masukkan lebar= ");
	scanf("%f", &l);
	printf("Masukkan panjang= ");
	scanf("%f", &p);
	// Proses
	t = (PHI * ((d/2) * (d/2)) * k)/(l*p);
	// Hasil
	printf("Ketinggian tanah= %.2f", t);

	
	return 0;
}

