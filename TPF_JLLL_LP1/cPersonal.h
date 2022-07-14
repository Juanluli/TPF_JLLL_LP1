#pragma once

#include "cLibrerias.h"
#include "cFechayHora.h"

class cPersonal
{
protected:
	const string DNI;
	string Nombre;
	eSexo Sexo;
	const cFechayHora* FechaNaciemiento; 

public: 
	cPersonal(const string dni, string nombre, eSexo sexo, const cFechayHora* fechaNacimiento);
	virtual ~cPersonal();


};

