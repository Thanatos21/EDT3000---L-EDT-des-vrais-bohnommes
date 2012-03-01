#ifndef CRENEAU_H
#define CRENEAU_H

#include<iostream>
#include "salle.h"
#include "groupe.h"
#include "module.h"

class Creneau {
	public:
		// Constructeurs et destructeur
		Creneau();
		Creneau(const Creneau& c);
		Creneau(const std::string& date, const int& duree, const int& heure_debut, Salle * sal, Groupe * gr, Module * mod);
		~Creneau();
		
		// Mutateurs
		void setDate(const std::string& date);
		void setDuree(const int& duree);
		void setHeure_debut(const int& heure_debut);
		
		// Accesseurs
		std::string getDate() const;
		int getDuree() const;
		int getHeure_debut() const;
		Salle * getSalle() const;
		Groupe * getGroupe() const;
		Module * getModule() const;
		
	private:
		std::string date_;
		int duree_;
		int heure_debut_;
		Salle* salle_;
		Groupe* groupe_;
		Module* module_;
		
};

// Redéfinition des opérateurs
std::ostream& operator<<(std::ostream& os, const Creneau& cr);

#endif
