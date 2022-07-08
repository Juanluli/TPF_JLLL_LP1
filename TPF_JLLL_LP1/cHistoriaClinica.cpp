#include "cHistoriaClinica.h"

int cHistoriaClinica::ID_HistoriaClinica = 0;
cHistoriaClinica::cHistoriaClinica(cPaciente* paciente, bool internado)
{
	this->Paciente = paciente;
	this->Internado = internado;
	this->Lista_intervenciones = new cLista_template<cIntervencion>();
}

cHistoriaClinica::~cHistoriaClinica()
{
	delete this->Lista_intervenciones;
}


void cHistoriaClinica::AgregarIntervencion(cIntervencion* intervencion)
{
	this->Lista_intervenciones->Agregar(intervencion);
}