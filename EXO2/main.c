#include <stdio.h>
#include <stdlib.h>

int main() {
	float d1, d2, d3;
	int b;
	printf("Entrez le dimensions : ");
	scanf_s("%f %f %f", &d1, &d2, &d3);
	do {
		if ((d1 >= 150 || d1 <= 1) || (d2 >= 150 || d2 <= 1) || (d3 >= 150 || d3 <= 1)) {
			printf("NON VALIDE");
		}
		else {
			printf("VALIDE\n");
		}
		printf("Voulez vous enregistrez de nouveau ? ");
		scanf_s("%d", &b);
	
	} while (b != 0);
}