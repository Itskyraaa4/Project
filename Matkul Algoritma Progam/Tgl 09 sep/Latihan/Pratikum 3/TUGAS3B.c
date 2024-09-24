/* Nama File      : Latihan3e.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 11 september 2024 
   Deskrip        : Program ini memungkinkan pengguna untuk memasukkan data untuk beberapa siswa dan menyimpannya dalam berkas
*/

#include<stdio.h>

int main ()
{
    printf("Program ini memasukan data siswa dan menyimpan dalam berkas\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
char kalimat[1000]; // Buffer untuk menyimpan kalimat

    // Meminta pengguna untuk memasukkan sebuah kalimat
    printf("Masukkan sebuah kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Menghitung panjang kalimat
    int panjang = 0;
    while (kalimat[panjang] != '\0') {  //Memastikan bahwa loop terus berjalan hingga akhir loop
        if (kalimat[panjang] != '\n') { // Tidak menghitung karakter newline
            panjang++;  // Menghitung jumlah karakter pada kalimat
        } else {
            break;
        }
    }

    // Menampilkan jumlah karakter
    printf("Jumlah karakter dalam kalimat: %d\n", panjang);

    return 0;
}
