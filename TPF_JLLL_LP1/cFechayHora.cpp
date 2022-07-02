#define _CRT_SECURE_NO_WARNINGS
#include "cFechayHora.h"

cFechayHora::cFechayHora()
{
	fecha.tm_hour = 0;
	fecha.tm_min = 0;
	fecha.tm_sec = 0;
	fecha.tm_mday = 0;
	fecha.tm_mon = 0;
	fecha.tm_year = 0;
	fecha.tm_wday = 0;
	fecha.tm_yday = 0;
	fecha.tm_isdst = 0;
	SetHoy();
}

cFechayHora::cFechayHora(int dia, int mes, int anio)
{
	fecha.tm_hour = 0;
	fecha.tm_min = 0;
	fecha.tm_sec = 0;
	fecha.tm_mday = dia;
	fecha.tm_mon = mes - 1;
	fecha.tm_year = anio;
	fecha.tm_wday = 0;
	fecha.tm_yday = 0;
	fecha.tm_isdst = 0;
}

cFechayHora::cFechayHora(int dia, int mes, int anio, int hora, int minutos)
{
	fecha.tm_hour = hora;
	fecha.tm_min = minutos;
	fecha.tm_sec = 0;
	fecha.tm_mday = dia;
	fecha.tm_mon = mes - 1;
	fecha.tm_year = anio - 1900;
	fecha.tm_wday = 0;
	fecha.tm_yday = 0;
	fecha.tm_isdst = 0;
}

cFechayHora::~cFechayHora()
{
}

void cFechayHora::SetHoy()
{
	time_t now = time(0); //guardo en segundos la fecha actual
	tm* aux = localtime(&now); //paso now a tm
	fecha.tm_mday = aux->tm_mday;
	fecha.tm_mon = aux->tm_mon;
	fecha.tm_year = aux->tm_year;
	fecha.tm_hour = aux->tm_hour;
	fecha.tm_min = aux->tm_min;
	fecha.tm_sec = aux->tm_sec;
}