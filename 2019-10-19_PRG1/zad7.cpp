#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout <<"Podaj a:";
	cin >> a;
	
	cout <<"Podaj b:";
	cin >> b;

	if(0 <= a && 0 <= b){
		cout << "Wynik: " << a + b;
	}else{
		cout << "Zle liczby";
	}

}
