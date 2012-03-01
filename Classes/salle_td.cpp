#include "salle_td.h"

SalleTD::SalleTD():
Salle(), videoprojecteur_(false){}

SalleTD::SalleTD(const int& numero, const int& capacite, const bool& videoprojecteur):
Salle(numero, capacite), videoprojecteur_(videoprojecteur) {}

SalleTD::~SalleTD(){}
	
	/********** Mutateurs **********/
	
void SalleTD::setVideoprojecteur(const bool& videoprojecteur){
	videoprojecteur_=videoprojecteur;
}

	/********** Accesseurs **********/
	
bool SalleTD::getVideoprojecteur() const{
	return videoprojecteur_;
}

	/********** Flux de sortie **********/
	
std::ostream& operator<<(std::ostream& os, const SalleTD& std){
	os << "La salle de TD n°" << std.getNumero() << " peut accueillir " << std.getCapacite() << " personnes.\nElle possède un vidéo-projecteur: " << std.getVideoprojecteur() << "." ;
	return os;
}
