#include "cPersonal.h"

cPersonal::cPersonal(const string dni, string nombre, eSexo sexo, const cFechayHora* fechaNacimiento): DNI(dni), FechaNaciemiento(fechaNacimiento)
{
	this->Nombre = nombre;
	this->Sexo = sexo;
}


cPersonal::~cPersonal()
{

}