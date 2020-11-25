#include <stdlib.h>
#include <stdio.h>

int main() {
	int valeur;
	printf("Entrez une valeur : ");
	scanf_s("%d", &valeur);
	while (valeur > 10000) {
		printf("Entrez une valeur : ");
		scanf_s("%d", &valeur);
	}
	
	if (valeur % 4 == 0 && valeur % 100 == 0 && valeur % 400 == 0) {
		printf("Annee bissextile");
	}
	else {
		printf("Annee non bissextile");
	}
}