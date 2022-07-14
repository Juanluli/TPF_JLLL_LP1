#include "cSistema.h"

cSistema::cSistema()
{
	this->Lista_historiasClinicas = new cLista_template<cHistoriaClinica>();
	this->Lista_personal = new cLista_template<cPersonal>();
}

cSistema::~cSistema() {

}

void cSistema::Agregar(cHistoriaClinica* historiaClinica, cPersonal* pesonal)
{
	/*if () {

	}
	else if 
	*/
}

void cSistema::Eliminar() 
{

}

void cSistema::Quitar()
{

}

void cSistema::Buscar()
{

}

void cSistema::Listar()
{

}

void cSistema::Buscar(string dni, string iD_HistoriaClinica)
{

}

void cSistema::ImprimirProcedimiento()
{

}

void cSistema::AgregarHistoriaClinica()
{

}

void cSistema::CalcularGanancia()
{

}

void cSistema::MedicamentoMasUsado()
{

}