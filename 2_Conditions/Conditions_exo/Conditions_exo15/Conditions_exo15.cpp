// Conditions_exo15.cpp : définit le point d'entrée pour l'application console.
//Écrire un programme qui lit 3 nombres entiers et affiche le plus grand. 

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, tab[3];
	
	cout << "Entrer la 1er valeur : ";
	cin >> a;
	cout << "\nEntrer la 2eme valeur : ";
	cin >> b;
	cout << "\nEntrer la 3eme valeur : ";
	cin >> c;

	tab[0] = a;
	tab[1] = b;
	tab[2] = c;

	int max = tab[0];
	for (size_t i = 0; i < 3; i++)
	{
		if (tab[i] > max) {
			max = tab[i];
		}
	}

	cout << "------------------------------------" << endl;
	cout << "La valeur la plus grande est " << max << endl;

	cout << "\n ----------------------" << endl;
	cout << "|          OU          |" << endl;
	cout << " ----------------------\n" << endl;
	int otherMax = 0, min = 0;

	cout << "Entrer la 1er valeur : ";
	cin >> a;
	cout << "\nEntrer la 2eme valeur : ";
	cin >> b;
	cout << "\nEntrer la 3eme valeur : ";
	cin >> c;

	if (a>b) {
		otherMax = a;
	}
	else {
		otherMax = b;
	}

	if (c>otherMax) {
		otherMax = c;
	}

	if (a<b) {
		min = a;
	}
	else {
		min = b;
	}

	if (c<otherMax) {
		min = c;
	}

	cout << "------------------------------------" << endl;
	cout << "La valeur la plus grande est " << otherMax << endl;

    return 0;
}

