#pragma once
#include <iostream>
#include "Base.h"
#include "Transport.h"
using namespace std;

class Insurgent : public Transport {
	int people_insurgent;
	int max_people;
	double fuel;
	double max_machin;

public:
	Insurgent() {
		people_insurgent = 0;
		max_people = 0;
		fuel = 0;
		max_machin = 0;
	}

	Insurgent(int pe, int mpe, double fl, double mpl) {
		people_insurgent = pe;
		max_people = mpe;
		fuel = fl;
		max_machin = mpl;
	}

	int getPeopleCount() {
		cout << "People on the board: " << people_insurgent << endl;
		return people_insurgent;
	}

	int getMaxPeople() {
		cout << "Max people on the board: " << max_people << endl;
		return max_people;
	}

	void Arrive() {
		if (machin < 10 && machin >= 0 && people >= 10) {
			machin += 1;
			people += people;
		}
		else {
			cout << "\nAll vehicles based" << endl;
		}
	}

	bool Leave() {
		if (product != 0) {
			if (machin < fuel) {
				cout << "\nDon't have enough petrol!" << endl;
				return false;
			}
			else if (machin > fuel && machin > 0 && people > 0) {
				machin -= fuel;
				machin -= 1;
				people -= people_insurgent;
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