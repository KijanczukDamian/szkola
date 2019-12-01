#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

#define ROZMIAR 30

int main(){
	int tab[ROZMIAR];
	srand((int) time(NULL));
	int n = ROZMIAR;
	int p, i;
	
	for(i = 0; i < ROZMIAR; ++i){
		tab[i] = rand() % 100 + 1;
		cout << tab[i] << ' ';
	}
	cout <<'\n';

	do{
		for(i = 0; i < n-1; ++i){
			if(tab[i] > tab[i+1]){
				p = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = p;
			}
		}
		--n;
	}while(n > 1);
	
	for(i = 0; i < ROZMIAR; ++i){
		cout << tab[i] << ' ';
	}
	

	
	
	
	return 0;
}
