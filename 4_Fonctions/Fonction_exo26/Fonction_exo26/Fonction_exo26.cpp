// Conditions_exo17.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>

using namespace std;

bool est_bissextille(int annee);

bool est_bissextille(int annee) {
	if ((annee % 4) == 0 && (annee % 100) != 0 || (annee % 400) == 0) {
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	int a1 = 0, a2 = 0, a3 = 0;

	cout << "Saisir une 1er annee : ";
	cin >> a1;

	cout << "Saisir une 2eme annee : ";
	cin >> a2;

	cout << "Saisir une 3eme annee : ";
	cin >> a3;

	cout << "\n******************************************\n" << endl;

	if (est_bissextille(a1)) {
		cout << "L'annee " << a1 << " est bissextile" << endl;
	}
	else
	{
		cout << "L'annee " << a1 << " n'est pas bissextile" << endl;
	}

	if (est_bissextille(a2)) {
		cout << "L'annee " << a2 << " est bissextile" << endl;
	}
	else
	{
		cout << "L'annee " << a2 << " n'est pas bissextile" << endl;
	}

	if (est_bissextille(a3)) {
		cout << "L'annee " << a3 << " est bissextile" << endl;
	}
	else
	{
		cout << "L'annee " << a3 << " n'est pas bissextile" << endl;
	}


	return 0;
}