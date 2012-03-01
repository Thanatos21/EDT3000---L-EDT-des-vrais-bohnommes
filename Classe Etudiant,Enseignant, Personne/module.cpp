#include "module.h"

/***** CONSTRUCTEURS ET DESTRUCTEURS ******/
Module::Module() : nombre_H_CM_(0), nombre_H_TD_(0), nombre_H_TP_(0), code_(""), titre_("") 
{
}

Module::Module(const Module& m) : nombre_H_CM_(m.nombre_H_CM_), nombre_H_TD_(m.nombre_H_TD_), nombre_H_TP_(m.nombre_H_TP_), code_(m.code_), titre_(m.titre_) 
{
}

Module::Module(const int& nombre_H_CM, const int& nombre_H_TD, const int& nombre_H_TP, const std::string code, const std::string titre) : nombre_H_CM_(nombre_H_CM), nombre_H_TD_(nombre_H_TD), nombre_H_TP_(nombre_H_TP), code_(code), titre_(titre) 
{
}

Module::~Module() 
{
}

/****** MUTATEURS *****/
void Module::setNombre_H_CM(const int& heure) 
{
	nombre_H_CM_ = heure;
}

void Module::setNombre_H_TD(const int& heure) 
{
	nombre_H_TD_ = heure;
}

void Module::setNombre_H_TP(const int& heure) 
{
	nombre_H_TP_ = heure;
}

void Module::setCode(const std::string& code) 
{
	code_ = code;
}

void Module::setTitre(const std::string& titre) 
{
	titre_ = titre;
}


/****** ACCESSEURS *****/
int Module::getNombre_H_CM() const
{
	return nombre_H_CM_;
}

int Module::getNombre_H_TD() const 
{
	return nombre_H_TD_;
}

int Module::getNombre_H_TP() const 
{
	return nombre_H_TP_;
}

std::string Module::getCode() const 
{
	return code_;
}

std::string Module::getTitre() const 
{
	return titre_;
}

/****** REDEFINITION DES OPERATEURS ******/
bool Module::operator==(const Module& m) const
{
	return (code_ == m.code_);
}

/***** AFFICHE : FLUX DE SORTIE *****/
std::ostream& operator<< (std::ostream& os, const Module& m)
{
	os << "Le module a pour code : " << m.getCode() << "\n" << "Pour titre : " << m.getTitre() << "\n" << "Possede: " << m.getNombre_H_CM() <<" heures de CM, " << m.getNombre_H_TD() << " heures de TD et " << m.getNombre_H_TP() << " heures de TP \n";

  return os;
}
