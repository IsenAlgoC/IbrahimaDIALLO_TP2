#include <stdlib.h>
#include <stdio.h>

int main() {
	int year;
	printf("Entrez une annee : ");
	scanf_s("%d", &year);
	while (year > 10000) { // demander a l'utilisateur d'entrer une valeur inferieur a 10000
		printf("Entrez une annee : ");
		scanf_s("%d", &year);
	}
	/*if (year % 4 != 0 && year % 400 != 0) {
		printf("pas bissextile");
	}
	else {
		printf("bissextile");
	}*/
	if (year % 4 == 0 ) { // Condition pour avoir une annee bissextile. Si elle est divisible par 4
		if (year % 100 != 0) { // si elle n'est pas divisible par 100, on a une année bissextile
			printf("%d est une annee bissextile.", year);
			return 0;
		}
		if (year % 100 == 0 && year % 400 != 0) { // si elle n'est pas divisible par 400, elle n'est pas bissextile
			printf("%d n'est pas une annee bissextile.", year);
			return 0;
		}
		printf("%d est une annee bissextile.", year); // apres avoir verifie toutes ces conditons, on a une année bissextile
		return 0;
	}

	else { // si elle n'est pas divisible par 4, on n'a pas une année bissextile
		printf("%d n'est pas une annee bissextile.", year);
	}

	
}