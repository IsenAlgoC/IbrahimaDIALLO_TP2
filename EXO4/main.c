#include <stdlib.h>
#include <stdio.h>
#include <time.h> //Appel de la bibliothequ "time.h"^pour pouvoir utuliser les fonctions srand et rand



int main(){

	int ValeurAleatoire, nombre = 0, score = 0 ;
	srand(time(NULL));
	ValeurAleatoire = rand() % (100 + 1-1); //genere des valeur aleatoire comprise entre 0 et 100
	while (ValeurAleatoire != nombre) { // Boucle qui st valide tant que le résultat n'a pas été trouvé
		printf("\nEntrez un nombre : ");
		scanf_s("%d", &nombre); // On renseigne le nombre
		if (nombre > ValeurAleatoire) { // condition pou savoir si on a juste ou pas
			printf("Trop grand !");
		}
		else if (nombre < ValeurAleatoire){
			printf("Trop petit !");
		}
		else {
			printf("Vous avez gagne !");
		}
		score += 1; // incrémentation de la variable score pour connaitre le resultat a la fin du jeu
	}
	printf("\nVotre score est de : %d", score);
}