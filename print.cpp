#include <iostream>
#include "asoiu.h"

using namespace std;

void ResCalc::PrintData() {

	for (int i = 0; i < productCount; i++) {
		for (int j = 0; j < resCount; j++) {
			resAll[j] = resAll[j] + mass[i][j];
		}
	}

	cout << endl;

	cout << "All product cost = " << sumPriceAll << endl; 

	for (int i = 0; i < productCount; i++) {
		cout << "sum price product " << i + 1 << " = " << sumMass[i] << endl;
	}

	cout << endl << "Every res need" << endl;

	for (int i = 0; i < resCount; i++) {
		cout << "res " << i + 1 << " = " << resAll[i] << endl;
	}

};