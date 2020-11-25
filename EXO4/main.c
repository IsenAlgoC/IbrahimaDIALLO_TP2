#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int main(){

	int ValeurAleatoire, nombre = 0, score = 0 ;
	srand(time(NULL));
	ValeurAleatoire = rand() % (100 + 1-1);
	while (ValeurAleatoire != nombre) {
		printf("\nEntrez un nombre : ");
		scanf_s("%d", &nombre);
		if (nombre > ValeurAleatoire) {
			printf("Trop grand !");
		}
		else if (nombre < ValeurAleatoire){
			printf("Trop petit !");
		}
		else {
			printf("Vous avez gagne !");
		}
		score += 1;
	}
	printf("\nVotre score est de : %d", score);
}