#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
	int tab[100];
	srand((int) time(NULL));
	
	for(int i = 0; i < 100; ++i){
		tab[i] = rand() % 100 + 1;
		
		cout <<"\t"<< tab[i] << ":\t";
		tab[i] = tab[i] * tab[i];
		
		cout << tab[i] << '\n';
	}
		
	
	_getch();
	return 0;
}
