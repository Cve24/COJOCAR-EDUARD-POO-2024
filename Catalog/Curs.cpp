#include "pch.h"
#include "Curs.h"

Curs::Curs(String^ numeCurs, String^ numeProfesor, int nrCredite) {
	nume = numeCurs;
	profesor = numeProfesor;
	credite = nrCredite;
}

void Curs::afiseazaDetaliiCurs() {
	Console::WriteLine("\tDetalii curs --- Nume: {0}, Profesor: {1}, Credite: {2}, Facultate: {3}", nume, profesor, credite, Curs::facultate);
}
