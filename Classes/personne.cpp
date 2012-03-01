#include "personne.h"
/***** CONSTRUCTEURS ET DESTRUCTEURS *****/

Personne::Personne() :nom_("Unknown"), prenom_("Unknown"), adressePostale_("Unknown"), adresseElectronique_("Unknown")  
{
}

Personne::Personne(const std::string& nom, const std::string& prenom, const std::string& add1, const std::string& add2) : 
nom_(nom), prenom_(prenom), adressePostale_(add1), adresseElectronique_(add2)
{
}

Personne::~Personne()
{
}

/***** MUTATEURS *****/

void Personne::setNom(const std::string& nom)
{
  nom_ = nom;
}


void Personne::setPrenom(const std::string& prenom)
{
  prenom_ = prenom;
}


void Personne::setAdressePostale(const std::string& add)
{
  adressePostale_ = add;
}


void Personne::setAdresseElectronique(const std::string& add)
{
  adresseElectronique_ = add;
}


/***** ACCESSEURS *****/


std::string Personne::getNom() const
{
  return nom_ ;
}


std::string Personne::getPrenom() const
{
  return prenom_ ;
}


std::string Personne::getAdressePostale() const
{
  return adressePostale_ ;
}


std::string Personne::getAdresseElectronique() const
{
  return adresseElectronique_ ; 
}

/***** SURCHARGE DES OPERATEURS *****/

std::ostream& operator <<(std::ostream& os, const Personne& p)
{
	os << "La Personne à pour nom : " << p.getNom() << "\n" << "Pour prénom : " << p.getPrenom() <<
	"\n" << "Pour Adresse Postale : " << p.getAdressePostale() << "\n" << "Pour Adresse Electronique : " << p.getAdresseElectronique()<< std::endl;
  return os;
}



