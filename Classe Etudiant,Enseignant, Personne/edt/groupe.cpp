#include "groupe.h"

/***** CONSTRUCTEURS *****/
Groupe::Groupe() : numero_(0), listeEtudiant_() 
{
}

Groupe::Groupe(Groupe g) : numero_(g.numero_), listeEtudiant_(g.listeEtudiant) 
{
}

Groupe::Groupe(const int& numero) : numero_(numero), listeEtudiant_() 
{
}

Groupe::~Groupe() 
{
}

/****** MUTATEURS ******/
void Groupe::ajouterEtudiant(const Etudiant& etu) 
{
	listeEtudiant.push_back(etu);
}

void Groupe::supprimerEtudiant(const Etudiant& etu) 
{
}
		
void setNumero(const int& numero) 
{
	numero_ = numero;
}

void setListeEtudiant(const std::vector<Etudiant>& listeEtudiant) 
{
	listeEtudiant_ = listeEtudiant;
}

/***** ACCESSEURS *****/
int getNumero() const 
{
	return numero_;
}

std::vector<Etudiant> getListeEtudiant() const 
{
	return listeEtudiant_;
}
