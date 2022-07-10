#include "cPaciente.h"

cPaciente::cPaciente(const string dni, string nombre, eSexo sexo, const cFechayHora* fechaNacimiento, const string obraSocial, string numAfiliado, bool ayunas, int hematocrito, int saturacion, int edad): DNI(dni), FechaNacimiento(fechaNacimiento), ObraSocial(obraSocial)
{
	this->Sexo = sexo;
	this->Nombre = nombre;
	this->NumAfiliado = numAfiliado;
	this->Ayunas = ayunas;
	this->Hematocrito = hematocrito;
	this->Saturacion = saturacion;
	this->Edad = edad;
}

cPaciente::~cPaciente()
{

}




