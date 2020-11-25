#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n = 511, i;
	unsigned short int somme = 0;
	/*for (i = 1; i <= n; i++) {
		somme += i;
	}*/
	/*i = 1;
	while (i <= n) {
		somme += i;
		i++;
	}*/
	i = 1;
	/*do {
		somme += i;
		i++;
	} while (i <= n);*/

	//printf("%d", somme);
	int k;
	k = pow(2, 16);
	printf("%d",k);
}