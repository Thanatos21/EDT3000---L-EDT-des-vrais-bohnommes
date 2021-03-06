#ifndef MODULE_H
#define MODULE_H

#include <iostream>
#include "enseignant.h"

class Module {
	public:
		
		bool operator==(const Module& m) const;	
		
		// Constructeurs
		Module();
		Module(const Module& m);
		Module(const int& nombre_H_CM, const int& nombre_H_TD, const int& nombre_H_TP, const std::string& code, const std::string& titre, Enseignant* enseignant); 
		~Module();
		
		// Mutateurs
		void setNombre_H_CM(const int& heure);
		void setNombre_H_TD(const int& heure);
		void setNombre_H_TP(const int& heure);
		void setCode(const std::string& code);
		void setTitre(const std::string& titre);
		void setEnseignant(Enseignant* ens);		

		// Accesseurs
		int getNombre_H_CM() const;
		int getNombre_H_TD() const;
		int getNombre_H_TP() const;
		std::string getCode() const;
		std::string getTitre() const;
		Enseignant* getEnseignant() const;
	private:
		int nombre_H_CM_;
		int nombre_H_TD_;
		int nombre_H_TP_;
		std::string code_;
		std::string titre_;
		Enseignant* enseignant_;
		
};
std::ostream& operator <<(std::ostream& os, const Module& m);	//test commit
#endif
