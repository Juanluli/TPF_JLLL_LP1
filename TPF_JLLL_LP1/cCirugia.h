#pragma once

#include "cLibrerias.h"
#include "cIntervencion.h"
#include "cEnfermero.h"
#include "cLista_template.h"
#include "cMedicamento.h"

class cCirugia:
	public cIntervencion
{
private:
	bool Ambulatorio;
	cMedico* MedicoAd;
	cEnfermero* Enfermero;
	string NombreProcedimiento;
	float Duracion;
	cLista_template<cMedicamento>* ListaMedicamentos;
	cFechayHora* FechaAlta;
public:


};

