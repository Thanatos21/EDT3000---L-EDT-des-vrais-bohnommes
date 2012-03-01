#include "groupe.h"

/***** CONSTRUCTEURS *****/
Groupe::Groupe() : numero_(0), listeEtu_() 
{
}

Groupe::Groupe(const int& numero, const listeEtudiant& l) : numero_(numero), listeEtu_(l) 
{
}

Groupe::Groupe(const int& numero) : numero_(numero), listeEtu_() 
{
}


Groupe::~Groupe() 
{
}

/****** MUTATEURS ******/
void Groupe::ajouterEtudiant(const Etudiant& etu) 
{
	listeEtu_.push_back(new Etudiant(etu));
}

void Groupe::ajouterModule(const Module& mod) 
{
	listeMod_.push_back(new Module(mod));
}


void Groupe::supprimerEtudiant(const Etudiant& etu) 
{
	for (listeEtudiant::iterator it = listeEtu_.begin(); it != listeEtu_.end(); ++it)
	{
	    if (*(*it) == etu){
		it = listeEtu_.erase(it);
	    }
	}
}


void Groupe::supprimerModule(const Module& mod) 
{
	for (listeModule::iterator it = listeMod_.begin(); it != listeMod_.end(); ++it)
	{
	    if (*(*it) == mod){
		it = listeMod_.erase(it);
	    }
	}
}
		
void Groupe::setNumeroGroupe(const int& numero) 
{
	numero_ = numero;
}

/***** ACCESSEURS *****/
int Groupe::getNumeroGroupe() const 
{
	return numero_;
}

const listeEtudiant& Groupe::getListeEtudiant() const
{
	return listeEtu_;
}

const listeModule& Groupe::getListeModule() const
{
	return listeMod_;
}
/***** AFFICHER LE CONTENU D'UN GROUPE *****/
std::ostream& operator<< (std::ostream& os, const Groupe& g)
{ 
	os << "-------------------------------------------------------------------------------------" << std::endl; 
	os << "Le groupe " << g.getNumeroGroupe() << " est composé des éléments suivants : " << std::endl;
	os << "-------------------------------------------------------------------------------------" << std::endl;

	for (listeEtudiant::const_iterator it = g.getListeEtudiant().begin(); it != g.getListeEtudiant().end(); ++it)
	{
	   os << *(*it) << "\n";
	}

	os << "-------------------------------------------------------------------------------------" << std::endl;
	os << "Et possède les modules suivants : " << std::endl;
	os << "-------------------------------------------------------------------------------------" << std::endl;

	for (listeModule::const_iterator it = g.getListeModule().begin(); it != g.getListeModule().end(); ++it)
	{
	   os << *(*it) << "\n";
	}
	
	os << "-------------------------------------------------------------------------------------" << std::endl;

	return os;
}
