#include <iostream>
#include "creneau.h"

// Constructeurs et destructeur
Creneau::Creneau() : date_("01/01/2012"), duree_(1), heure_debut_(8) {}

Creneau::Creneau(const Creneau& c) : date_(c.date_), duree_(c.duree_), heure_debut_(c.heure_debut_) {}

Creneau::Creneau(const std::string& date, const int& duree, const int& heure_debut, Salle * sal, Groupe * gr, Module * mod) : date_(date), duree_(duree), heure_debut_(heure_debut), salle_(sal), groupe_(gr), module_(mod) {}

Creneau::~Creneau() {
	//delete salle_;
	//delete groupe_;
	//delete module_;
}

// Mutateurs
void Creneau::setDate(const std::string& date) {
	date_ = date;
}

void Creneau::setDuree(const int& duree) {
	duree_ = duree;
}

void Creneau::setHeure_debut(const int& heure_debut) {
	heure_debut_ = heure_debut;
}

// Accesseurs
std::string Creneau::getDate() const {
	return date_;
}

int Creneau::getDuree() const {
	return duree_;
}

int Creneau::getHeure_debut() const {
	return heure_debut_;
}

Salle* Creneau::getSalle() const {
	return salle_;
}

Groupe* Creneau::getGroupe() const {
	return groupe_;
}

Module* Creneau::getModule() const {
	return module_;
}

// Redéfinition des opérateurs
std::ostream& operator<< (std::ostream& os, const Creneau& cr) {
	os << "-------------------------------------------------------------------------------------------------------" << std::endl;
	os << "Le " << cr.getDate() << ", de " << cr.getHeure_debut() << "h à " << cr.getHeure_debut() + cr.getDuree() << "h :" << std::endl;
	os << "-------------------------------------------------------------------------------------------------------" << std::endl;
	os << "Salle : " << (cr.getSalle())->getNumero() << std::endl;
	os << "Groupe : " << (cr.getGroupe())->getNumeroGroupe() << std::endl;
	os << "Module : " << (cr.getModule())->getCode() << " - " << (cr.getModule())->getTitre();
	
	return os;
}
