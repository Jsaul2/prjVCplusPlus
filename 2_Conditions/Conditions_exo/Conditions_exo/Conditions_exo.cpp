// Conditions_exo.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool p = NULL;
	bool q = NULL;
	bool r = NULL;

	bool condition1 = p && q || !r;
	bool condition2 = !(p && (q && !r));


    return 0;
}

