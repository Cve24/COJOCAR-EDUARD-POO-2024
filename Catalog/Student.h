#pragma once
#include "pch.h"
#include "Curs.h"

using namespace System;
using System::Collections::Generic::List;

ref class Student
{
public:
	Student(String^ numeStudent, String^ prenumeStudent, List<Curs^>^ cursuriStudent);
	
	~Student();

	void afiseazaDetaliiStudent();
	void inscrieLaCurs(Curs^ curs);

private:
	String^ id;
	String^ nume;
	String^ prenume;
	List<Curs^>^ cursuri;
};