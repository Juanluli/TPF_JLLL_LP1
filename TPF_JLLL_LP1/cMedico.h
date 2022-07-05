#pragma once

#include "cLibrerias.h"
#include "cFechayHora.h"
#include "cPersonal.h"

class cMedico:
	public cPersonal
{
private:
	const string Num_Matricula;
	string Especialidad;
public:
	cMedico(const string dni, string nombre, const cFechayHora* fechaNacimiento, const string num_Matricula, string especialidad);
	~cMedico();

	void AgregarEvento();
	void DarAltaPaciente();
	void ModificarIndicacionesConsultas();
	void ModificarDiagnosticos();
};

