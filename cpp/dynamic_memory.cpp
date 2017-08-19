#include <iostream>
#include <cstring>
using namespace std;

int main() {
	double *pvalue = NULL;
	if (!(pvalue = new double)) {
		cout << "Error: out of memory\n";
		exit(1);
	}
	*pvalue = 10;
	cout << *pvalue << "\n";
	delete pvalue;

	char *pstr = NULL;
	pstr = new char[20];
	strcpy(pstr, "hello!");
	cout << pstr << endl;
	delete[] pstr;

	int ROW = 2;
	int COL = 3;
	double **p2d = new double* [ROW];

	for (int i = 0; i < ROW; i++) {
		p2d[i] = new double[COL];
	}

	for (int i = 0; i < ROW; i++) {
		delete[] p2d[i];
	}
	delete[] p2d;

	return 0;
}