#pragma once
#include <iostream>
#include "Base.h"
#include "Transport.h"
using namespace std;

class Fura : public Transport {
	double load;
	double max_load;
	double machin_fura;
	double max_fuel;

public:
	Fura() {
		load = 0;
		max_load = 0;
		machin_fura = 0;
		max_fuel = 0;
	}

	Fura(double l, double ml, double pl, double mpl) {
		load = l;
		max_load = ml;
		machin_fura = pl;
		max_fuel = mpl;
	}

	int getCurrentLoad() {
		cout << "Current machine load: " << load << endl;
		return load;
	}

	int getMaxLoad() {
		cout << "Max current machine load: " << max_load << endl;
		return max_load;
	}

	void Arrive() {
		if (machin < 5 && machin >= 0) {
			machin += 1;
			product += load;
		}
		else {
			cout << "\nAll vehicles based" << endl;
		}
	}

	bool Leave() {
		if (fuel != 0) {
			if (fuel < machin_fura) {
				cout << "\nDon't have enough petrol!" << endl;
				return false;
			}
			else if (machin > machin_fura && machin > 0) {
				fuel -= machin_fura;
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