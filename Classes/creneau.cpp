#include <iostream>
#include "creneau.h"

Creneau::Creneau() : date_("01/01/2012"), duree_(1), heure_debut_(8) {}

Creneau::Creneau(const Creneau& c) : date_(c.date_), duree_(c.duree_), heure_debut_(c.heure_debut_) {}

Creneau::Creneau(const std::string& date, const int& duree, const int& heure_debut, Salle * sal, Groupe * gr, Module * mod) : date_(date), duree_(duree), heure_debut_(heure_debut), salle_(sal), groupe_(gr), module_(mod) {}

Creneau::~Creneau() {
	delete salle_;
	delete groupe_;
	delete module_;
}

void Creneau::setDate(const std::string& date) {
	date_ = date;
}

void Creneau::setDuree(const int& duree) {
	duree_ = duree;
}

void Creneau::setHeure_debut(const int& heure_debut) {
	heure_debut_ = heure_debut;
}

std::string Creneau::getDate() const {
	return date_;
}

int Creneau::getDuree() const {
	return duree_;
}

int Creneau::getHeure_debut() const {
	return heure_debut_;
}

Salle * Creneau::getSalle() const {
	return salle_;
}

Groupe * Creneau::getGroupe() const {
	return groupe_;
}

Module * Creneau::getModule() const {
	return module_;
}

std::ostream& operator<< (std::ostream& os, const Creneau& cr) {
	os << "Date : " << cr.getDate() << std::endl;
	os << "Heure de début : " << cr.getHeure_debut() << std::endl;
	os << "Duree : " << cr.getDuree() << std::endl;
	os << "Salle : " << *(cr.getSalle()) << std::endl;
	os << "Groupe : " << *(cr.getGroupe()) << std::endl;
	os << "Module : " << *(cr.getModule());
	
	return os;
}
