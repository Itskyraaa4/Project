/* Nama File      : TUGAS2A.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 03 september 2024 
   Deskrip        : Program Ini Menampilkan Hasil dari Tahanan, Arus, dan Tegangan Rangkaian Paralel
*/

#include<stdio.h>

int main (){
    printf("Menghitung tahanan total arus dan tegangan pada rangkaian secara paralel\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
	float r1, r2, r3, rt, v, i, vr1, vr2;
	//Masukan variabel
	printf("Nilai R1=");
	scanf("%f", &r1);
    printf("Nilai R2=");
	scanf("%f", &r2);
	printf("Nilai R3=");
	scanf("%f", &r3);
	printf("Nilai VR1=");
	scanf("%f", &vr1);
	printf("Nilai VR2=");
	scanf("%f", &vr2);
	//Proses menghitung
	rt = 1.00 / ((1.00 / r1) + (1.00 / r2) + (1.00 / r3));
	v = vr1 + vr2;
	i = v/ rt;
	//Hasil
	printf("Total tahanan= %.2f ohm \n", rt);
	
	return 0;
}
