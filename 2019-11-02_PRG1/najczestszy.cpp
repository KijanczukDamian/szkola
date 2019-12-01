#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
	int tab[100];
	int ilosc[100];
	srand((int) time(NULL));
	
	for(int i = 0; i < 100; ++i){
		ilosc[i] = 0;
	}
	
	for(int i = 0; i < 100; ++i){
		tab[i] = rand() % 100;
		++ilosc[tab[i]];
	}
	
	cout <<"Wartosc"<< ":\t" <<"Ilosc\n";
	for(int i = 0; i < 100; ++i){
		cout <<"\t"<< i << ":\t" << ilosc[i] <<"\n";
	}
	
	int pozycja = 0;
	for(int i = 0; i < 100; ++i){
		if(ilosc[i] > ilosc[pozycja]){
			pozycja = i;
		}
	}
	
	cout <<"Najczestsza wartosc to: "<< pozycja <<". Wystepuje "<< ilosc[pozycja];
	

		
	
	_getch();
	return 0;
}
