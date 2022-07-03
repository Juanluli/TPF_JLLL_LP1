#pragma once

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
private:

};

