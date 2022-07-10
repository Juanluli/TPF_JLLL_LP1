#include "cPaciente.h"

cPaciente::cPaciente(const string dni, string nombre, eSexo sexo, const cFechayHora* fechaNacimiento, bool obraSocial, string numAfiliado, bool ayunas, int hematocrito, int saturacion, int edad): DNI(dni), FechaNacimiento(fechaNacimiento)
{
	this->Nombre = nombre;
	this->Sexo = sexo;
	this->ObraSocial = obraSocial;
	this->NumAfiliado = numAfiliado;
	this->Ayunas = ayunas;
	this->Hematocrito = hematocrito;
	this->Saturacion = saturacion;
	this->Edad = edad;
}

cPaciente::~cPaciente()
{

}





