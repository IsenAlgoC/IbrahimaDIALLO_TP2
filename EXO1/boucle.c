#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n = 100, i;
	unsigned short int somme1 = 0, somme2 = 0, somme3 = 0;
	/*========== Somme des n premiers entiers positifs avec  boucles différentes ==========*/
	
	// 1ere Boucle 
	for (i = 1; i <= n; i++) {
		somme1 += i;
	}
	
	// 2e Boucle

	i = 1;
	while (i <= n) {
		somme2 += i;
		i++;
	}
	
	// 3e Boucle 

	i = 1;
	do {
		somme3 += i;
		i++;
	} while (i <= n);

	/*========== Trouver la valeur maximum de n sans dépassement de capacité ==========*/

	
}