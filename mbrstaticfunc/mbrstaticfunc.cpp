#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setId();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*definsi function*/  }
	static int getNim() { return nim; /*definisi function*/ }

	mahasiswa(string pnama) : nama(pnama) { setId(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setId() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}