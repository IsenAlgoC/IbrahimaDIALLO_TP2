#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n = 100, i;
	unsigned short int somme1 = 0, somme2 = 0, somme3 = 0;
	for (i = 1; i <= n; i++) {
		somme1 += i;
	}
	printf("1er somme : %d\n", somme1);
	i = 1;

	while (i <= n) {
		somme2 += i;
		i++;
	}
	printf("2e somme : %d\n", somme2);
	i = 1;
	do {
		somme3 += i;
		i++;
	} while (i <= n);

	printf("3e somme : %d\n", somme3);
	
}