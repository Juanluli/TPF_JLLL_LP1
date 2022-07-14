#pragma once

#include "cLibrerias.h"

using namespace std;

#define NMAX 20

template <class t>
class cLista_template
{
private:
	t** Lista;
	unsigned int Cant_max;
	unsigned int Cant_actual;
public:
	cLista_template(unsigned int Cant_max = NMAX, unsigned int Cant_actual = 0);
	~cLista_template();

	void Agregar(t* objeto);
	void Eliminar(t* objeto);
	int Buscar(t* objeto);
	t* Quitar(t* objeto);
	void resize();

	void operator+(t* objeto);
	t* operator[](int i);

	// friend ostream& operator<< <>(ostream&, const cLista_template<t>&); ///// LA HE COMENTADO YO

	int get_cant_actual() {
		return this->Cant_actual;
	}
};

//constructor
template<class t>
inline cLista_template<t>::cLista_template(unsigned int Cant_max, unsigned int Cant_actual)
{
	this->Cant_actual = 0;
	this->Cant_max = NMAX;

	this->Lista = new t * [Cant_max];
	for (int i = 0; i < Cant_max; i++)
	{
		this->Lista[i] = NULL;
	}
}

//destructor
template<class t>
cLista_template<t>::~cLista_template()
{
	if (this->Lista != NULL)
	{
		for (int i = 0; i < this->Cant_actual; i++)
		{
			if (this->Lista[i] != NULL) {
				this->Lista[i] = NULL;
				delete this->Lista[i];
			}
		}
		delete this->Lista;
	}
}


//agrego un objeto a la lista
template<class t>
void cLista_template<t>::Agregar(t* objeto)
{
	if (this->Cant_actual >= this->Cant_max) //verifico que no este completa la lista
	{
		this->resize();
	}

	t* aux = dynamic_cast<t*>(objeto);

	if (aux != NULL) {
		this->Lista[Cant_actual] = aux;
		this->Cant_actual++;
	}

	else throw new exception;
}

//elimino de la lista
template<class t>
void cLista_template<t>::Eliminar(t* objeto)
{
	try {
		int aux = 0;
		aux = this->Buscar(objeto); //busco el objeto a eliminar, si no esta devuelvo -1 
	}
	catch (...) //aux = -1
	{
		throw new exception; //tiro excepcion
		return;
	}
	int aux = this->Buscar(objeto);
	for (int i = aux; i < this->Cant_actual; i++)
	{
		this->Lista[i] = this->Lista[i + 1];
	}
	this->Cant_actual--;
}

//buscar objeto
template<class t>
int cLista_template<t>::Buscar(t* objeto)
{
	for (unsigned int i = 0; i < this->Cant_actual; i++)
	{
		if (this->Lista[i] == objeto)
		{
			return i; //si lo encuentro devuelvo la pos
		}
	}
	return -1; //si no lo encuentro
}

template <class t>
t* cLista_template<t>::Quitar(t* objeto)
{
	unsigned int i = Buscar(objeto);
	if (i >= Cant_actual)return NULL;
	t* aux = NULL;
	aux = Lista[i];
	Cant_actual--;
	for (unsigned int j = i; j < Cant_actual; j++)
	{
		Lista[j] = Lista[j + 1];
	}
	Lista[Cant_actual] = NULL;
	return aux;
}

//cambia el tamaño de la lista
template<class t>
inline void cLista_template<t>::resize() {

	unsigned int nuevo_tam = this->Cant_max + 1;
	t** nueva_lista = new t * [nuevo_tam];

	memcpy(nueva_lista, this->Lista, sizeof(t*) * this->Cant_max);

	delete[] this->Lista;
	this->Lista = nueva_lista;
	this->Cant_max = nuevo_tam;
}


//sobrecarga []
template<class t>
inline t* cLista_template<t>::operator[](int i) //devuelve un elemento de la lista en la posicion i
{
	return this->Lista[i];
}