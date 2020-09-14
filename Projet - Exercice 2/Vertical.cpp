/*
But:	Afficher un nombre à 5 chiffres verticalement en console.
Auteur:	Dominic Jeannotte-Parent
Date:	13/09/20
*/

// Inclure les modules
#include <iostream>;
using namespace std;

// Intégrer le main

int main()
{
	// Intégrer la variable nombre 1
	int nombre1;
	// Demander à l'utilisateur d'entrer un nombre à 5 chiffres
	
	cout << "Veuillez rentré un nombre à 5 chiffres: "
	// Sauvegarde la valeur de la variable.
	cin >> nombre1;
	
	// J'applique une condition qui précise que le nombre sera seulement pris en compte si l'utilisateur à inscrit 5 chiffres.
	if (nombre1 >= 10000 && nombre1 <= 99999)
	{
		// La logique de ces calculs est de prendre le nombre1. De lui faire des opérations mathématique de modulo/diviser ou les 2 pour obtenir une partie du nombre seulement.
		cout << (nombre1 / 10000) << endl;			// je rajoute endl à la fin de chaque ligne pour faire un retour à la ligne.
		cout << (nombre1 % 10000 / 1000) << endl; 
		cout << (nombre1 % 1000 / 100) << endl;
		cout << (nombre1 % 100 / 10) << endl;
		cout << (nombre1 % 10) << endl;
	}
	// Si le nombre n'a pas 5 chiffres, la condition est échoué donc nous arrivons au else qui demande à l'utilisateur de recommencer le programme.
	else
	{
		cout << "Ceci n'est pas un nombre à 5 chiffres. Veuillez recommencer." << endl;
	}

	// Pour ne pas minimiser la console.
	system("pause");

	return 0;
	/*
	Plan de test:

	Résultats escomptés pour différents nombre:
			Nombre entier | Réponse

		1.		12345		1
							2
							3
							4
							5

		2.		24543		2
							4
							5
							4
							3

		3.		87510		8
							7
							5
							1
							0

		4.		94305		9
							4
							3
							0
							5	

		5.		64388		6
							4
							3
							8
							8

	*/
}


