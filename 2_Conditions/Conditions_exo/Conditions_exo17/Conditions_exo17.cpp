// Conditions_exo17.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	int a1 = 0, a2 = 0, a3 = 0;

	cout << "Saisir une 1er annee : ";
	cin >> a1;

	cout << "Saisir une 2eme annee : ";
	cin >> a2;

	cout << "Saisir une 3eme annee : ";
	cin >> a3;


	if ((a1 % 4) == 0 && (a1 % 100) != 0 || (a1 % 400) == 0) {
		cout << "\nL'annee " << a1 << " est bissextile" << endl;
	}
	else
	{
		cout << "\nL'annee " << a1 << " n'est pas bissextile" << endl;
	}

	if ((a2 % 4) == 0 && (a2 % 100) != 0 || (a2 % 400) == 0) {
		cout << "\nL'annee " << a2 << " est bissextile" << endl;
	}
	else
	{
		cout << "\nL'annee " << a2 << " n'est pas bissextile" << endl;
	}

	if ((a3 % 4) == 0 && (a3 % 100) != 0 || (a3 % 400) == 0) {
		cout << "\nL'annee " << a3 << " est bissextile" << endl;
	}
	else
	{
		cout << "\nL'annee " << a3 << " n'est pas bissextile" << endl;
	}

	
    return 0;
}

