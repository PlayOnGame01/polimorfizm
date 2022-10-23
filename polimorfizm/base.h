#pragma once
#include <iostream>
using namespace std;

class Base {
protected:
	static int people;
	static int machin;
	static double fuel;
	static double product; 

public:
	Base() {
		people = 100;
		machin = 30;
		fuel = 10000;
		product = 2.500;
	}

	Base(int pel, int vob, double ful, double prod) {
		people = pel;
		machin = vob;
		fuel = ful;
		product = prod;
	}

	void Print() {
		cout << "\nPeople on the base: " << people << endl;
		cout << "Vehicles on the base: " << machin << endl;
		cout << "Petrol on the base: " << fuel << " liters" << endl;
		cout << "Goods on the base: " << product << " tone" << endl << endl;
	}

};