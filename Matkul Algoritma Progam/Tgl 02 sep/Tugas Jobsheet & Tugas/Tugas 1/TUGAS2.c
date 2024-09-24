/*  
	Nama File      : Tugas1.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 04 September 2024 
	Deskripsi      : program ini menentukan keliling bentuk bentuk geometris 
*/

#include<stdio.h>
#include<math.h>
#define PHI 3.14

int main()
{
	printf("Project Tugas no.2\n");
	printf("=========================\n");
	printf("Programer : Rahmat Dany\n");
	printf("NIM       : 24343124\n");
	printf("=========================\n");
	float alas, tinggi, pjmiring, kelilingT, panjang, lebar, kelilingP, diameter, kelilingL;
	//Masukkan variabel (segi tiga)
	printf("Masukan panjang alas segitiga=");
	scanf("%f", &alas);
	printf("Masukan tinggi segitiga=");
	scanf("%f", &tinggi);
	//Menghitung panjang sisi miring
	pjmiring= sqrt (alas*alas + tinggi*tinggi);
	//Menighitung keliling segitiga
	kelilingT= alas + tinggi + pjmiring;
	//Hasil
	printf("Sisi miring= %.2f\n", pjmiring);
	printf("Keliling= %.2f\n", kelilingT);
	printf("============================\n");
	
	//Masukkan variabel (persegi panjang)
	printf("Masukan panjang persegi panjang=");
	scanf("%f", &panjang);
	printf("Masukan lebar persegi panjang=");
	scanf("%f", &lebar);
	//Menghitung keliling persegi panjang
	kelilingP = 2.00 * (panjang + lebar);
	//Hasil
	printf("Keliling persegi panjang= %.2f \n", kelilingP);
	printf("============================\n");
	
	//Masukkan variabel (lingkaran)
	printf("Masukan diameter lingkaran=");
	scanf("%f", &diameter);
	//Menghitung keliling lingkaran
	kelilingL = PHI * diameter;
	//hasil
	printf("keliling= %.2f \n", kelilingL);
	printf("============================\n");
	
	return 0;
}
