#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "personne.h"

class Etudiant : public Personne{
	public:
		
		Etudiant();
		Etudiant(const std::string& numero, const std::string& nom, const std::string& prenom, const std::string& add1, const std::string& add2);
		~Etudiant();

		void setNumeroEtudiant(const int& numero); //Utilité ??
		std::string getNumeroEtudiant() const;
		
		bool operator==(const Etudiant& e) const;

	private:
		std::string numeroEtudiant_ ;
};
std::ostream& operator <<(std::ostream& os, const Etudiant& e);
#endif

