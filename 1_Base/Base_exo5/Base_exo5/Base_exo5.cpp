// Base_exo5.cpp : définit le point d'entrée pour l'application console.
// Expliquer les différences entre ces expressions: 

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "x = 2; \ny = x + x; \n";
	cout << "Une simple addition. \nIci, x est un entier et = 2 donc y = 4 \n" << endl;

	cout << "s = \"2\" \nt = s + s \n";
	cout << "Une concatenation. \nIci, s est une chaine de caratere et = 2 donc t = 22" << endl;
    return 0;
}

