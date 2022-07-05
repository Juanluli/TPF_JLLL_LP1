#pragma once

#include "cConsulta.h"
#include "cIntervencion.h"

class cConsulta:
	public cIntervencion
{
private:
	string Indicaciones;
public: 
	cConsulta(cMedico* medico, string diagnostico, float montoAbonar, string indicaciones);
	~cConsulta();

	void RealizarIntervencion();
};

