/* Nama File      : latihan2c.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 03 september 2024 
   Deskrip        : program ini menghitung biaya fotokopi
*/

#include<Stdio.h>
#define HARGA 500

int main()
{
    printf("Menghitung Konvrensi Suhu Dari Celcius\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");

	float lembar,biaya;
	printf("Masukan jumlah lembar=");
	scanf("%f", &lembar);
	biaya= lembar * HARGA;
	printf("Biaya yang di perlukan =%.2f\n", biaya);
	
	return 0;
}
