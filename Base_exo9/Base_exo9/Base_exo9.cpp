// Base_exo9.cpp : définit le point d'entrée pour l'application console.
// Écrire un programme qui demande à l’utilisateur son poids (en kilogrammes) et sa taille (en mètres) et qui affiche son indice de masse corporelle (IMC): IMC = kg / m²

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Entrer votre poids (kg) : ";
	float poids = 0;
	cin >> poids;

	cout << "\nEntrer votre taille (metre) : ";
	float taille = 0;
	cin >> taille;

	cout << "\n\nVotre IMC est de " << (poids / (taille * taille)) << endl;
    return 0;
}

