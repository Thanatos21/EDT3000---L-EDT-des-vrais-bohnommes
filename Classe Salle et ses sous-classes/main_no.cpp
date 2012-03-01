#include "salle_cm.h"
#include "salle_td.h"
#include "salle_tp.h"

#include <cstdlib>

using namespace std;

int main(int argc, char **argv){
/***** LEXIQUE *****/


  
/***** CORPS *****/

cout << "******************** Début du programme ********************" << endl;

	SalleCM sCm1(1, 100, true);
	Salle s1;
	s1.setCapacite(4);
	SalleTD sTd1;
	
	cout << sCm1 << endl;
	cout << sTd1 << endl;
	cout << s1 << endl;

cout << "******************** Fin du programme ********************" << endl;

return EXIT_SUCCESS; // Code retourne au systeme en cas de succes
}
