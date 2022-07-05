#include "cPersonal.h"

cPersonal::cPersonal(const string dni, string nombre, const cFechayHora* fechaNacimiento): DNI(dni), FechaNaciemiento(fechaNacimiento)
{
	this->Nombre = nombre;
}


cPersonal::~cPersonal()
{

}