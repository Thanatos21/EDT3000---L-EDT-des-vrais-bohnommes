#ifndef SALLETP_H
#define SALLETP_H

#include "salle.h"
#include <iostream>

class SalleTP : public Salle {

public :

	SalleTP();
	SalleTP(const int& numero, const int& capacite, const int& nbmachines);
	~SalleTP();
	
	/********** Mutateurs **********/
	
	void setNbmachines(const int& nbmachines);
	
	/********** Accesseurs **********/
	
	int getNbmachines() const;

private :

	int nbmachines_;

};

std::ostream& operator<<(std::ostream& os, const SalleTP& stp);

#endif
