#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string additif(int x, char un, char cinq);
string soustractif(int x, char un, char cinq, char dix);
string convertirEnRomains(int n, bool simplifie);

string additif(int x, char un, char cinq) {
	string s = "";

	if (x >= 5) {
		s = s + cinq;
	}

	switch (x % 5) {
	case 1:
		s = s + un;
		break;

	case 2:
		s = s + un + un;
		break;

	case 3:
		s = s + un + un + un;
		break;

	case 4:
		s = s + un + un + un + un;
		break;
	}
	return s;
}

string soustractif(int x, char un, char cinq, char dix) {
	string s;

	switch (x) {
	case 0:
		s = "";
		break;

	case 1:
		s = "" + un;
		break;

	case 2:
		s = "" + un + un;
		break;

	case 3:
		s = "" + un + un + un;
		break;

	case 4:
		s = "" + un + cinq;
		break;

	case 5:
		s = "" + cinq;
		break;

	case 6:
		s = "" + cinq + un;
		break;

	case 7:
		s = "" + cinq + un + un;
		break;

	case 8:
		s = "" + cinq + un + un + un;
		break;

	case 9:
		s = "" + un + dix;
		break;
	}
	return s;
}


string convertirEnRomains(int n, bool simplifie) {
	if (n >= 1 && n <= 4999) {
		int unites = n % 10;
		int dizaines = (n / 10) % 10;
		int centaines = (n / 100) % 10;
		int milliers = (n / 1000) % 1000;


		if (true) {
			return (additif(milliers, 'M', '?') + additif(centaines, 'C', 'D') +
				additif(dizaines, 'X', 'L') + additif(unites, 'I', 'V'));
		}
		else {
			return (soustractif(milliers, 'M', '?', '?') + soustractif(centaines, 'C', 'D', 'M') +
				soustractif(dizaines, 'X', 'L', 'C') + soustractif(unites, 'I', 'V', 'X'));
		}
	}
	else return "Nombre impossible a ecrire en chiffres romains.";
}


int main()
{
	int nombre = 0;

	string reset = "O";

	while (reset == "O" || reset == "o") {
		cout << "Saisir un nombre compris entre 1 et 3999 : ";
		cin >> nombre;

		cout << nombre << " en Rommain simplifie: " << convertirEnRomains(nombre, true) << endl;
		cout << nombre << " en Romain vrai : " << convertirEnRomains(nombre, false) << endl;

		cout << "Voulez-vous recommencer [O(o) / N(n)] :  ";
		cin >> reset;
	}
	return 0;
}