// Conditions_exo16.cpp : définit le point d'entrée pour l'application console.
// Écrire un programme qui lit 3 prénoms et les affiche dans l’ordre alphabétique. 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	string p1, p2, p3;
	set<string> prenom;

	cout << "Saisir le 1er prenom : ";
	cin >> p1;
	prenom.insert(p1);

	cout << "\nSaisir le 2eme prenom : ";
	cin >> p2;
	prenom.insert(p2);

	cout << "\nSaisir le 3eme prenom : ";
	cin >> p3;
	prenom.insert(p3);

	cout << "\n------ORDRE ALPHABETIQUE------" << endl;

	set<string>::iterator lettre;

	for (lettre = prenom.begin(); lettre != prenom.end(); ++lettre) {
		cout << *lettre << endl;
	}
    return 0;
}

