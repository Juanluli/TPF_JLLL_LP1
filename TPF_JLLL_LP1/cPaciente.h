
#include "cLibrerias.h"
#include "cFechayHora.h"

#ifndef CPACIENTE_H
#define CPACIENTE_H

class cPaciente
{
	friend class cCirugia; // La clase cCirugia puede acceder a los atributos privados de cPaciente

private:
	const string DNI;
	string Nombre;
	const cFechayHora* FechaNacimiento;
	eSexo Sexo;
	bool ObraSocial;
	string NumAfiliado;
	bool Ayunas;
	int Hematocrito;
	int Saturacion;
	int Edad;
public: 
	cPaciente(const string dni, string nombre, eSexo sexo, const cFechayHora* fechaNacimiento, bool obraSocial, string numAfiliado, bool ayunas, int hematocrito, int saturacion, int edad);
	~cPaciente();

	bool getAyunas() { return this->Ayunas;  }
	bool getObraSocial() { return this->ObraSocial; }
	string getDNI() { return this->DNI; }

};

#endif // !CPACIENTE_H