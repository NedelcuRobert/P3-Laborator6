#include "carteTelefon.h"

int main() {

	CCarteTelefon carte;

	int dim;
	cout << "Numar abonati:";cin >> dim;

	CAbonat* abonati = new CAbonat[dim];

	for (int i = 0;i < dim;i++) {
		abonati[i].citire_abonat();
	}

	
	for (int i = 0;i < dim;i++) {
		carte.adaugare_abonat(abonati[i]);
	}

	carte.afisare_abonati();

	string n;
	cout << "Nume pentru cautare" << endl;cin >> n;

	carte.cautare_abonat(n);

	delete[] abonati;

	return 0;
}