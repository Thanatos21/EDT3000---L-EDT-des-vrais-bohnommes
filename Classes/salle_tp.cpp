#include "salle_tp.h"


SalleTP::SalleTP():
Salle(), nbmachines_(false){}

SalleTP::SalleTP(const int& numero, const int& capacite, const int& nbmachines):
Salle(numero, capacite), nbmachines_(nbmachines) {}

SalleTP::~SalleTP(){}
	
	/********** Mutateurs **********/
	
void SalleTP::setNbmachines(const int& nbmachines){
	nbmachines_=nbmachines;
}

	/********** Accesseurs **********/
	
int SalleTP::getNbmachines() const{
	return nbmachines_;
}

	/********** Flux de sortie **********/
	
std::ostream& operator<<(std::ostream& os, const SalleTP& stp){
	os << "La salle de TP n°" << stp.getNumero() << " peut accueillir " << stp.getCapacite() << " personnes.\nElle possède cependant " << stp.getNbmachines() << " machines." ;
	return os;
}
