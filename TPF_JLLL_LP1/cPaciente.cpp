#include "cPaciente.h"

cPaciente::cPaciente(const string dni, string nombre, const cFechayHora* fechaNacimiento, const string obraSocial, string numAfiliado): DNI(dni), FechaNacimiento(fechaNacimiento), ObraSocial(obraSocial)
{
	this->Nombre = nombre;
	this->NumAfiliado = numAfiliado;
}

cPaciente::~cPaciente()
{

}



