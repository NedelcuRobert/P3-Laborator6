#include "carteTelefon.h"

CCarteTelefon::CNod::CNod() {
	abonat.nume = "";
	abonat.adresa.strada = "";
	abonat.adresa.oras = "";
	abonat.adresa.nr_loc = 0;
	abonat.nr_tel = 0;
	urm = NULL;
}

CCarteTelefon::CNod::CNod(CAbonat v) {
	abonat = v;
	urm = NULL;
}

void CCarteTelefon::adaugare_abonat(CAbonat v) {
    CNod* newNode = new CNod(v);

    if (primul == NULL) {
        primul = newNode;
        return;
    }
    CNod* temp = primul;
    while (temp->urm != NULL) {
        temp = temp->urm;
    }
    temp->urm = newNode;
}

void CCarteTelefon::cautare_abonat(string n) {
    CNod* current = primul;
    while (current != NULL)
    {
        if (current->abonat.nume == n) {
            cout << current->abonat.nr_tel << endl;
        }
            
        current = current->urm;
    }
}

void CCarteTelefon::afisare_abonati() {
	CNod* temp = primul;

	if (primul == NULL) {
		cout << "Lista abonati goala" << endl;
		return;
	}
	while (temp != NULL) {
		cout << temp->abonat.nume << endl;
		cout << temp->abonat.adresa.oras << endl;
		cout << temp->abonat.adresa.strada << endl;
		cout << temp->abonat.adresa.nr_loc << endl;
		cout << temp->abonat.nr_tel << endl;
		cout << "\n";
		temp = temp->urm;
	}
}



