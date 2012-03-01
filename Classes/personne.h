#ifndef PERSONNE_H
#define PERSONNE_H


#include <iostream>
#include <string>
#include <cstdlib>

class Personne {

	public:
		Personne();
		Personne(const std::string& nom, const std::string& prenom, const std::string& add1, const std::string& add2);
		~Personne();

		void setNom(const std::string& nom); //Utilité ?
		void setPrenom(const std::string& prenom); //Utilité ?
		void setAdressePostale(const std::string& add);
		void setAdresseElectronique(const std::string& add);
		
		std::string getNom() const;
		std::string getPrenom() const;
		std::string getAdressePostale() const;
		std::string getAdresseElectronique() const;

	private:
		std::string nom_ ;
		std::string prenom_ ;
		std::string adressePostale_ ;
		std::string adresseElectronique_ ;
};
std::ostream& operator <<(std::ostream& os, const Personne& p);
#endif
		
