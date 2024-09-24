/* 		nama file		:latihan2a.c
		programer		:Rahmat Dany ()
		tgl. pembuatan	:03 september 2024
		deskripsi		:program ini melakukan perhitungan luas dan keliling persegi panjang
*/
#include<stdio.h> 

int main()
{
	printf("Menghitung Luas & Keliling Persegi Panjang\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
	float panjang, lebar, luas, kel;
	//Pemasukan Nilai
	printf("panjang=");
	scanf("%f",&panjang);
	printf("lebar=");
	scanf("%f",&lebar);
	//Proses Penghitungan
	luas=panjang * lebar;
	kel=2 * panjang+2 * lebar;
	//Menampilkan Hasil
	printf("luas=%.2f\n",luas);
	printf("kel=%.2f\n",kel);
	
	return 0;
}
