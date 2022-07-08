#ifndef CINTERVENCION_H
#define CINTERVENCION_H

#include "cLibrerias.h"
#include "cMedico.h"
#include "cFechayHora.h"


class cIntervencion
{
protected:
	cMedico* Medico;
	string Diagnostico;
	cFechayHora* FechayHoraIntervencion;
	float MontoAbonar;
public:
	cIntervencion(cMedico* medico, string diagnostico, float montoAbonar);
	virtual ~cIntervencion(); //debe ser virtual

	virtual void RealizarIntervencion() = 0;

	void setDiagnostico(string diagnostico) { this->Diagnostico = diagnostico; }

};



#endif