#include "cMedico.h"

cMedico::cMedico(const string dni, string nombre, eSexo sexo, const cFechayHora* fechaNacimiento, const string num_Matricula, string especialidad):cPersonal(dni, nombre, sexo, fechaNacimiento), Num_Matricula(num_Matricula)
{
	this->Especialidad = especialidad;
}

cMedico:: ~cMedico()
{

}

void cMedico::AgregarEventoHistoria(cIntervencion* intervencion, cHistoriaClinica* historiaClinica)
{
	historiaClinica->AgregarIntervencion(intervencion);
}

void cMedico::DarAltaPaciente(cHistoriaClinica* historiaClinica)
{
	historiaClinica->setInternado(false);
}

void cMedico::ModificarIndicacionesConsultas(cIntervencion* intervencion, string indicaciones) {
	/*cConsultas* consulta = dynamic_cast<cConsultas*>(intervencion);
	if (consulta != NULL) consulta->setIndicaciones(indicaciones);
	*/
}

void cMedico::ModificarDiagnosticos(cIntervencion* intervencion, string diagnostico)
{
	intervencion->setDiagnostico(diagnostico);
}