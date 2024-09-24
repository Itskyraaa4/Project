/* Nama File      : latihan2c.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 03 september 2024 
   Deskrip        : program ini menghitung luas dan keliling lingkaran berdasarkan nilai r 
*/
 
#include <stdio.h> 
int main() { 
	printf("Menghitung Luas dan Keliling dari sebuah lingkaran yang diketahui nilai jari-jari (R)\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
float radius, luas, keliling; 
// Memasukkan nilai jari-jari dari pengguna 
printf("Masukkan nilai jari-jari lingkaran: "); 
scanf("%f", &radius); 
// Menghitung luas dan keliling 
luas = 3.14159 * radius * radius; // Formula untuk luas lingkaran 
keliling = 2 * 3.14159 * radius; // Formula untuk keliling lingkaran 
// Menampilkan hasil perhitungan 
printf("Luas lingkaran: %.2f\n", luas); 
printf("Keliling lingkaran: %.2f\n", keliling); 
return 0; 
} 

