/*  
	Nama File      : Tugas9.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 04 September 2024 
	Deskripsi      : program ini menentukan nilai akifalen suhu dan niali temperatur 
*/

#include<stdio.h>
#define F 9.0
#define R 4.0
#define C 5.0

int main()
{
	printf("Project Tugas no.9\n");
	printf("=========================\n");
	printf("Programer : Rahmat Dany\n");
	printf("NIM       : 24343124\n");
	printf("=========================\n");
    float cel, fah, rea;
	// Masukkan nilai suhu dalam celcius
	printf("Masukkan nilai suhu dalam celcius= ");
	scanf("%f", &cel);
	// Konversi
	fah = (9.00 / 5.00) * cel + 32.00;
	rea = (4.00 / 5.00) * cel;
	// Tampilkan informasi
	printf("Nilai suhu skala Celsius= %.2f \n", cel);
	printf("Nilai suhu skala Fahrenheit= %.2f \n", fah);
	printf("Nilai suhu skala Reamur= %.2f \n", rea);
    
    return 0;
}
