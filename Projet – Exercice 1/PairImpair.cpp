/* 
But:	D�terminer si l'entier est pair ou impair.
Auteur:	Dominic Jeannotte-Parent	
Date:	12/09/20
*/

// Inclure les modules
#include <iostream>;
using namespace std;

// Int�grer le main

int main()
{
	// Je d�finis la variable nombre1 pr�alablement.
	int nombre1;

	// Je demande � l'utilisateur d'entrer un nombre entier dans la console.
	cout << "Entrer un nombre entier: ";

	// Je r�cup�re ensuite cette valeur dans la variable nombre1
	cin >> nombre1;

	// J'effectue une v�rification sur la nature de l'entier que l'utilisateur vient de me transmettre.

	// Si le modulo 2 nous donne le r�sultat 0 le nombre est pair sinon il est impair.
	if(nombre1 % 2 == 0)

		// Si le nombre1 est pair le programme injectera la ligne de code ci-dessous dans la console.
		cout << nombre1 <<" est un nombre pair.";
	
	else
		// Si le nombre1 n'a pas r�ussi la premi�re condition qui est d'�tre pair le programme injectera la ligne de code ci-dessous.
		cout << nombre1 <<" est un nombre impair.";
	
	// 
	return 0;

	/*
	Plan de test:

	R�sultats escompt�s pour diff�rents nombre:
			Nombre entier | R�ponse

		1.		51			Impair
		2.		24			Pair
		3.		540			Pair
		4.		9430		Pair
		5.		643			Impair
	*/
}