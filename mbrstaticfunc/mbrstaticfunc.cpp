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

int main() {
	mahasiswa mhs1("sri dadi");
	mahasiswa mhs2("budi jatmiko");
	mahasiswa::setNim(9);  //mengakses nim melalui static member function "setNim"
	mahasiswa mhs3("andi janu");
	mahasiswa mhs4("joko wahono"); 

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl; //mengakses nim melalui static member function ""getNim"
	system("pause");

	return 0;
}