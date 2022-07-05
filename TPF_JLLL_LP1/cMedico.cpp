#include "cMedico.h"

cMedico::cMedico(const string dni, string nombre, const cFechayHora* fechaNacimiento, const string num_Matricula, string especialidad):cPersonal(dni, nombre, fechaNacimiento), Num_Matricula(num_Matricula)
{
	this->Especialidad = especialidad;
}

cMedico:: ~cMedico()
{

}


void cMedico::AgregarEvento() 
{

}

void cMedico::DarAltaPaciente()
{

}

void cMedico::ModificarIndicacionesConsultas() {

}

void cMedico::ModificarDiagnosticos()
{

}