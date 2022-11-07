#include <stdio.h>

int main(){

	long int pembayaran;
	int buruh;

	printf("Total buruh = ");
	scanf ("%d", &buruh);

	float bonus[buruh];
	double bayar[buruh];
	double diskon[buruh];

	printf ("Pembayaran = ");
	scanf ("%d", &pembayaran);
	
	 for (int i = 0; i < buruh; i++){
	 	printf ("Bonus buruh ke-%d = ", i);
	 	scanf ("%f", &bonus[i]);

	 	diskon[i] = (double)pembayaran * (bonus[i] / 100);
	 	bayar[i] = (double)pembayaran + diskon[i]; 
	 }
	
	 printf ("\n====GAJI=====\n");
	 for (int i = 0; i < buruh; i++){
	 printf ("Buruh ke-%d = Rp.%.2f\n",i, bayar[i]);
	 }
	
	

	return 0;
}