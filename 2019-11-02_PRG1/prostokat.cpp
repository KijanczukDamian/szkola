#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int a, b;
	int i, j;
	char znak;
	
	cout <<"Podaj a:"; cin >> a;
	cout <<"Podaj b:"; cin >> b;
	cout <<"Podaj znak:"; cin >> znak;
	
	for (i=0; i < a; ++i){			
		for (j=0; j < b; ++j) 
			cout << (j == 0 || j == b-1 || i == 0 || i == a-1 ? znak : ' ');																
		cout << "\n";
	}

	
	
	_getch();
	return 0;
}
