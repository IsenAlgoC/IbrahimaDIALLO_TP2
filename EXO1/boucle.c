#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	/*========== Somme des n premiers entiers positifs avec  boucles diff�rentes ==========*/
	printf("========== Somme des n premiers entiers positifs avec  boucles differentes ==========\n\n");
	int n = 100;
	int i;
	unsigned short int somme = 0;
	
	// 1ere Boucle 
	for (i = 1; i <= n; i++) {
		somme += i;
	}
	printf("La somme des 100 premiers entiers naturels est : %d\n\n", somme);
	// 2e Boucle
	somme = 0; // initalisation de la somme pour �craser l'ancienne valeur
	i = 1;
	while (i <= n) {
		somme += i;
		i++;
	}

	// 3e Boucle 
	somme = 0;
	i = 1;
	do {
		somme += i;
		i++;
	} while (i <= n);
	

	/*========== Trouver la valeur maximum de n sans d�passement de capacit� ==========*/
	printf("========== Trouver la valeur maximum de n sans depassement de capacite ==========\n\n");
	unsigned short int smax = 65535; // initialisation de la valeur maximale de la somme
	somme = 0;
	n = 1; // intialisation de n
	i = 1; //initialisation de l'indice i qui va �tre incr�ment� et nous permettra de v�rifier si il y'a un d�passement ou non
	while (somme + i <= smax) {
		somme += i;
		i++;
		n++;
	}
	printf("La valeur maximal de n est : %d\n\n", n); // nmax = 362

	

	/*========== Demander la valeur de n � l�utilisateur ==========*/
	printf("========== Demander la valeur de n a lutilisateur ==========\n\n");
	somme = 0;
	printf("Donnez la valeur de n : ");
	scanf_s("%d", &n);
	for (int k = 1; k <= n; k++) {
		somme += k;
	}
	printf("%d\n\n", somme); /*si n > 362 on a des valeurs qui ne correspondent pas au r�sultat attendu. 
						 Si on prend n = 363, on obient comme resultat de la somme = 167*/
	
	
	
	/*========== Recommencer tant que n est trop grand ==========*/
	printf("========== Recommencer tant que n est trop grand ==========\n\n");
	int nmax = 362;
	somme = 0;
	printf("Donnez la valeur de n : ");
	scanf_s("%d", &n);
	while (n > nmax) { // demande la valeur de n a chaque fois que n < nmax
		printf("Donnez la valeur de n : ");
		scanf_s("%d", &n);
	}
	for (int k = 1; k <= n; k++) {
		somme += k;
	}
	printf("%d", somme);
}