#include "cMedicamento.h"

cMedicamento::cMedicamento(string nombre, string marca, cFechayHora* fechaVencimiento)
{
	this->Nombre = nombre;
	this->Marca = marca;
	this->FechaVencimiento = fechaVencimiento;
}

cMedicamento::~cMedicamento()
{
	
}