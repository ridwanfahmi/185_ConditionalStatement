#include <iostream>
using namespace std;

int main()
{
	int nBilA;
	int nBilB;
	string status;

	srand(time(0));

	nBilA = rand() % 6;
	nBilB = rand() % 6;

	if (nBilA == nBilB) {
		status = "Sama Besar";
	}
	else if (nBilA > nBilB) {
		status = "Bilangan A lebih besar dari bilangan B";
	}
	else {
		status = "Bilangan A lebih kecil dari bilangan A";
	}

	cout << "Bilangan A adalah " << nBilA << endl;
	cout << "Bilangan B adalah " << nBilB << endl;
	cout << "Statusnya adalah " << status << endl;

	return 0;
}