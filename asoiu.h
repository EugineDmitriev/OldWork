#ifndef _asoiu_CLASS_H_
#define _asoiu_CLASS_H_

class ResCalc {
private:
	int productCount;
	int resCount;

	int sumPriceAll = 0;
	int sumPrice = 0;

	int** mass = new int* [productCount];
	int* sumMass = new int[productCount];
	int* resPrice = new int[resCount];
	int* resAll = new int[resCount];

public:
	void InputData();
	void PrintData();
};

#endif