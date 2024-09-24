/* Nama File      : latihan2c.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 03 september 2024 
   Deskrip        : program ini menghitung konversi suhu dari celcius  
*/

#include <stdio.h>
int main()
{
	printf("Menghitung Konvrensi Suhu Dari Celcius\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
	float celsius, fahrenheit, reumur, kelvin; 
    // Meminta pengguna memasukkan suhu dalam Celsius 
    printf("Masukkan suhu dalam Celsius: "); 
    scanf("%f", &celsius); 
    // Melakukan perhitungan konversi 
    fahrenheit = (9.0 / 5.0) * celsius + 32; 
    reumur = (4.0 / 5.0) * celsius; 
    kelvin = celsius + 273; 
    // Menampilkan hasil konversi suhu 
    printf("= %.2f Fahrenheit\n", fahrenheit); 
    printf("= %.2f Reumur\n", reumur); 
    printf("= %.2f Kelvin\n", kelvin); 
return 0;
} 
