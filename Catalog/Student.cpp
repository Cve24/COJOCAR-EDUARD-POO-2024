#include "pch.h"
#include "Student.h"
#include "Curs.h"

using namespace System;
using System::Collections::Generic::List;

Student::Student(String^ numeStudent, String^ prenumeStudent, List<Curs^>^ cursuriStudent)
{
	id = Guid::NewGuid().ToString();
	nume = numeStudent;
	prenume = prenumeStudent;
	cursuri = cursuriStudent;
}

Student::~Student()
{
	cursuri->Clear();
	cursuri = nullptr;
}

void Student::afiseazaDetaliiStudent() {
	Console::WriteLine("Detalii student --- Nume: {0}, Prenume: {1}, Id: {2}", nume, prenume, id);
	for each (Curs^ curs in cursuri) {
		curs->afiseazaDetaliiCurs();
	}
}

void Student::inscrieLaCurs(Curs^ curs) {
	cursuri->Add(curs);
}
