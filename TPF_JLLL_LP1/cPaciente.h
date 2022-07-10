

#include "cLibrerias.h"
#include "cFechayHora.h"

#ifndef CPACIENTE_H
#define CPACIENTE_H

enum eSexo{Hombre, Mujer};

class cPaciente
{

	friend class cCirugia; // La clase cCirugia puede acceder a los atributos privados de cPaciente

private:
	const string DNI;
	string Nombre;
	const cFechayHora* FechaNacimiento;
	eSexo Sexo;
	const string ObraSocial;
	string NumAfiliado;
	bool Ayunas;
	int Hematocrito;
	int Saturacion;
	int Edad;
public: 
	cPaciente(const string dni, string nombre, eSexo sexo, const cFechayHora* fechaNacimiento, const string obraSocial, string numAfiliado, bool ayunas, int hematocrito, int saturacion, int edad);
	~cPaciente();

	bool getAyunas() { return this->Ayunas;  }

	int CalcularEdad(cFechayHora* fechaNacimiento);
};

#endif // !CPACIENTE_H