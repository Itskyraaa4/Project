/* Nama File      : caraif2.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 23 september 2024 
   Deskrip        : Program ini memungkinkan pengguna untuk Menentukan suatu bilangan itu positif, negatis atau 0
*/

#include<stdio.h>

int main ()
{
    printf("Program ini menentukan suatu bilangan itu positif, negatis atau 0\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
    int a;
	
	printf("Ketikkan sebuah bilangan a: ");
	scanf("%d", &a); fflush(stdin);
	
	if(a>0){
		printf("a adalah bilangan positif");
	}
	else if(a<0){
		printf("a adalah bilangan negatif");
	}
	else{
		printf("a adalah bilangan nol");
	}
	
	return 0;
}

