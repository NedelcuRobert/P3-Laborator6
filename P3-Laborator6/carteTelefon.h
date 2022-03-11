#include "abonat.h"

class CCarteTelefon
{
private:
	struct CNod {
		CAbonat abonat;
		CNod* urm;
		CNod();
		CNod(CAbonat v);
	}nod;
	CNod *primul;
public:
	CCarteTelefon() { primul = NULL; }
	void adaugare_abonat(CAbonat v);
	void cautare_abonat(string n);
	void afisare_abonati();
};

