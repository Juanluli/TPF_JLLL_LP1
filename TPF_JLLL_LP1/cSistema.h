#pragma once

#include "cLibrerias.h"
#include "cLista_template.h"
#include "cHistoriaClinica.h"
#include "cPersonal.h" //tambien funciona si lo quitamos
#include "cIntervencionT.h"
// #include "cCirugia.h"
// #include "cConsultas.h"
// #include "cPracticas.h"

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
	void Listar(); //
	cHistoriaClinica* Buscar(string dni, int iD_HistoriaClinica);
	void ImprimirProcedimiento();
	void AgregarHistoriaClinica(cHistoriaClinica* historiaClinica);
	void CalcularGanancia(float& ganancias, int& cantPracticas, int& cantCirugias, int& cantConsultas);
	void MedicamentoMasUsado();
	cLista_template<cHistoriaClinica>* getListaHistoriasClinicas() { return this->Lista_historiasClinicas; }
	cLista_template<cPersonal>* getListaPersonal() { return this->Lista_personal; }
};

