/*#pragma once

#include "cLibrerias.h"
#include "cIntervencion.h"
#include "cMedico.h"
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
	cFechayHora* FechayHoraInicio;
	float Duracion;
	cLista_template<cMedicamento>* ListaMedicamentos;
	cFechayHora* FechaAlta;

public:
	cCirugia(cMedico* medico, string diagnostico, float montoAbonar, bool ambulatorio, cMedico* medicoAd, cEnfermero* enfermero, string nombreProcedimiento, float duracion);
	~cCirugia();

	void RealizarIntervencion(cPaciente* paciente);

	void Prequirurgico(cPaciente* paciente);

	void AgregarMedicamento(cMedicamento* medicamento);

	cLista_template<cMedicamento>* getListaMedicamentos() { return ListaMedicamentos; }


};

*/