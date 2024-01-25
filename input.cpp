#include <iostream>
#include "asoiu.h"

using namespace std;

void ResCalc::InputData() {

	cout << "product" << endl;
	cin >> productCount;
	cout << "res" << endl;
	cin >> resCount;
	cout << endl;

	for (int i = 0; i < resCount; i++) {
		cout << "Price res " << i + 1 << " = ";
		cin >> resPrice[i];
	}

	cout << endl;

	for (int i = 0; i < productCount; i++) {
		mass[i] = new int[resCount];
	}

	for (int i = 0; i < productCount; i++) {
		cout << "product " << i + 1 << endl;
		for (int j = 0; j < resCount; j++) {
			cout << "res " << j + 1 << " = ";
			cin >> mass[i][j];
			sumPriceAll = sumPriceAll + mass[i][j] * resPrice[j];
			sumPrice = sumPrice + mass[i][j] * resPrice[j];
		}
		sumMass[i] = sumPrice;
		sumPrice = 0;
		cout << endl;
	}

	for (int i = 0; i < resCount; i++) {
		resAll[i] = 0;
	}
};