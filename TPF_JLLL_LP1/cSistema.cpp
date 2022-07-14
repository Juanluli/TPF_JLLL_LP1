#include "cSistema.h"

cSistema::cSistema()
{
	this->Lista_historiasClinicas = new cLista_template<cHistoriaClinica>();
	this->Lista_personal = new cLista_template<cPersonal>();
}

cSistema::~cSistema() {

}

void cSistema::Agregar(cHistoriaClinica* historiaClinica, cPersonal* personal)
{
	if (historiaClinica != NULL)  {
		this->Lista_historiasClinicas->Agregar(historiaClinica);
	}

	if (personal != NULL) {
		this->Lista_personal->Agregar(personal);
	}
}

void cSistema::Eliminar(cHistoriaClinica* historiaClinica, cPersonal* personal)
{
	if (historiaClinica != NULL) {
		this->Lista_historiasClinicas->Eliminar(historiaClinica);
	}

	if (personal != NULL) {
		this->Lista_personal->Eliminar(personal);
	}
}

void cSistema::Quitar(cHistoriaClinica* historiaClinica, cPersonal* personal)
{
	if (historiaClinica != NULL) {
		this->Lista_historiasClinicas->Quitar(historiaClinica);
	}

	if (personal != NULL) {
		this->Lista_personal->Quitar(personal);
	}
}

void cSistema::Buscar(cHistoriaClinica* historiaClinica, cPersonal* personal)
{
	if (historiaClinica != NULL) {
		this->Lista_historiasClinicas->Buscar(historiaClinica);
	}

	if (personal != NULL) {
		this->Lista_personal->Buscar(personal);
	}
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