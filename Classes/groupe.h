#ifndef GROUP_H
#define GROUP_H

#include <list>
#include "etudiant.h"
#include "module.h"

typedef std::list<Etudiant*> listeEtudiant;
typedef std::list<Module*> listeModule;

class Groupe {

	public:
		// Constructeurs et destructeur
		Groupe();
		Groupe(const int& numero);
		Groupe(const int& numero, const listeEtudiant& l);
		~Groupe();
		
		// Ajout/suppression d'étudiants
		void ajouterEtudiant(const Etudiant& etu);
		void supprimerEtudiant(const Etudiant& etu);
		
		// Ajout/Suppression de Modules
		void ajouterModule(const Module& mod);
		void supprimerModule(const Module& mod);

		// Mutateurs Utilité ???
		void setNumeroGroupe(const int& numero);
		
		// Accesseurs
		int getNumeroGroupe() const;
		const listeEtudiant& getListeEtudiant() const;
		const listeModule& getListeModule() const;

	private:
		int numero_;
		listeEtudiant listeEtu_;
		listeModule listeMod_;
};
std::ostream& operator<< (std::ostream& os, const Groupe& g);
#endif
