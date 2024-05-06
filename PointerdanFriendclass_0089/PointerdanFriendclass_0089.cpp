#include <iostream>
using namespace std;

class mahasiswa {
	public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main() {
	mahasiswa mhs{ 1 }; // Obect mhs
	mhs.showNim(); // Member Acsess Operator

	mahasiswa& refMhs = mhs; //Pointer Reference refMhs
	refMhs.nim = 2; // Member Acsess Operator
	mhs.showNim();
	
	mahasiswa* pMhs = &mhs; // Pointer Deference pMhs
	pMhs->nim = 3; // Arrow Operator
	pMhs->showNim();
	return 0;
}

#include <iostream>
using namespace std;

class mahasiswa
{
public:
	int nim;
	void showNim()
{
	cout << "No Induk = " << nim << endl;
}

};

int main()
{
	mahasiswa* mhs = new mahasiswa{ 1 }; // pointer Object mhs
	mhs->nim = 2;
	mhs->showNim();
	delete mhs;
	return 0;
}

#include <iostream>
using namespace std;

class siswa;
class orang
{
private:
	string nama;

public:
	void setNama(string pNama);
	friend class siswa;
};

class siswa
{
private:
	int id;
public:
	void setId(int pId);
	void displayAll(orang& a);
};

