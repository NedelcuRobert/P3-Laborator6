#include "abonat.h"

void CAbonat::citire_adresa() {
	cout << "Oras:" << endl;cin >> adresa.oras;
	cout << "Strada:" << endl;cin >> adresa.strada;
	cout << "Numar locuinta:" << endl;cin >> adresa.nr_loc;
}

void CAbonat::citire_abonat() {
	cout << "Nume:" << endl;cin >> nume;
	cout << "Adresa" << endl;citire_adresa();
	cout << "Numar telefon:" << endl;cin >> nr_tel;
}

