#include "pch.h"
#include "Curs.h"
#include "Student.h"
#include "Catalog.h"

using namespace System;
using System::Collections::Generic::List;

/// Creaza o lista de cursuri comune pentru toti studentii;
List<Curs^>^ listaCursuri() {
    List<Curs^>^ lista = gcnew List<Curs^>();
    for (int i = 0; i < 10; i++)
    {
        /// Cream un obiect de tip curs si il adaugam in lista;
        Curs^ curs = gcnew Curs("Curs_" + i, " Profesor_", i + 1);
        lista->Add(curs);
    }

    return lista;
}

/// Construim o lista cu obiecte de tip Student;
List<Student^>^ listaStudenti() {
    List<Curs^>^ cursuri = listaCursuri();
    List<Student^>^ studenti = gcnew List<Student^>();

    studenti->Add(gcnew Student("M", "Ionut", cursuri));
    studenti->Add(gcnew Student("R", "Alex", cursuri));
    studenti->Add(gcnew Student("T", "Andrei", cursuri));


    return studenti;
}

/// Adaugam studentii in catalog
Catalog^ creazaCatalog(List<Student^>^ studenti) {
    Catalog^ catalog = gcnew Catalog();

    for each (Student ^ s in studenti) {
        catalog->adaugaStudent(s);
    }

    return catalog;
}



int main(array<System::String^>^ args)
{
    List<Student^>^ studenti = listaStudenti();
    Catalog^ catalog = creazaCatalog(studenti);

    // Cream un nou student, adaugam cursurile existente
    // si il adaugam in catalog;
    Student^ s = gcnew Student("S", "Student Nou", listaCursuri());
    catalog->afiseazaStudenti();

    Console::WriteLine("\nAfisam detaliile noului student:");

    // Cream un nou curs si il adaugam pe studentul nou;
    Curs^ c = gcnew Curs("Cel mai nou curs", "Cel mai nou profesor", 10000);
    s->inscrieLaCurs(c);
    s->afiseazaDetaliiStudent();

    catalog->~Catalog();

    Console::ReadKey();
    return 0;
}