#pragma once
#include <iostream>
#include "Base.h"
using namespace std;

class Transport : public Base {
	double fuel;
	double max_fuel;

public:
	Transport() {
		fuel = 0;
		max_fuel = 0;
	}

	Transport(double fu, double mf) {
		fuel = fu;
		max_fuel = mf;
	}

	double getTankVolume() {
		cout << "\nTank volume: " << max_fuel << " liters" << endl;
		return max_fuel;
	}

	double getPetrolAmount() {
		cout << "\nPetrol amount: " << fuel << " liters" << endl;
		return fuel;
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
			if (fuel < fuel) {
				cout << "\nDon't have enough petrol!" << endl;
				return false;
			}
			else if (fuel > fuel && machin > 0) {
				fuel -= fuel;
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
