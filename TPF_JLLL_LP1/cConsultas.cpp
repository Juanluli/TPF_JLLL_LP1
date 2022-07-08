#include "cConsultas.h"

cConsultas::cConsultas(cMedico* medico, string diagnostico, float montoAbonar, string indicaciones) : cIntervencion(medico, diagnostico, montoAbonar)
{
	this->Indicaciones = indicaciones;
}


cConsultas::~cConsultas()
{

}

void cConsultas::RealizarIntervencion() {}

void cConsultas::ImprimirInformacion() {}