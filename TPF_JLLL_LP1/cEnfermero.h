#pragma once

#include "cLibrerias.h"
#include "cFechayHora.h"
#include "cPersonal.h"
#include "cMedicamento.h"
#include "cCirugia.h"

class cEnfermero:
	public cPersonal
{
private:
	const string Num_Matricula;
	bool Turno_Trabajo;
public:
	cEnfermero(const string dni, string nombre, const cFechayHora* fechaNacimiento, const string num_Matricula, bool turno_Trabajo);
	~cEnfermero();

	void ModificarListaMedicamentos(cIntervencion* intervencion, cMedicamento* medicamento);
};

