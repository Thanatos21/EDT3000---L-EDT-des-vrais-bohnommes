#ifndef SALLETD_H
#define SALLETD_H

#include "salle.h"
#include <iostream>

class SalleTD : public Salle {

public :

	SalleTD();
	SalleTD(const int& numero, const int& capacite, const bool& videoprojecteur);
	~SalleTD();
	
	/********** Mutateurs **********/
	
	void setVideoprojecteur(const bool& videoprojecteur);
	
	/********** Accesseurs **********/
	
	bool getVideoprojecteur() const;

private :

	bool videoprojecteur_;

};

std::ostream& operator<<(std::ostream& os, const SalleTD& std);

#endif
