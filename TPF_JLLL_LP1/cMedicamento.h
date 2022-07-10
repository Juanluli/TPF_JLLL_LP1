#pragma once

#include "cLibrerias.h"
#include "cFechayHora.h"

class cMedicamento
{
private:
	string Nombre;
	string Marca;
	cFechayHora* FechaVencimiento;

public:
	cMedicamento(string nombre, string marca, cFechayHora* fechaVencimiento);
	~cMedicamento();

	cFechayHora* getFechaVencimiento() { return this->FechaVencimiento; }
};

