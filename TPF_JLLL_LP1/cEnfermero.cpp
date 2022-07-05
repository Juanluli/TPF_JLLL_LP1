#include "cEnfermero.h"

cEnfermero::cEnfermero(const string dni, string nombre, const cFechayHora* fechaNacimiento, const string num_Matricula, bool turno_Trabajo) : cPersonal(dni, nombre, fechaNacimiento), Num_Matricula(num_Matricula)
{
	this->Turno_Trabajo = turno_Trabajo;
}

cEnfermero::~cEnfermero()
{

}

void cEnfermero::ModificarListaMedicamentos()
{

}
