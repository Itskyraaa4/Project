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
	char nama[50];
	int noidentitas, nilai;
	//Masukan data
	printf("Masuka Nama Siawa: ");
	gets(nama);
	printf("Masukkan Nomor Indentitas: ");
	scanf("%d", &noidentitas);
	printf("Masukkan Nilai Siswa: ");
	scanf("%d", &nilai);
	//Menampilkan di file .txt
	FILE *file = fopen("data_siswa.txt", "w");
	if (file != NULL) {
		fprintf(file, "Nama Siswa : %s\n", nama);
		fprintf(file, "Nomor Identitas : %d\n", noidentitas);
		fprintf(file, "Nilai : %d\n", nilai);
		fclose(file);
		printf("Data siswa teleh disimpan ke dalam berkas 'data_siswa.txt'.\n");
	} else {
		printf("Gagal membukak untuk penyimpanan detail data siswa.\n");
		return 1;	
	}
	
}

