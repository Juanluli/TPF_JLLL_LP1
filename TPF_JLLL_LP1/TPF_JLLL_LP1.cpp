// TPF_JLLL_LP1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "cLibrerias.h"
#include "cPaciente.h"
#include "cHistoriaClinica.h"
#include "cMedico.h"
#include "cEnfermero.h"
#include "cIntervencionT.h"
#include "cMedicamento.h"
#include "cSistema.h"


int main()
{
	cPaciente* paciente1 = new cPaciente("77471678K", "José Martinez", Hombre, new cFechayHora(15, 6, 1992), true, "12336", true, 42, 98, 30);
	cPaciente* paciente2 = new cPaciente("71658278L", "Raul López", Hombre, new cFechayHora(7, 4, 2000), false, "12378", true, 50, 89, 22);
	cPaciente* paciente3 = new cPaciente("71679852Y", "Laura Garcia", Mujer, new cFechayHora(26, 11, 1982), true, "12857", true, 40, 96, 39);

	cHistoriaClinica* historiaClinica1 = new cHistoriaClinica(paciente1, true);
	cHistoriaClinica* historiaClinica2 = new cHistoriaClinica(paciente2, false);
	cHistoriaClinica* historiaClinica3 = new cHistoriaClinica(paciente3, true);

	cMedico* medico1 = new cMedico("77892711P", "José Hernandez", Hombre, new cFechayHora(11, 6, 1965), "96-156", "Reumatologia");
	cMedico* medico2 = new cMedico("77897489P", "Rafael Garcia", Hombre, new cFechayHora(11, 6, 1989), "96-152", "Oncología");
	cEnfermero* enfermero1 = new cEnfermero("7787822L", "Marina Camacho", Mujer, new cFechayHora(11, 4, 1975), "52-962", true);
	cEnfermero* enfermero2 = new cEnfermero("7788524L", "Cristina Lopez", Mujer, new cFechayHora(1, 2, 1982), "52-372", true);

	cCirugia* cirugia1 = new cCirugia(medico1, "Tiene una neumonía", 40000, true, medico2, enfermero1, "Operacion pulmonar", 125 );
	cCirugia* cirugia2 = new cCirugia(medico2, "Tiene diverticulosis", 30000, true, medico1, enfermero1, "Operacion digestiva", 160);
	cConsultas* consulta1 = new cConsultas(medico1, "Reconocimiento inespecifico", 20000, "Sin indicaciones");
	cConsultas* consulta2 = new cConsultas(medico2, "Derivacion a especialista", 15000, "Paracetamol"); 
	cPracticas* practica1 = new cPracticas(medico1, "Requiere cirugia", 30000, "El paciente presenta un edema agudo de pulmon", true);
	cPracticas* practica2 = new cPracticas(medico2, "Paciente en estado crítico", 25000, "El paciente necesita ser ingresado en la UCI", true);

	cMedicamento* medicamento1 = new cMedicamento("Ibuprofeno", "Bayern", new cFechayHora(11, 6, 2024));
	
	cirugia1->AgregarMedicamento(medicamento1);

	historiaClinica1->AgregarIntervencion(cirugia1);
	historiaClinica2->AgregarIntervencion(consulta2);
	historiaClinica3->AgregarIntervencion(practica1);

	cSistema* Sistema = new cSistema();
	Sistema->Agregar(historiaClinica1, medico1);
	Sistema->Agregar(historiaClinica2, medico2);
	Sistema->Agregar(historiaClinica3, enfermero1);
	cout << "El Sistema conformado por las Historias Clinicas: " << historiaClinica1 << ", " << historiaClinica2 << " y " << historiaClinica3 << endl;

	float gananacias;
	int cant_practicas;
	int cant_cirugias;
	int cant_consultas;

	// ponerlo para que ponga bien las cantidades
	Sistema->CalcularGanancia(gananacias, cant_practicas, cant_cirugias, cant_consultas);
	cout << "Ha recaudado un monto de: " << gananacias << " pesos" << endl;
	cout << "Con un total de " << cant_practicas << " practica, " << cant_cirugias << " cirugia y " << cant_consultas << " consulta" << endl;

	int i = 0;
	while (Sistema->getListaHistoriasClinicas()->operator[](i) != NULL) {
		int j = 0;
		cHistoriaClinica* aux = Sistema->getListaHistoriasClinicas()->operator[](i);
		while (aux->getListaIntervenciones()->operator[](j) != NULL) {
			aux->getListaIntervenciones()->operator[](j)->RealizarIntervencion(aux); //le pasamos "aux" que es la historia clinica en cuestion
			j++;
		}
		i++;
	}

	delete paciente1;
	delete paciente2;
	delete paciente3;
	delete historiaClinica1;
	delete historiaClinica2;
	delete historiaClinica3;
	delete medico1;
	delete medico2;
	delete enfermero1;
	delete enfermero2;
	delete cirugia1;
	delete cirugia2;
	delete consulta1;
	delete consulta2;
	delete practica1;
	delete practica2;

}
