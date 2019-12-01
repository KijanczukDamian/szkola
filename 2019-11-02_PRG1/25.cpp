#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
	int tab[100];
	int ROZMIAR; cout <<"Podaj rozmiar tablicy(< 100): "; cin >> ROZMIAR;
	srand((int) time(NULL));
	int suma = 0;
	int ilosc = 0;
	
	for(int i = 0; i < ROZMIAR; ++i){
		tab[i] = rand() % 10 + 1;
		cout << tab[i] << ' ';
	}
	cout << endl;
	
	for(int i = 0; i < ROZMIAR; ++i){
		if(tab[i] % 2 != 0){
			++ilosc;
			suma += tab[i];
		}
	}
	
	cout <<"Ilosc nieparzystych "<< ilosc <<".\n";
	cout <<"Suma nieparzystych "<< suma <<".\n";
		

	
	_getch();
	return 0;
}
