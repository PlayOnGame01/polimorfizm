#pragma once
#include <iostream>
#include "Base.h"
using namespace std;

class Transport : public Base {
	double petrol;
	double max_petrol;

public:
	Transport() {
		petrol = 0;
		max_petrol = 0;
	}

	Transport(double pa, double tv) {
		petrol = pa;
		max_petrol = tv;
	}

	double getTankVolume() {
		cout << "\nTank volume: " << max_petrol << " liters" << endl;
		return max_petrol;
	}

	double getPetrolAmount() {
		cout << "\nPetrol amount: " << petrol << " liters" << endl;
		return petrol;
	}

	void Arrive() { 
		if (machin < 5 && machin >= 0) {
			machin += 1;
		}
		else {
			cout << "\nAll vehicles based" << endl;
		}
	}

	bool Leave() {
		if (fuel != 0) {
			if (fuel < petrol) {
				cout << "\nDon't have enough petrol!" << endl;
				return false;
			}
			else if (fuel > petrol && machin > 0) {
				fuel -= petrol;
				machin -= 1;
				return true;
			}
		}
		else {
			cout << "\nDon't have petrol!" << endl;
			return false;
		}

		return true;
	}


};
