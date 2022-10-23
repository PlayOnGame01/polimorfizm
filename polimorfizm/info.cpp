#include <iostream>
#include "Base.h"
#include "Transport.h"
#include "Insurgent.h"
#include "Fura.h"
using namespace std;

int Base::machin = 0;
int Base::people = 0;
double Base::product = 0;
double Base::fuel = 0;

int main() {
	Base base;
	Transport transpo(50, 50);
	Insurgent insu(10, 10, 100, 100);
	Fura fur(2.5, 10, 250, 400);

	int answer, ans;
	bool exit = false;

	while (exit != true) {
		cout << "1. Base\n2. Transport\n3. Insurgent\n4. Fura\n5. Exit\n-> ";
		cin >> answer;

		switch (answer) {
		case 1:
			base.Print();
			break;

		case 2:
			cout << "\n1. Leave\n2. Arrive\n3. Tank Volume\n4. Petrol Amount\n-> ";
			cin >> ans;
			cin.ignore();
			cout << "\n";
			switch (ans) {
			case 1:
				transpo.Leave();
				break;

			case 2:
				transpo.Arrive();
				break;

			case 3:
				transpo.getTankVolume();
				break;

			case 4:
				transpo.getPetrolAmount();
				break;
			}
			break;

		case 3:
			cout << "\n1. Leave\n2. Arrive\n3. People Count\n4. Maximal People\n-> ";
			cin >> ans;
			cin.ignore();
			cout << "\n";
			switch (ans) {
			case 1:
				insu.Leave();
				break;

			case 2:
				insu.Arrive();
				break;

			case 3:
				insu.getPeopleCount();
				break;

			case 4:
				insu.getMaxPeople();
				break;
			}
			break;

		case 4:
			cout << "\n1. Leave\n2. Arrive\n3. Current Load\n4. Maximal Load\n-> ";
			cin >> ans;
			cin.ignore();
			cout << "\n";
			switch (ans) {
			case 1:
				fur.Leave();
				break;

			case 2:
				fur.Arrive();
				break;

			case 3:
				fur.getCurrentLoad();
				break;

			case 4:
				fur.getMaxLoad();
				break;
			}
			break;

		case 5:
			exit = true;
			break;
		}
	}
}