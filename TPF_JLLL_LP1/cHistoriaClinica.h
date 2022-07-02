#pragma once

#include "cLibrerias.h"
#include "cPaciente.h"
#include "cLista_template.h"
#include "cIntervencion.h"

class cHistoriaClinica
{
private:
	static const string ID_HistoriaClinica;
	cPaciente* cPaciente;
	bool Internado;
	cLista_template<cIntervencion>* Lista_intervenciones;

public: 


};

