#include "cCirugia.h"

cCirugia::cCirugia(cMedico* medico, string diagnostico, float montoAbonar, bool ambulatorio, cMedico* medicoAd, cEnfermero* enfermero, string nombreProcedimiento, float duracion): cIntervencion(medico, diagnostico, montoAbonar)
{
	this->Ambulatorio = ambulatorio;
	this->MedicoAd = medicoAd;
	this->Enfermero = enfermero;
	this->NombreProcedimiento = nombreProcedimiento;
	this->FechayHoraInicio = new cFechayHora;
	this->Duracion = duracion;
	this->ListaMedicamentos = new cLista_template<cMedicamento>();
	this->FechaAlta = new cFechayHora();
}

cCirugia::~cCirugia()
{

}

void cCirugia::RealizarIntervencion(cPaciente* paciente) {}

void cCirugia::Prequirurgico(cPaciente* paciente) {
	if (paciente->Ayunas = true) 
	{
		if (paciente->Sexo == Hombre && 40 < paciente->Hematocrito < 45)
		{
			if (paciente->Edad <= 25 && paciente->Saturacion >= 97)
			{
				this->RealizarIntervencion(paciente);
			}
			else if(paciente->Edad > 25 && paciente->Saturacion >= 95)
			{
				this->RealizarIntervencion(paciente);
			}
			else throw exception("No cumple los requisitos");
		}
		else if (paciente->Sexo == Mujer && 38 < paciente->Hematocrito < 42)
		{
			if (paciente->Edad <= 25 && paciente->Saturacion >= 97)
			{
				this->RealizarIntervencion(paciente);
			}
			else if(paciente->Edad > 25 && paciente->Saturacion >= 95)
			{
				this->RealizarIntervencion(paciente);
			}
			else throw exception("No cumple los requisitos");
		}
		else throw exception("No cumple los requisitos");
	}
	else throw exception("No cumple los requisitos");
}

void cCirugia::AgregarMedicamento(cMedicamento* medicamento)
{
	this->ListaMedicamentos->Agregar(medicamento);
}



