#pragma once

struct grupa {
	char nume[21];
	char prenume[21];

	struct {
		char numeOras[16];
		int codOras;
		char strada[26];
		int numar;
	}adresa;

	struct {
		int prefix;
		int efectiv;
	}nrTelefon;

	char facultate[4];
	int varsta;
	int note[10];
	float media;
	int numarAbsente;


};

void citire(int, grupa[]);
void afisare(int, grupa[]);
void modificare(int, grupa[]);
void stergereStudent(int, grupa[]);
void mediaMaxima(int, grupa[]);
void determinaRestante(int, grupa[]);
void studentiPromovati(int, grupa[]);
void studentiRestanieri(int, grupa[]);
void switchOptions(int, grupa[]);
