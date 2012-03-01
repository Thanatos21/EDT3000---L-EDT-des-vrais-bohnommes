#ifndef SALLE_H
#define SALLE_H

#include <iostream>

class Salle{

public :

	Salle();
	Salle(const int& numero, const int& capacite);
	virtual ~Salle();
	
	/********** Mutateurs **********/
	
	void setNumero(const int& numero);
	void setCapacite(const int& capacite);
	
	/********** Accesseurs **********/
	
	int getNumero() const;
	int getCapacite() const;


private :

	int numero_;
	int capacite_;

};

std::ostream& operator<<(std::ostream& os, const Salle& s);

#endif
