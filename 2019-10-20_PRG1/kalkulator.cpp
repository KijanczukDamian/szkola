/*
Program realizuje prostym kalkulatorem pracujacym z dwoma liczbami
podawanymi z konsoli.
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
 setlocale(LC_ALL, "");
 
 float liczba1 = 0; // pierwsza liczba
 float liczba2 = 0; //druga liczba
 int operacja = 1; //domyslna operacja jest dodawanie
 
 do{ 
 cout << "Kalkulator" << endl;
 cout << "-------------------------------" << endl;
 cout << endl;
 cout << "Podaj pierwsza liczbe: " << endl; //podanie 1 liczby
 cin >> liczba1;
 cout << "Podaj druga liczbe: " << endl; //podanie 2 liczby
 cin >> liczba2;
 cout << endl;
 cout << "Wybierz operacje: " << endl; //interfejs
 cout << "1. Dodawanie" << endl;
 cout << "2. Odejmowanie" << endl;
 cout << "3. Mnozenie" << endl;
 cout << "4. Dzielenie" << endl;
 cout << "0. Koniec" << endl;
 cout << endl;
 
 cin >> operacja; // podanie numeru opearcji
 cout << "Twój wybór operacji: " << operacja << endl;
 
 switch (operacja) {
	 case 1: 
	 	cout << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2; break; //wybór operacji dodawania
	 case 2:
	 	cout << liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2; break; //wybór operacji odejmowania
	 case 3:
	 	cout << liczba1 << " * " << liczba2 << " = " << liczba1 * liczba2; break; //wybór operacji mnozenia
	 case 4:
	 	if (liczba2 != 0)
			cout << liczba1 << " / " << liczba2 << " = " << liczba1 / liczba2;
	 	else
			cout << "podaj inna druga liczbe - rózna od zera" << endl; break; //wybór operacji dzielenia
	 case 0:
	 		cout << "Koniec" << endl;
	 	break;
	 default:
	 	cout << "nie ma takiej operacji" << endl;
 }
 
 }while(operacja != 0);
 
 return 0;
} 
