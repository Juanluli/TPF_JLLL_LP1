#include "cConsulta.h"

cConsulta::cConsulta(cMedico* medico, string diagnostico, float montoAbonar, string indicaciones): cIntervencion(medico, diagnostico, montoAbonar)
{
	this->Indicaciones = indicaciones;
}


cConsulta::~cConsulta()
{

}

void cConsulta::RealizarIntervencion() {}