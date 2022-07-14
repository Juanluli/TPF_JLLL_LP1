#include "cIntervencionT.h"

cIntervencion::cIntervencion(cMedico* medico, string diagnostico, float montoAbonar)
{
	this->Medico = medico;
	this->Diagnostico = diagnostico;
	this->FechayHoraIntervencion = new cFechayHora(); ///// ?lo creo din?mico con un "new"?
	this->MontoAbonar = montoAbonar;
}

cIntervencion::~cIntervencion()
{

}


//Clase Cirugia

cCirugia::cCirugia(cMedico* medico, string diagnostico, float montoAbonar, bool ambulatorio, cMedico* medicoAd, cEnfermero* enfermero, string nombreProcedimiento, float duracion) : cIntervencion(medico, diagnostico, montoAbonar)
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
			else if (paciente->Edad > 25 && paciente->Saturacion >= 95)
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
			else if (paciente->Edad > 25 && paciente->Saturacion >= 95)
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

//Clase Consultas

cConsultas::cConsultas(cMedico* medico, string diagnostico, float montoAbonar, string indicaciones) : cIntervencion(medico, diagnostico, montoAbonar)
{
	this->Indicaciones = indicaciones;
}

cConsultas::~cConsultas()
{

}

void cConsultas::RealizarIntervencion() {}

void cConsultas::ImprimirInformacion(string diagnostico, string indicaciones)
{
	cout << "El paciente ha recibido las indicaciones de: " << indicaciones << endl;
	cout << "Ademas, su diagn?stico es: " << diagnostico << endl;
}

//Clase Practicas

cPracticas::cPracticas(cMedico* medico, string diagnostico, float montoAbonar, string informe, bool oSAutorizado) : cIntervencion(medico, diagnostico, montoAbonar)
{
	this->Informe = informe;
	this->OSAutorizado = oSAutorizado;
}

cPracticas::~cPracticas()
{

}

void cPracticas::RealizarIntervencion() {}

void cPracticas::PedirAutorizacionOS(cPaciente* paciente)
{
	if (paciente->getObraSocial() == true) {
		this->OSAutorizado == true;
	}
	else this->OSAutorizado == false;
}

