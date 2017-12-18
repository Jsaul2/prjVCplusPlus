#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string additif(int x, char un, char cinq);
string soustractif(int x, char un, char cinq, char dix);
void convertirEnRomains(int n, bool simplifie);

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
	string s = "";

	switch (x % 10) {
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
	default:
		s = "???";
		break;
	}
	return s;
}


void convertirEnRomains(int n, bool simplifie) {
	string result;
	if (n >= 1 && n <= 3999) {
		int unites = n % 10;
		int dizaines = (n / 10) % 10;
		int centaines = (n / 100) % 100;
		int milliers = (n / 1000) % 1000;
		
		
		if (simplifie == true) {
			string Milliers = additif(milliers, 'M', '?');
			string Centaines = additif(centaines, 'C', 'D');
			string Dizaines = additif(dizaines, 'X', 'L');
			string Unites = additif(unites, 'I', 'V');

			cout << Milliers << Centaines << Dizaines << Unites << endl;
		}
		else if (simplifie == false){
			string Milliers = soustractif(milliers, 'M', '?', '?');
			string Centaines = soustractif(centaines, 'C', 'D', 'M');
			string Dizaines = soustractif(dizaines, 'X', 'L', 'C');
			string Unites = soustractif(unites, 'I', 'V', 'X');
			cout << Milliers << Centaines << Dizaines << Unites << endl;
		}
		else {
			cout << "ERROR 404 ! simplifie : " << simplifie << endl;
		}
	}
	else {
		cout << "Nombre impossible a ecrire en chiffres romains." << endl;
	}
}


int main()
{
	int nombre = 0;

	string reset = "O";

	while (reset == "O" || reset == "o") {
		cout << "Saisir un nombre compris entre 1 et 3999 : ";
		cin >> nombre;

		cout << nombre << " en Rommain simplifie : " << endl;
		convertirEnRomains(nombre, true);
		
		cout << nombre << " en Romain vrai : " << endl;
		convertirEnRomains(nombre, false);

		cout << "Voulez-vous recommencer [O(o) / N(n)] :  ";
		cin >> reset;
	}
	return 0;
}