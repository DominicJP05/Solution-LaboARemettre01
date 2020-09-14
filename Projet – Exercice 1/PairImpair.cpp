/* 
But:	Déterminer si l'entier est pair ou impair.
Auteur:	Dominic Jeannotte-Parent	
Date:	12/09/20
*/

// Inclure les modules
#include <iostream>;
using namespace std;

// Intégrer le main

int main()
{
	// Je définis la variable nombre1 préalablement.
	int nombre1;

	// Je demande à l'utilisateur d'entrer un nombre entier dans la console.
	cout << "Entrer un nombre entier: ";

	// Je récupère ensuite cette valeur dans la variable nombre1
	cin >> nombre1;

	// J'effectue une vérification sur la nature de l'entier que l'utilisateur vient de me transmettre.

	// Si le modulo 2 nous donne le résultat 0 le nombre est pair sinon il est impair.
	if(nombre1 % 2 == 0)

		// Si le nombre1 est pair le programme injectera la ligne de code ci-dessous dans la console.
		cout << nombre1 <<" est un nombre pair.";
	
	else
		// Si le nombre1 n'a pas réussi la première condition qui est d'être pair le programme injectera la ligne de code ci-dessous.
		cout << nombre1 <<" est un nombre impair.";
	
	// 
	return 0;

	/*
	Plan de test:

	Résultats escomptés pour différents nombre:
			Nombre entier | Réponse

		1.		51			Impair
		2.		24			Pair
		3.		540			Pair
		4.		9430		Pair
		5.		643			Impair
	*/
}