#include <iostream>
using namespace std;

int main(){
	int i;
	int liczba;
	
	cin >> liczba;
	i = 0;
	while(++i <= liczba)
		if(liczba % i == 0) cout << i << endl;  
	
	cout << endl;
	cin >> liczba;
	for(i = 1; i <= liczba; ++i)
		if(liczba % i == 0) cout << i << endl;
		
	cout << endl;
	cin >> liczba;
	i = 1;
	do
		if(liczba % i == 0) cout << i << endl;
	while(i++ <= liczba);
	
	
/*	
	for(i = 0; i < 5; ++i)
		cout << i << endl;
	
	cout <<"---"<<endl;
	
	i = 0;
	while(i < 5)
		cout << i++ << endl;	
		
	cout <<"---"<<endl;	
		
	i = 0;
	do
		cout << i++ << endl;
	while(i < 5);
*/	

/*
	int a;
	int suma = 0;
	do{
		cout <<"Podaj liczbe:";
		cin >> a;
		suma += a;
		cout <<"Suma:"<< suma << endl;
	}while(++i < 5);
	
	cout <<"---Suma wynosi: " << suma << endl << endl;
	
	
	for(i = 0, suma = 0; i < 5; i++){
		cout <<"Podaj liczbe:";
		cin >> a;
		cout <<"Suma:"<< (suma += a) << endl;
	}
	cout <<"---Suma wynosi: " << suma << endl << endl;
	
	suma = i = 0;
	while(i++ < 5){
		cout <<"Podaj liczbe:";
		cin >> a;
		cout <<"Suma:"<< (suma += a)<< endl;
	}
	cout <<"---Suma wynosi: " << suma;
*/	
	

}
