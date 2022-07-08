
#include "cLibrerias.h"
#include "cFechayHora.h"
#include "cPersonal.h"
#include "cHistoriaClinica.h"
#include "cConsultas.h"


#ifndef CMEDICO_H
#define CMEDICO_H

class cMedico:
	public cPersonal
{
private:
	const string Num_Matricula;
	string Especialidad;
public:
	cMedico(const string dni, string nombre, const cFechayHora* fechaNacimiento, const string num_Matricula, string especialidad);
	~cMedico();

	void AgregarEventoHistoria(cIntervencion* intervencion, cHistoriaClinica* historiaClinica);
	void DarAltaPaciente(cHistoriaClinica* historiaClinica);
	void ModificarIndicacionesConsultas(cIntervencion* intervencion, string indicaciones);
	void ModificarDiagnosticos(cIntervencion* intervencion, string diagnostico);
};

#endif // !CMEDICO_H