#ifndef GROUP_H
#define GROUP_H

#include <vector>
#include "etudiant.h"

class Groupe {
	public:
		// Constructeurs et destructeur
		Groupe();
		Groupe(const Groupe& g);
		Groupe(const int& numero);
		//Groupe(const int& numero, const Etudiant& etu);
		~Groupe();
		
		// Ajout/suppression d'étudiants
		void ajouterEtudiant(const Etudiant& etu);
		void supprimerEtudiant(const Etudiant& etu);
		
		// Mutateurs
		void setNumero(const int& numero);
		void setListeEtudiant(const std::vector<Etudiant>& listeEtudiant);
		
		// Accesseurs
		int getNumero() const;
		std::vector<Etudiant> getListeEtudiant() const;
		
	private:
		int numero_;
		std::vector<Etudiant*> listeEtudiant_;
};

#endif
