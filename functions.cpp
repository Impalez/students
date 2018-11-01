#include "head.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


void citire(int numar, grupa students[]) {

	int iterator, jiterator;

	for (iterator = 0; iterator < numar; iterator++)
	{
		cout << "\nNumele studentului: ";
		cin >> students[iterator].nume;

		cout << "\nPrenumele studentului: ";
		cin >> students[iterator].prenume;

		cout << "\n Orasul elevului este: ";
		cin >> students[iterator].adresa.numeOras;

		cout << "\n Codul orasului este: ";
		cin >> students[iterator].adresa.codOras;

		cout << "\n Strada: ";
		cin >> students[iterator].adresa.strada;

		cout << "\n Cu numarul: ";
		cin >> students[iterator].adresa.numar;


		cout << "\n Prefixul telefonului: ";
		cin >> students[iterator].nrTelefon.prefix;

		cout << "\n Numarul telefonului: ";
		cin >> students[iterator].nrTelefon.efectiv;

		cout << "\n Facultatea: ";
		cin >> students[iterator].facultate;

		cout << "\n Varsta: ";
		cin >> students[iterator].varsta;

		int sum = 0;

		for (jiterator = 0; jiterator < 10; jiterator++)
		{
			cout << "Nota " << jiterator << " este ";
			cin >> students[iterator].note[jiterator];

			sum += students[iterator].note[jiterator];
			
		}

		students[iterator].media =(float) sum / 10;
		

		cout << "Numarul de absente la examene: ";
		cin >> students[iterator].numarAbsente;
		

	}

	int option;

	do {
		cout << "\nDoriti sa reveniti la inceput?\n1 - Da\n0 - Nu\n\n";
		cin >> option;
	} while (option < 0 || option > 1);

	if (!option) {
		cout << "La revedere!";
		return;

	}
	else switchOptions(numar, students);
}

void afisare(int numar, grupa students[]) {
	int iterator;

	system("cls");

	for (iterator = 0; iterator < numar; iterator++)
	{
		cout << "Date despre studentul cu numarul " << iterator + 1 << endl;
		cout << " -------------------------\n";

		cout << "Numele si prenumele studentului " << students[iterator].nume << " " << students[iterator].prenume;
		cout << "\n Orasul elevului este: " << students[iterator].adresa.numeOras;

		cout << "\n Codul orasului este: " << students[iterator].adresa.codOras;

		cout << "\n Strada: " << students[iterator].adresa.strada;

		cout << "\n Cu numarul: " << students[iterator].adresa.numar;

		cout << "\n Prefixul telefonului: " << students[iterator].nrTelefon.prefix;

		cout << "\n Numarul telefonului: " << students[iterator].nrTelefon.efectiv;

		cout << "\n Facultatea: " << students[iterator].facultate;

		cout << "\n Varsta: " << students[iterator].varsta;

		cout << "\nMedia studentului este: " << students[iterator].media;

		cout << "\nNumarul de absente la examene: " << students[iterator].numarAbsente << "\n\n";

	}

	int option;

	do {
		cout << "\nDoriti sa reveniti la inceput?\n1 - Da\n0 - Nu\n\n";
		cin >> option;
	} while (option < 0 || option > 1);

	if (!option) {
		cout << "La revedere!";
		return;

	} 
	else switchOptions(numar, students);

}

void modificare(int numar, grupa students[])
{
	int student;

	do {
		cout << "\n La al catelea student doriti sa modificati informatii? \n";
		cin >> student;
		
		if (student > numar)
			cout << "Numar prea mare, reincercati\n";
	} while (student > numar);

	student -= 1;

	int x = -1;

	system("cls");

	do {
		cout << "Ce doriti sa modificati?\n 1. Nume \n 2. Prenume \n 3. Orasul \n 4. Codul orasului \n 5. Strada \n 6. Numarul strazii \n 7. Prefixul telefonului \n 8. Numarul de telefon \n 9. Facultatea \n 10. Varsta \n 11. Numarul de absente la examen \n 12. Nota la examen \n0. Revenire \n";
		cin >> x;

	} while (x < 0 || x > 12);

	int var;


	switch (x)
	{
	case 1:
		cout << "\n Introduceti noul nume: ";
		cin >> students[student].nume;
		break;

	case 2:
		cout << "\n Introduceti noul prenume: ";
		cin >> students[student].prenume;
		break;

	case 3:
		cout << "\n Introduceti noul oras: ";
		cin >> students[student].adresa.numeOras;
		break;

	case 4:
		cout << "\n Introduceti noul cod al orasului: ";
		cin >> students[student].adresa.codOras;
		break;

	case 5:
		cout << "\n Introduceti noua strada: ";
		cin >> students[student].adresa.strada;
		break;

	case 6:
		cout << "\n Introduceti noul numar de pe strada: ";
		cin >> students[student].adresa.numar;
		break;

	case 7:
		cout << "\n Introduceti noul prefix al telefonului: ";
		cin >> students[student].nrTelefon.prefix;
		break;

	case 8:
		cout << "\n Introduceti noul numar de telefon: ";
		cin >> students[student].nrTelefon.efectiv;
		break;

	case 9:
		cout << "\n Introduceti noua facultate: ";
		cin >> students[student].facultate;
		break;

	case 10:
		cout << "\n Introduceti noua varsta: ";
		cin >> students[student].varsta;
		break;

	case 11:
		cout << "\n Noul numar de absente: ";
		cin >> students[student].numarAbsente;
		break;

	case 12:
		cout << "\n A cata nota doriti sa o modificati? ";
		cin >> var;
		cout << "\n Care este noua nota?";
		cin >> students[student].note[var];
		break;


	case 0:
		switchOptions(numar, students);

	default:
		break;
	}

	int option;

	do {
		cout << "\nDoriti sa reveniti la inceput?\n1 - Da\n0 - Nu\n\n";
		cin >> option;
	} while (option < 0 || option > 1);

	if (!option) {
		cout << "La revedere!";
		return;

	}
	else switchOptions(numar, students);
}

