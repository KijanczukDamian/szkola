#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
	int tab[100];
	int ROZMIAR;
	srand((int) time(NULL));
	
	cout <<"Podaj rozmiar tablicy(< 100): "; cin >> ROZMIAR;	
	for(int i = 0; i < ROZMIAR; ++i){
		tab[i] = rand() % 10 + 1;
		cout << tab[i] << ' ';
	}
	cout << endl;
	
	int szukanaLiczba; cout <<"Podaj szukana liczbe(< 10): "; cin >> szukanaLiczba;
	int ilosc = 0;
	
	for(int i = 0; i < ROZMIAR; ++i){
		if(tab[i] == szukanaLiczba) ++ilosc;
	}
	
	cout <<"Ilosc '"<< szukanaLiczba <<"' : "<< ilosc << "\nKONIEC";
	
	_getch();
	return 0;
}
