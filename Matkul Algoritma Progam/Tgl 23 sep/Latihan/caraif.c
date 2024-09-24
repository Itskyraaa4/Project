/* Nama File      : caraif.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 23 september 2024 
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
    int a, b, c;
	
	printf("Ketikkan sebuah bilangan untuk a: ");
	scanf("%d", &a); fflush(stdin);
	printf("Ketikkan sebuah bilangan untuk b: ");
	scanf("%d", &b); fflush(stdin);
	printf("Ketikkan sebuah bilangan untuk c: ");
	scanf("%d", &c); fflush(stdin);
	if(a>b){
	   if(a>c){
	        printf("bilangan a adalah terbesar\n");	
	        printf("Bukti, a = %d, b = %d, c = %d\n", a, b, c);
		}
	   else{
	   		printf("bilangan c adalah terbesar\n");
		    printf("Bukti, a = %d, b = %d, c = %d\n", a, b, c);
	   }
	}
	else{
	   if(b>c){
	   	   printf("bilangan b adalah terbesar\n");
	   	   printf("Bukti, a = %d, b = %d, c = %d\n", a, b, c);
	   }
	   else{
	   	   printf("bilangan c adalah terbesar\n");
	   	   printf("Bukti, a = %d, b = %d, c = %d\n", a, b, c);
	   }
	}
	return 0;
}

