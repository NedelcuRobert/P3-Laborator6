#include <iostream>
#include <string>

using namespace std;

class CAbonat {
private:
	string nume;
	struct SAdresa {
		string oras;
		string strada;
		int nr_loc;
	}adresa;
	int nr_tel;
public:
	friend class CCarteTelefon;
	void citire_adresa();
	void citire_abonat();
};

