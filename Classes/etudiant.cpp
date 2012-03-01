#include "etudiant.h"

/***** CONSTRUCTEURS ET DESTRUCTEURS *****/

/*
Etudiant::Etudiant() : numeroEtudiant_("Unknown"), Personne("Unknown","Unknown","Unknown","Unknown")  
{
}
*/

Etudiant::Etudiant(const std::string& numero, const std::string& nom, const std::string& prenom, const std::string& add1, const std::string& add2) : Personne(nom, prenom, add1, add2),numeroEtudiant_(numero)
{
}

Etudiant::~Etudiant()
{
}

/***** MUTATEURS *****/
void Etudiant::setNumeroEtudiant(const int& numero)
{
	numeroEtudiant_ = numero;
}

/***** ACCESSEURS *****/

std::string Etudiant::getNumeroEtudiant() const
{
	return numeroEtudiant_ ;
}

/***** SURCHARGE DES OPERATEURS *****/
bool Etudiant::operator==(const Etudiant& e) const
{
	return (numeroEtudiant_ == e.numeroEtudiant_);
}

std::ostream& operator <<(std::ostream& os, const Etudiant& e)
{
	os << "L'Etudiant a pour numero : "<< e.getNumeroEtudiant() << "\n" << "Pour nom : " << e.getNom() << "\n" << "Pour prénom : " << e.getPrenom() <<
	"\n" << "Pour Adresse Postale : " << e.getAdressePostale() << "\n" << "Pour Adresse Electronique : " << e.getAdresseElectronique() << std::endl;
  return os;
}


