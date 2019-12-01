#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
	int tab[100];
	srand((int) time(NULL));
	int max = 0;
	int pozycja;
	
	for(int i = 0; i < 100; ++i){
		tab[i] = rand() % 100 + 1;
		if(tab[i] > max){
			max = tab[i];
			pozycja = i;
		}
	}
	
	cout <<"Max wartosc to: tab["<< pozycja <<"] = "<< max;
		
	
	_getch();
	return 0;
}
