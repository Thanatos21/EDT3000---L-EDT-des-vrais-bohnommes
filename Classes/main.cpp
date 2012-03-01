#include "etudiant.h"
#include "enseignant.h"
#include "groupe.h"
#include "module.h"
#include "salle_cm.h"
#include "salle_td.h"
#include "salle_tp.h"
#include "creneau.h"

/*TODO Si temps : penser à l'utilisation de toupper et tolower pour les prénoms et noms */

using namespace std;

int main(void){
	
	Etudiant e1();
	Etudiant e2("E06851B", "BIZEUL" ,"Julien", "30 Rue du Pont", "facepalm@etu.univ-nantes.fr");
	Etudiant e3("E21571S", "FAGNIEZ","Florian", "94 Rue de la Convention", "lesponaysaysupayr@etu.univ-nantes.fr");
	Etudiant e4("E15412X", "RULLIER","Noemie", "123 Rue de Bretagne", "bouyaaaa@etu.univ-nantes.fr");

	Enseignant ens1("ENS012", "Dupont" , "Jean", "96 Rue du C++", "vivelobjet@univ.fr");
	Enseignant ens2("ENS015", "JeanJean", "Blob", "485 Rue du Java", "Javaàfond@univ.com");
/*
	cout << e2 << endl;
	cout << e3 << endl;
	cout << e4 << endl;
*/
				/*typedef std::list<Etudiant*> listeEtudiant;
				listeEtudiant list;
	
				list.push_back(new Etudiant("E06851B", "BIZEUL" ,"Julien", "30 Rue du Pont", "julien.bizeul@etu.univ-nantes.fr"));
				list.push_back(new Etudiant("E21571S", "FAGNIEZ","Florian", "94 Rue de la Convention", "florian.fagniez@etu.univ-nantes.fr"));
				list.push_back(new Etudiant("E15412X", "RULLIER","Noemie", "123 Rue de Bretagne", "noemie.rullier@etu.univ-nantes.fr"));
		
						Groupe gr601(601, list);
				*/
	Module m1(10,15,12,"S32IO30","Objet", &ens1);
	Module m2(8,14,16,"S32IO45","Java", &ens2);

	Groupe gr601(601);
	gr601.ajouterEtudiant(e2);
	gr601.ajouterEtudiant(e3);
	gr601.ajouterEtudiant(e4);
	gr601.supprimerEtudiant(e3);

	gr601.ajouterModule(m1);
	gr601.ajouterModule(m2);
	gr601.supprimerModule(m1);
	cout << gr601 ;

/* Test sur les salles */

	SalleCM sCm1(1, 100, true);
	Salle s1;
	s1.setCapacite(4);
	SalleTD sTd1;
	
	cout << sCm1 << endl;
	cout << sTd1 << endl;
	cout << s1 << endl;
	
	// Il faudra modifier les affichages, manque de cohérence pour les créneaux
	cout << endl;
	Creneau c1("02/03/2012", 2, 8, &sCm1, &gr601, &m1);
	cout << c1 << endl;
	
	return 0;
	
} 
