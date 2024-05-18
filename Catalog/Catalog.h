#pragma once
#include "pch.h"
#include "Student.h"

using namespace System;
using System::Collections::Generic::List;

ref class Catalog
{
public:
	Catalog();

	~Catalog();

	void afiseazaStudenti();

	void adaugaStudent(Student^ student);

private:
	List<Student^>^ studenti;
};

