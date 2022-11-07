/*
	Buatlah program untuk mengoutputkan bilangan genap
	dan cari rata-ratanya
*/

#include <stdio.h>

int main(){

	int x;
	int b = 0;
	int a = 2;
	printf ("Masukkan Jumlah : ");
	scanf ("%d", &x);
	int y[x];

	for (int i = 0; i < x; i++){
		if (a % 2 == 0){
			y[i] = a;
			printf ("index ke-%d = %d\n", i, y[i]);
		}
		a+=2;
	}
	printf ("\n");

	int panjang = sizeof(y) / sizeof(*y);
	
	for (int i = 0; i < panjang; i++){
		b = b + y[i];
	}
	int rata_rata = b / x;
	printf ("Rata-rata = %d", rata_rata);
	
	
	return 0;
}