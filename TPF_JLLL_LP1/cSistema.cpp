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
	if (historiaClinica != NULL) {
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

cHistoriaClinica* cSistema::Buscar(string dni, int iD_HistoriaClinica)
{
	unsigned int i = 0;
	while (this->Lista_historiasClinicas->operator[](i) != NULL) {
		if (this->Lista_historiasClinicas->operator[](i)->ID_HistoriaClinica == iD_HistoriaClinica || this->Lista_historiasClinicas->operator[](i)->Paciente->getDNI() == dni) {
			return this->Lista_historiasClinicas->operator[](i);
		}
		i++;
	}
	return NULL; //si no encuentra nada
}

void cSistema::ImprimirProcedimiento()
{

}

void cSistema::AgregarHistoriaClinica(cHistoriaClinica* historiaClinica) //verificaciones previas
{
	if (this->Buscar(historiaClinica->Paciente->getDNI(), historiaClinica->ID_HistoriaClinica) == NULL) { //si buscando me devuelve nulo es que no hay coincidencias ya
		this->Lista_historiasClinicas->Agregar(historiaClinica);
	}
	else throw exception("Existe el id o la historia clinica del paciente");
}

void cSistema::CalcularGanancia(float& ganancias, int& cantPracticas, int& cantCirugias, int& cantConsultas) //pasamos por referencia
{
	int i = 0;
	cFechayHora actual; //para crear la fecha y hora actual
	//los usaré como acumuladores
	ganancias = 0;
	cantPracticas = 0;
	cantCirugias = 0;
	cantConsultas = 0;

	while (this->Lista_historiasClinicas->operator[](i) != NULL) { //va a ir recorriendo la lista
		int j = 0;
		cHistoriaClinica* aux = this->Lista_historiasClinicas->operator[](i); //le asignamos el elemento de la lista en esa posicion

		while (aux->Lista_intervenciones->operator[](j) != NULL) {
			cFechayHora* fyh = aux->Lista_intervenciones->operator[](j)->getFechayHoraIntervencion(); //la fyh de cada intervencion de la lista la guarda en fyh

			if (fyh->get_anio() == actual.get_anio() && fyh->get_mes() == actual.get_mes()) {
				cCirugia* auxCirugia = dynamic_cast<cCirugia*>(aux->Lista_intervenciones->operator[](j));
				if (auxCirugia != NULL) {
					cantCirugias++;
				}
				cConsultas* auxConsultas = dynamic_cast<cConsultas*>(aux->Lista_intervenciones->operator[](j));
				if (auxConsultas != NULL) {
					cantConsultas++;
				}
				cPracticas* auxPracticas = dynamic_cast<cPracticas*>(aux->Lista_intervenciones->operator[](j));
				if (auxPracticas != NULL) {
					cantPracticas++;
				}

				//
				ganancias = ganancias + aux->Lista_intervenciones->operator[](j)->getMontoAbonar(); //la cantidad de intervenciones realizadas aumenta el monto a abonar
			}
			else break;
		j++;
		}
	i++;
	}
}

void cSistema::MedicamentoMasUsado()
{
	int i = 0;

	while (this->Lista_historiasClinicas->operator[](i) != NULL) {
		int j = 0;
		cHistoriaClinica* aux = this->Lista_historiasClinicas->operator[](i);

		while (aux->Lista_intervenciones->operator[](j) != NULL) {
			cCirugia* cirugia = dynamic_cast<cCirugia*>(aux->Lista_intervenciones->operator[](j));
			int k = 0;

			if (cirugia != NULL) {
				cLista_template<cMedicamento>* lm = cirugia->getListaMedicamentos();

				while (lm->operator[](k) != NULL) {
					//switch que dependediendo el medicamento incremente la cantidad de cada uno, no se que medicamentos pueden ser utilizados en la cirugia
					k++;
				}
			}
			j++;
		}
		i++;
	}
}