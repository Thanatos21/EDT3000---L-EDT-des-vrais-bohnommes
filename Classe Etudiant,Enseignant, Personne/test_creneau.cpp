#include <iostream>
#include <string>
#include "creneau.h"

using namespace std;

int main() {
	Creneau c1("29/02/2012", 2, 14);
	cout << c1 << endl;
	
	c1.setDuree(1);
	cout << c1 << endl;
	
	Creneau c2 = Creneau();
	cout << c2 << endl;
	
	c2.setDate("12/05/1990");
	c2.setDuree(1);
	c2.setHeure_debut(8);
	cout << c2 << endl;
	
	return 0;
}
