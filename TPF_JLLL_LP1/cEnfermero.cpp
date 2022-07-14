#include "cEnfermero.h"

cEnfermero::cEnfermero(const string dni, string nombre, eSexo sexo, const cFechayHora* fechaNacimiento, const string num_Matricula, bool turno_Trabajo) : cPersonal(dni, nombre, sexo, fechaNacimiento), Num_Matricula(num_Matricula)
{
	this->Turno_Trabajo = turno_Trabajo;
}

cEnfermero::~cEnfermero()
{

}

void cEnfermero::ModificarListaMedicamentos(cIntervencion* intervencion, cMedicamento* medicamento) 
{
	//¡REALMENTE SE TIENE QUE COMPROBAR QUE NO ESTÁN VENCIDOS!
	if (medicamento->getFechaVencimiento()->get_anio() > intervencion->getFechayHoraIntervencion()->get_anio()) 
	{
		cCirugia* cirugia = dynamic_cast<cCirugia*>(intervencion);
		if (cirugia != NULL) cirugia->AgregarMedicamento(medicamento);
	}
	else if (medicamento->getFechaVencimiento()->get_anio() == intervencion->getFechayHoraIntervencion()->get_anio())
	{
		if (medicamento->getFechaVencimiento()->get_mes() > intervencion->getFechayHoraIntervencion()->get_mes())
		{
			cCirugia* cirugia = dynamic_cast<cCirugia*>(intervencion);
			if (cirugia != NULL) cirugia->AgregarMedicamento(medicamento);
		}
		return;
	}
	else if (medicamento->getFechaVencimiento()->get_anio() == intervencion->getFechayHoraIntervencion()->get_anio())
	{
		if (medicamento->getFechaVencimiento()->get_mes() == intervencion->getFechayHoraIntervencion()->get_mes())
		{
			if (medicamento->getFechaVencimiento()->get_dia() > intervencion->getFechayHoraIntervencion()->get_dia())
			{
				cCirugia* cirugia = dynamic_cast<cCirugia*>(intervencion);
				if (cirugia != NULL) cirugia->AgregarMedicamento(medicamento);
			}
			return;
		}
	}
	else throw exception("El medicamento esta caducado, la lista no puede ser modificada");
}

