#include "salle.h"

Salle::Salle():
numero_(0), capacite_(0){}

Salle::Salle(const int& numero, const int& capacite):
numero_(numero), capacite_(capacite){}

Salle::~Salle(){}
	
	/********** Mutateurs **********/
	
void Salle::setNumero(const int& numero){
	numero_=numero;
}

void Salle::setCapacite(const int& capacite){
	capacite_=capacite;
}
	
	/********** Accesseurs **********/
	
int Salle::getNumero() const{
	return numero_;
}

int Salle::getCapacite() const{
	return capacite_;
}


	/********** Flux de sortie **********/
	
std::ostream& operator<<(std::ostream& os, const Salle& s){
	os << "La salle n°" << s.getNumero() << " peut accueillir " << s.getCapacite() << " personnes.";
	return os;
}
