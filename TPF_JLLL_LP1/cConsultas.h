#pragma once

#include "cIntervencion.h"

class cConsultas :
    public cIntervencion
{
private:
	string Indicaciones;
public:
	cConsultas(cMedico* medico, string diagnostico, float montoAbonar, string indicaciones);
	~cConsultas();

	void RealizarIntervencion();

	void ImprimirInformacion(string diagnostico, string indicaciones); //Imprime las Indicaciones y el Diagnostico

	void setIndicaciones(string indicaciones) { this->Indicaciones = indicaciones; }
};

