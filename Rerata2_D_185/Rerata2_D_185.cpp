#include <iostream>
using namespace std;

int main()
{
	int nMtk, nFisika, nRerata;
	string status;

	cout << "Masukkan Nilai Matematika : ";
	cin >> nMtk;

	cout << "Masukkan Nilai Fisika : ";
	cin >> nFisika;

	nRerata = (nMtk + nFisika) / 2;

	if (nRerata > 60) {
		status = "Lulus";
	}
	else if (nMtk > 70) {
		status = "Lulus";
	}
	else {
		status = "Tidak Lulus";
	}

	cout << "Nilai Mtk : " << nMtk << endl;
	cout << "Nilai Fisika : " << nFisika << endl;
	cout << "Rata-rata nilai : " << nRerata << endl;
	cout << "Statusnya adalah : " << status << endl;
	return 0;
}