#include <iostream>
#include "head.h"

using namespace std;

int main()
{ 
	int numarulStudentilor = 4;

	grupa students[] = {
	{"Ionescu", "Marian", {"Filiasi", 10, "Pacii", 3}, {40, 7621584}, "ACE", 20, {9,9,9,9,9,9,9,9,9,9}, 9.f, 0},
	{"Popescu", "Ionel", {"Craiova", 252, "Spitalului", 28}, {40, 76264832}, "ACE", 21, {8,8,8,8,8,10,10,10,10,10}, 9.35f, 0},
	{"Georgescu", "George", {"Pitesti", 35, "Mihai Eminescu", 6}, {40, 76218789}, "ACE", 22, {8,8,8,8,8,10,10,10,10,10}, 9.45f, 0},
	{"Melinescu", "Mihai", {"Timisoara", 68, "Tudor Vladimirescu", 15}, {40, 774877775}, "ACE", 23, {1,1,1,1,8,10,10,10,10,10}, 4.45f, 0},
     };
	int x = -1;

	// cout << "Care este numarul studentilor?\n";
	// cin >> numarulStudentilor;

	// students = new grupa[numarulStudentilor];

	switchOptions(numarulStudentilor, students);


	return 0;
}
