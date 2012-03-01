#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include "personne.h"

class Enseignant : public Personne{
	public:
		
		Enseignant();
		Enseignant(const std::string& numero, const std::string& nom, const std::string& prenom, const std::string& add1, const std::string& add2);
		~Enseignant();

		void setNumeroEnseignant(const int& numero); //Utilité ?
		std::string getNumeroEnseignant() const;

		bool operator==(const Enseignant& e) const;
	private:
		std::string numeroEnseignant_ ;
};
std::ostream& operator <<(std::ostream& os, const Enseignant& e);
	
#endif