void stergereStudent(int numar, grupa students[])
{
	

	int varx, iterator;
	cout << "\n Al catelea student doriti sa fie sters?\n";
	cin >> varx;

	varx -= 1;

	if (varx < numar)
	{
		for (iterator = varx; iterator < numar - 1; iterator++)
			students[iterator] = students[iterator + 1];
	}
	numar--;

	int option;

	do {
		cout << "\nDoriti sa reveniti la inceput?\n1 - Da\n0 - Nu\n\n";
		cin >> option;
	} while (option < 0 || option > 1);

	if (!option) {
		cout << "La revedere!";
		return;

	}
	else switchOptions(numar, students);

}

void mediaMaxima(int numar, grupa students[]) {


	float max = 0.f;
	int pos = 0;

	for (int iterator = 0; iterator < numar; iterator++)
		if (students[iterator].media >= max) {
			max = students[iterator].media;
			pos = iterator;
		}

	cout << "\nElevul cu media cea mai mare, " << max << ", este " << students[pos].nume << " " << students[pos].prenume << endl;

	int option;

	do {
		cout << "\nDoriti sa reveniti la inceput?\n1 - Da\n0 - Nu\n\n";
		cin >> option;
	} while (option < 0 || option > 1);

	if (!option) {
		cout << "La revedere!";
		return;

	}
	else switchOptions(numar, students);
}

void determinaRestante(int numar, grupa students[]) {
	int maxRestante = 0, pos = 0;

	for (int i = 0; i < numar; i++) {

		int numarRestante = 0;

		for (int j = 0; j < 10; j++)
			if (students[i].note[j] < 5) numarRestante++;

		if (numarRestante > maxRestante)
			maxRestante = numarRestante, pos = i;
	}

	cout << students[pos].nume << " " << students[pos].prenume << " are cele mai multe restante, " << maxRestante << endl;

	int option;

	do {
		cout << "\nDoriti sa reveniti la inceput?\n1 - Da\n0 - Nu\n\n";
		cin >> option;
	} while (option < 0 || option > 1);

	if (!option) {
		cout << "La revedere!";
		return;

	}
	else switchOptions(numar, students);
}

void studentiPromovati(int numar, grupa students[])
{
	int iterator;

	for (iterator = 0; iterator < numar; iterator++)
	{
		if (students[iterator].media > 5)
		cout << students[iterator].nume <<" "<< students[iterator].prenume << endl;

	}
	int option;

	do {
		cout << "\nDoriti sa reveniti la inceput?\n1 - Da\n0 - Nu\n\n";
		cin >> option;
	} while (option < 0 || option > 1);

	if (!option) {
		cout << "La revedere!";
		return;

	}
	else switchOptions(numar, students);

}

void studentiRestanieri(int numar, grupa students[])
{
	int iterator;

	for (iterator = 0; iterator < numar; iterator++)
	{
		if (students[iterator].media < 5)
			cout << students[iterator].nume << " " << students[iterator].prenume << endl;

	}

	int option;

	do {
		cout << "\nDoriti sa reveniti la inceput?\n1 - Da\n0 - Nu\n\n";
		cin >> option;
	} while (option < 0 || option > 1);

		if (!option) {
			cout << "La revedere!";
			return;

		}
		else switchOptions(numar, students);
	
}



void switchOptions(int numarulStudentilor, grupa students[]) {

	int x=-1;

	do {
		system("cls");

		cout << "Alegeti o optiune\n 1. Creati un tablou \n 2. Afisare studenti \n 3. Modifica informatiile despre un student \n 4. Sterge un student \n 5. Media maxima \n 6. Numarul restantelor \n 7. Afisare studenti promovati \n 8. Afisare studenti restantieri \n 0. Iesire din program\n";
		cin >>x;

	} while (x < 0 || x > 9);

	switch (x)
	{
	case 1:
		citire(numarulStudentilor, students);
		break;

	case 2:
		afisare(numarulStudentilor, students);
		break;

	case 3:
		modificare(numarulStudentilor, students);
		break;

	case 4:
		stergereStudent(numarulStudentilor, students);
		break;

	case 5:
		mediaMaxima(numarulStudentilor, students);
		break;

	case 6:
		determinaRestante(numarulStudentilor, students);
		break;

	case 7:
		studentiPromovati(numarulStudentilor, students);
		break;

	case 8:
		studentiRestanieri(numarulStudentilor, students);
		break;

	case 0:
		system("cls");
		cout << "O zi buna!";
		return;

	default:
		break;
	}
}
