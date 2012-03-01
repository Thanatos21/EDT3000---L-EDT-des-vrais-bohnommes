#include "enseignant.h"

/***** CONSTRUCTEURS ET DESTRUCTEURS *****/

/*
Enseignant::Enseignant() : numeroEnseignant_("Unknown"), Personne("Unknown","Unknown","Unknown","Unknown")  
{
}
*/

Enseignant::Enseignant(const std::string& numero, const std::string& nom, const std::string& prenom, const std::string& add1, const std::string& add2) : Personne(nom, prenom, add1, add2),numeroEnseignant_(numero)
{
}

Enseignant::~Enseignant()
{
}

/***** MUTATEURS *****/
void Enseignant::setNumeroEnseignant(const int& numero)
{
  numeroEnseignant_ = numero;
}

/***** ACCESSEURS *****/

std::string Enseignant::getNumeroEnseignant() const
{
  return numeroEnseignant_ ;
}

/***** SURCHARGE DES OPERATEURS *****/
bool Enseignant::operator==(const Enseignant& e) const
{
	return (numeroEnseignant_ == e.numeroEnseignant_);
}
/*std::ostream& operator <<(std::ostream& os, const Enseignant& e)
{
	os << "L'Enseignant a pour numero : "<< e.getNumeroEnseignant << "\n" << "Pour nom : " << e.getNom() " << p.getNom() << "\n" << "Pour prénom : " << p.getPrenom() <<
	"\n" << "Pour Adresse Postale : " << p.getAdressePostale() << "\n" << "Pour Adresse Electronique : " << p.getAdresseElectronique()<< std::endl;
  return os;
}*/


