/* 		nama file		:latihan2b.c
		programer		:Rahmat Dany (24343124)
		tgl. pembuatan	:03 september 2024
		deskripsi		:program ini melakukan perhitungan luas dan keliling persegi panjang
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	printf("Menghitung Sisi Miring Segitiga Siku-siku\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
	float A,B,C;
	//Pemasukan nilai
	printf("sisi A=");
	scanf("%f",&A);
	printf("sisi B=");
	scanf("%f",&B);
	//Proses penghitungan
	C=sqrt(A*A+B*B);
	//Penampilan hasil
	printf("sisi miring =%.2f\n",C);
	
	return 0;
}
