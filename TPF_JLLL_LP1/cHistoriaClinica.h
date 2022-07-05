#pragma once

#include "cLibrerias.h"
#include "cPaciente.h"
#include "cLista_template.h"
#include "cIntervencion.h"

class cHistoriaClinica
{
private:
	static int ID_HistoriaClinica;
	cPaciente* Paciente;
	bool Internado;
	cLista_template<cIntervencion>* Lista_intervenciones;

public: 
	cHistoriaClinica(cPaciente* paciente, bool internado);
	~cHistoriaClinica();


};

