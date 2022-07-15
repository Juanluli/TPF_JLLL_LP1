#ifndef CINTERVENCION_H
#define CINTERVENCION_H

#include "cLibrerias.h"
#include "cMedico.h"
#include "cFechayHora.h"
#include "cMedicamento.h"

class cIntervencion
{
protected:
	cMedico* Medico;
	string Diagnostico;
	cFechayHora* FechayHoraIntervencion;
	float MontoAbonar;
public:
	cIntervencion(cMedico* medico, string diagnostico, float montoAbonar);
	virtual ~cIntervencion(); //debe ser virtual

	virtual void RealizarIntervencion(cHistoriaClinica* historiaClinica) = 0;

	void setDiagnostico(string diagnostico) { this->Diagnostico = diagnostico; }

	cFechayHora* getFechayHoraIntervencion() { return this->FechayHoraIntervencion; }

	float getMontoAbonar() { return MontoAbonar; }

};

///////////////////////Clase cirugia

class cCirugia :
	public cIntervencion
{
private:
	bool Ambulatorio;
	cMedico* MedicoAd;
	cEnfermero* Enfermero;
	string NombreProcedimiento;
	cFechayHora* FechayHoraInicio;
	float Duracion;
	cLista_template<cMedicamento>* ListaMedicamentos;
	cFechayHora* FechaAlta;

public:
	cCirugia(cMedico* medico, string diagnostico, float montoAbonar, bool ambulatorio, cMedico* medicoAd, cEnfermero* enfermero, string nombreProcedimiento, float duracion);
	~cCirugia();

	void RealizarIntervencion(cHistoriaClinica* historiaClinica);

	bool Prequirurgico(cPaciente* paciente);

	void AgregarMedicamento(cMedicamento* medicamento);

	cLista_template<cMedicamento>* getListaMedicamentos() { return ListaMedicamentos; }
};

///////////////////////////Clase Consultas
class cConsultas :
	public cIntervencion
{
private:
	string Indicaciones;
public:
	cConsultas(cMedico* medico, string diagnostico, float montoAbonar, string indicaciones);
	~cConsultas();

	void RealizarIntervencion(cHistoriaClinica* historiaClinica);

	void ImprimirInformacion(string diagnostico, string indicaciones); //Imprime las Indicaciones y el Diagnostico

	void setIndicaciones(string indicaciones) { this->Indicaciones = indicaciones; }
};

/////////////////////////////Clase Practicas
class cPracticas :
	public cIntervencion
{
private:
	string Informe;
	bool OSAutorizado;
public:
	cPracticas(cMedico* medico, string diagnostico, float montoAbonar, string informe, bool oSAutorizado);
	~cPracticas();

	void RealizarIntervencion(cHistoriaClinica* historiaClinica); //debe actualizar informe

	void PedirAutorizacionOS(cPaciente* paciente);

};

#endif