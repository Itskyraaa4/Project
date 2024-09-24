/*  
	Nama File      : Tugas12.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 04 September 2024 
	Deskripsi      : program ini untuk konversi waktu
*/

#include<stdio.h>
#define THN 365
#define BLN 30
#define MGG 7

int main()
{
	printf("Project Tugas no.12\n");
	printf("=========================\n");
	printf("Programer : Rahmat Dany\n");
	printf("NIM       : 24343124\n");
	printf("=========================\n");
    int toha, thn, bln, mgg, siha;
	// Masukkan variabel
	printf("Masukkan jumlah hari= ");
	scanf("%d", &toha);fflush(stdin);
	// Proses menghitung
	thn = toha / THN;
	bln = (toha % THN)/BLN;
	mgg = ((toha % THN)%BLN)/MGG;
	siha = ((toha % THN)%BLN)%MGG;
	// Menampilkan hasil
	printf("Total Hari   = %d hari \n", toha);
	printf("Hasil Tahun  = %d tahun \n", thn);
	printf("Hasil Bulan  = %d bulan \n", bln);
	printf("Hasil Minggu = %d minggu \n", mgg);
	printf("Sisa Hari    = %d hari \n", siha);
    
	return 0;
}
