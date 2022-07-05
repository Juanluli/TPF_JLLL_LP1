#include "cCirugia.h"

cCirugia::cCirugia(cMedico* medico, string diagnostico, float montoAbonar, bool ambulatorio, cMedico* medicoAd, cEnfermero* enfermero, string nombreProcedimiento, float duracion): cIntervencion(medico, diagnostico, montoAbonar)
{
	this->Ambulatorio = ambulatorio;
	this->MedicoAd = medicoAd;
	this->Enfermero = enfermero;
	this->NombreProcedimiento = nombreProcedimiento;
	this->Duracion = duracion;
	this->ListaMedicamentos = new cLista_template<cMedicamento>();
	this->FechaAlta = new cFechayHora();
}

void cCirugia::RealizarIntervencion() {}
void cCirugia::Prequirurgico() {}