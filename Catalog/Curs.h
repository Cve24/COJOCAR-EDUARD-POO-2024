#pragma once
#include "pch.h"

using namespace System;

ref class Curs
{
public:
	Curs(String^ numeCurs, String^ numeProfesor, int nrCredite);
	void afiseazaDetaliiCurs();
	literal String^ facultate = "Facultatea de Stiinte";

private:
	String^ nume;
	String^ profesor;
	int credite;
};
