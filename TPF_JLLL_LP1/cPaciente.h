#pragma once

#include "cLibrerias.h"
#include "cFechayHora.h"

class cPaciente
{
private:
	const string DNI;
	string Nombre;
	const cFechayHora* FechaNacimiento;
	//eSexo Sexo;
	const string ObraSocial;
	string NumAfiliado;
public: 
	cPaciente(const string dni, string nombre, const cFechayHora* fechaNacimiento, const string obraSocial, string numAfiliado);
	~cPaciente();

};

