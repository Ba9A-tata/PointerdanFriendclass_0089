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