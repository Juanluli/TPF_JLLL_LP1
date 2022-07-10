#include "cEnfermero.h"

cEnfermero::cEnfermero(const string dni, string nombre, const cFechayHora* fechaNacimiento, const string num_Matricula, bool turno_Trabajo) : cPersonal(dni, nombre, fechaNacimiento), Num_Matricula(num_Matricula)
{
	this->Turno_Trabajo = turno_Trabajo;
}

cEnfermero::~cEnfermero()
{

}

void cEnfermero::ModificarListaMedicamentos(cIntervencion* intervencion, cMedicamento* medicamento) //comprobar que no están vencidos
{

	cCirugia* cirugia = dynamic_cast<cCirugia*>(intervencion);
	if (cirugia != NULL) cirugia->AgregarMedicamento(medicamento);

	//¡REALMENTE SE TIENE QUE COMPROBAR QUE NO ESTÁN VENCIDOS!
	/*if (medicamento->getFechaVencimiento->get_anio < intervencion->getFechayHoraIntervencion->get_anio)
	{
		cCirugia* cirugia = dynamic_cast<cCirugia*>(intervencion);
		if (cirugia != NULL) cirugia->AgregarMedicamento(medicamento);
	}
	else throw exception("El medicamento esta caducado, la lista no puede ser modificada");
	*/
}

