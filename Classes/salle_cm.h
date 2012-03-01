#ifndef SALLECM_H
#define SALLECM_H

#include "salle.h"
#include <iostream>

class SalleCM : public Salle {

public :

	SalleCM();
	SalleCM(const int& numero, const int& capacite, const bool& visio);
	~SalleCM();
	
	/********** Mutateurs **********/
	
	void setVisio(const bool& visio);
	
	/********** Accesseurs **********/
	
	bool getVisio() const;

private :

	bool visio_;

};

std::ostream& operator<<(std::ostream& os, const SalleCM& scm);

#endif
