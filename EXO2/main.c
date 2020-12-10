#include <stdio.h>
#include <stdlib.h>


int main() {
	float d1, d2, d3; 
	int reset = 0;   // variable qui va nous permettre de renouveller la demande d'enregistrement
	
	while (reset == 0) { // tant que cette condition est vrai il y'aura enregistrement des bagages
		printf("Entrez le dimensions : ");
		scanf_s("%f %f %f", &d1, &d2, &d3); // renseignement des dimensions
		
		if ((d1 >= 150 || d1 <= 1) || (d2 >= 150 || d2 <= 1) || (d3 >= 150 || d3 <= 1)) { /*si il y'a un exces au niveau de la
																						  taille la machine affiche ce message*/
			
			printf("NON VALIDE\n");                                         
		}
		
		else {
			printf("VALIDE\n");
		}

		printf("Voulez vous enregistrer ? Si oui Tapez sur la touche '0' : ");
		scanf_s("%d", &reset); // permet à l'utilisateur d'enregistrer a nouveau

	}

	
}

  