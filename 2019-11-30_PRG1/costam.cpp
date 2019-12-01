#include <iostream>
using namespace std;

enum Dni {
	pon = 1,
	wt,
	sr,
	czw,
	piat,
	sob,
	niedz
};

int main(){
	Dni dzisiaj;
	int i; cout<<"Podaj numer dnia tygodnia: "; cin >> i;
	cout << "Zostalo:" << niedz - Dni(i);
	
}
