#include "salle_cm.h"

SalleCM::SalleCM():
Salle(), visio_(false){}

SalleCM::SalleCM(const int& numero, const int& capacite, const bool& visio) :
Salle(numero, capacite), visio_(visio) {}

SalleCM::~SalleCM(){}
	
	/********** Mutateurs **********/
	
void SalleCM::setVisio(const bool& visio) {
	visio_=visio;
}

	/********** Accesseurs **********/
	
bool SalleCM::getVisio() const{
	return visio_;
}

	/********** Flux de sortie **********/
	
std::ostream& operator<<(std::ostream& os, const SalleCM& scm){
	os << "La salle de CM n°" << scm.getNumero() << " peut accueillir " << scm.getCapacite() << " personnes.\nElle possède un système de visio-conference: " << scm.getVisio() << "." ;
	return os;
}
