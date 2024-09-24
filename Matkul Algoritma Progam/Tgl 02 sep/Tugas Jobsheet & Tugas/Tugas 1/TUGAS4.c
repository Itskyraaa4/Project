/*  
	Nama File      : Tugas4.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 04 September 2024 
	Deskripsi      : program ini menghitung panjang rusuk
*/

#include<stdio.h>
#define PHI 3.14

int main()
{
	printf("Project Tugas no.4\n");
	printf("=========================\n");
	printf("Programer : Rahmat Dany\n");
	printf("NIM       : 24343124\n");
	printf("=========================\n");
    float sisikubus, rusukkubus;
	float rusukbalok, panjangbalok, lebarbalok, tinggibalok;
	float rusuksilinder, diameter, tinggisilinder, kelilingsilinder;
	// Masukkan variabel kubus
	printf("Masukkan nilai sisi kubus: ");
	scanf("%f", &sisikubus);
	// Menghitung total panjang rusuk kubus
	rusukkubus = 12 * sisikubus;
	// Hasil
	printf("Total panjang rusuk kubus: %.2f \n", rusukkubus);
	printf("=================================== \n");
	
	// Masukkan variabel balok
	printf("Masukkan panjang balok= ");
	scanf("%f", &panjangbalok);
	printf("Masukkan lebarbalok= ");
	scanf("%f", &lebarbalok);
	printf("Masukkan tinggi balok= ");
	scanf("%f", &tinggibalok);
	// Menghitung total panjang rusuk balok
	rusukbalok = 4.00 * (panjangbalok + lebarbalok + tinggibalok);
	// Hasil
	printf("Total panjang rusuk balok: %.2f \n", rusukbalok);
	printf("=================================== \n");
	
	// Masukkan variabel silinder
	printf("Masukkan diameter= ");
	scanf("%f", &diameter);
	printf("Masukkan tinggi silinder= ");
	scanf("%f", &tinggisilinder);
	// Menghitung keliling silinder
	kelilingsilinder = 2.00 * PHI * (diameter / 2.00);
	// Menghitung total panjang rusuk silinder
	rusuksilinder = 2.00 * kelilingsilinder + 2.00 * tinggisilinder;
	// Hasil
	printf("Total panjang rusuk balok: %.2f \n", rusuksilinder);
	printf("=================================== \n");
	
	return 0;
}
