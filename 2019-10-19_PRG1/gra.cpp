#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){
	int i;
	int losowa, liczba;
	srand((int) time(NULL));
	
	i = 0;
	losowa = rand() % 100 + 1;
	do{
		++i;
		cout <<"Podaj liczbe: ";
		cin >> liczba;
		
		if(liczba > losowa)
			cout <<"Za duzo!"<< endl;
		else if(liczba < losowa)
			cout <<"Za malo!"<< endl;		
	}while(liczba != losowa);
	
	cout <<"Wygrana"<< endl;
	cout <<"Ilosc proba "<< i; 
	
	
	


}
