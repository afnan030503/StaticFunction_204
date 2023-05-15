#include <iostream>
using namespace std;
class buku
{
	string judul;

public:
	buku setJudu1(string judul)
	{
		this->judul = judul;
		return *this; // chain function 
	}
	string getJudul()
	{
		return this->judul;
	}
} bukunya;
int main()
{// bukunya.setJudu1("Matematika"); 
 // cout << bukunya.getJudu1(); 
	cout << bukunya.setJudu1("Matematika").getJudul(); // chain function calls 
	return 0;
}