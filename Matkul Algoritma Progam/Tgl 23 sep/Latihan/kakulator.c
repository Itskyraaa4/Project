/* Nama File      : kakulator.c
   Programaer     : Rahmat Dany (24343124)
   Tgl. pembuatan : 23 september 2024 
   Deskrip        : Program ini memungkinkan pengguna untuk Menentukan suatu bilangan itu positif, negatis atau 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    printf("Program ini menentukan suatu bilangan itu positif, negatis atau 0\n");
	printf("=========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("=========================================\n");
	double opn1, opn2, hasil;
	char opr;
	
	printf("Ketikkan operan 1: ");
	scanf("%lf", &opn1); fflush(stdin);
	printf("Ketikkan operan 2: ");
	scanf("%lf", &opn2); fflush(stdin);
	printf("Ketikkan operator: ");
	scanf("%c", &opr); fflush(stdin);
	
	if(opr == '+'){
		hasil = opn1 + opn2;
		printf("Hasil = %0.4lf\n", hasil);
	}
	else if(opr == '-'){
		hasil = opn1 - opn2;
		printf("Hasil = %0.4lf\n", hasil);
	}
	else if(opr == '*'){
		hasil = opn1 * opn2;
		printf("Hasil = %0.4lf\n", hasil);
	}
	else if(opr == '/'){
		if(opn2 == 0.0){
			printf("Tak bisa dihitung atuh...\n");
		}
		else{
			hasil = opn1 / opn2;
			printf("Hasil = %0.4lf\n", hasil);
		}
	}
	else if(opr == '^'){
		hasil = pow(opn1, opn2);
		printf("Hasil = %0.4lf\n", hasil);
	}
	else
		printf("Tak mengerti den...!\n");
	
	return 0;
}

