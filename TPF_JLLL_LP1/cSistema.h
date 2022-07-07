#pragma once

#include "cLibrerias.h"
#include "cLista_template.h"
#include "cHistoriaClinica.h"
#include "cPersonal.h" //tambien funciona si lo quitamos

class cSistema
{
private:
	cLista_template<cHistoriaClinica>* Lista_historiasClinicas;
	cLista_template<cPersonal>* Lista_personal;

public:
	cSistema();
	~cSistema();

	void Agregar();
};

