#pragma once

#include "cLibrerias.h"
#include "cLista_template.h"
#include "cHistoriaClinica.h"
#include "cPersonal.h" //tambien funciona si lo quitamos

class cSistema
{
private:
	cLista_template<cHistoriaClinica>* Lista_historiasClinicas;
	cLista_template<cPersonal>* Lista_personal;

public:
	cSistema();
	~cSistema();

	void Agregar(cHistoriaClinica* historiaClinica, cPersonal* pesonal);
	void Eliminar(cHistoriaClinica* historiaClinica, cPersonal* pesonal);
	void Quitar(cHistoriaClinica* historiaClinica, cPersonal* personal);
	void Buscar(cHistoriaClinica* historiaClinica, cPersonal* personal);
	void Listar();
	void Buscar(string dni, string iD_HistoriaClinica);
	void ImprimirProcedimiento();
	void AgregarHistoriaClinica();
	void CalcularGanancia();
	void MedicamentoMasUsado();
};

