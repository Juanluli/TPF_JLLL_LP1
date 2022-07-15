
#include "cLibrerias.h"
#include "cPaciente.h"
#include "cLista_template.h"
#include "cIntervencionT.h"


#ifndef CHISTORIACLINICA_H
#define CHISTORIACLINICA_H

class cHistoriaClinica
{
	friend class cSistema; 

private:
	int ID_HistoriaClinica;
	static int ID_HC;
	cPaciente* Paciente;
	bool Internado;
	cLista_template<cIntervencion>* Lista_intervenciones;

public: 
	cHistoriaClinica(cPaciente* paciente, bool internado);
	~cHistoriaClinica();

	void AgregarIntervencion(cIntervencion* intervencion);

	void setInternado(bool internado) { this->Internado = internado; }

	cLista_template<cIntervencion>* getListaIntervenciones() { return this->Lista_intervenciones; }

	cPaciente* getPaciente() { return this->Paciente; }

	bool getInternado() { return this->Internado; }
};

#endif 