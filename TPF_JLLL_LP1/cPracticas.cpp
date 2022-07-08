#include "cPracticas.h"

cPracticas::cPracticas(cMedico* medico, string diagnostico, float montoAbonar, string informe, bool oSAutorizado) : cIntervencion(medico, diagnostico, montoAbonar)
{
	this->Informe = informe;
	this->OSAutorizado = oSAutorizado;
}

cPracticas::~cPracticas()
{

}

void cPracticas::RealizarIntervencion() {}
void cPracticas::PedirAutorizacionOS(){}

