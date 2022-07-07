#pragma once

#include "cLibrerias.h"
#include "cIntervencion.h"

class cPracticas :
	public cIntervencion
{
private: 
	string Informe;
	bool OSAutorizado;
public:
	cPracticas(cMedico* medico, string diagnostico, float montoAbonar, string informe, bool oSAutorizado);
	~cPracticas();

	void RealizarIntervencion();

	void PedirAutorizacionOS();

};

