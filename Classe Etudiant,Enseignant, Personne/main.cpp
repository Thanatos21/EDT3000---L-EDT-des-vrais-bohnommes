#include "etudiant.h"
#include "enseignant.h"
#include "groupe.h"

/*TODO Si temps : penser à l'utilisation de toupper et tolower pour les prénoms et noms */

using namespace std;

int main(void){
	
	Etudiant e1();
	Etudiant e2("E06851B", "BIZEUL" ,"Julien", "30 Rue du Pont", "julien.bizeul@etu.univ-nantes.fr");
	Etudiant e3("E21571S", "FAGNIEZ","Florian", "94 Rue de la Convention", "florian.fagniez@etu.univ-nantes.fr");
	Etudiant e4("E15412X", "RULLIER","Noemie", "123 Rue de Bretagne", "noemie.rullier@etu.univ-nantes.fr");
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
	

	Groupe gr601(601);
	gr601.ajouterEtudiant(e2);
	gr601.ajouterEtudiant(e3);
	gr601.ajouterEtudiant(e4);
	gr601.supprimerEtudiant(e3);
	cout << gr601 ;

	
} 
