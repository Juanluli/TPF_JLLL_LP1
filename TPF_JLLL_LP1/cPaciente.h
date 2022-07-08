

#include "cLibrerias.h"
#include "cFechayHora.h"

#ifndef CPACIENTE_H
#define CPACIENTE_H

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

#endif // !CPACIENTE_H