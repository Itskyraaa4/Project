/*  
	Nama File      : Tugas7.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 04 September 2024 
	Deskripsi      : program ini menghitung kebutuhan kalori manusia
*/

#include<stdio.h>

int main()
{
	printf("Project Tugas no.7\n");
	printf("=========================\n");
	printf("Programer : Rahmat Dany\n");
	printf("NIM       : 24343124\n");
	printf("=========================\n");
	float rp1, rp2, rp3, rs1, rs2, rs3, rtparalel, rtseri;
	// Menghitung resistansi rangkaian paralel
	printf("Masukkan R1 rangkaian paralel= ");
	scanf("%f", &rp1);
	printf("Masukkan R2 rangkaian paralel= ");
	scanf("%f", &rp2);
	printf("Masukkan R3 rangkaian paralel= ");
	scanf("%f", &rp3);
	// Proses menghitung
	rtparalel = 1.00 / ((1.00 / rp1) + (1.00 / rp2) + (1.00 / rp3));
	// Hasil paralel
	printf("Total resistansi paralel= %.2f \n", rtparalel);
	printf("============================\n");
	printf(" \n");
	
	// Menghitung resistansi rangkaian seri
	printf("Masukkan R1 rangkaian seri= ");
	scanf("%f", &rs1);
	printf("Masukkan R2 rangkaian seri= ");
	scanf("%f", &rs2);
	printf("Masukkan R3 rangkaian seri= ");
	scanf("%f", &rs3);
	// Proses menghitung
	rtseri = rs1 + rs2 + rs3;
	//Hasil paralel
	printf("Total resistansi seri= %.2f \n", rtseri);
	printf("============================\n");
	
	return 0;
}
