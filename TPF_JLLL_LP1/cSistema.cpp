#include "cSistema.h"

cSistema::cSistema()
{
	this->Lista_historiasClinicas = new cLista_template<cHistoriaClinica>();
	this->Lista_personal = new cLista_template<cPersonal>();
}

cSistema::~cSistema() {

}