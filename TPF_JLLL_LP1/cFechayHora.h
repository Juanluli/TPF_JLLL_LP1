#pragma once

#include "cLibrerias.h"
#include <time.h>

class cFechayHora
{
	friend class cPaciente;
private:
	tm fecha;
public:
	cFechayHora(); //construye inicializando en el dia de hoy
	cFechayHora(int dia, int mes, int anio); //inicializa solo los dias
	cFechayHora(int dia, int mes, int anio, int hora, int minutos); //inicializa todas las variables
	~cFechayHora(); //destructor

	void SetHoy(); //setea la fecha en el dia de hoy

	int get_mes() { return this->fecha.tm_mon; }

	int get_anio() { return this->fecha.tm_year; }

	int get_dia() { return this->fecha.tm_mday;  }

//	bool Cual_es_anterior(cFechayHora* fecha); // compara dos fechas. true: this es anterior. false: fecha es anterior.
};

