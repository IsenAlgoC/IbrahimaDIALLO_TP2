#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	float d1, d2, d3; 
	int reset = 0;    
	
	while (reset == 0) {
		printf("Entrez le dimensions : ");
		scanf_s("%f %f %f", &d1, &d2, &d3);
		
		if ((d1 >= 150 || d1 <= 1) || (d2 >= 150 || d2 <= 1) || (d3 >= 150 || d3 <= 1)) {
			printf("NON VALIDE\n");
		}
		
		else {
			printf("VALIDE\n");
		}

		printf("Voulez vous enregistrer ? Si oui Tapez sur la touche '0' : ");
		scanf_s("%d", &reset);

	}

	
}

  