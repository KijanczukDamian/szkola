#include <iostream>
using namespace std;

int main(){
	int n;
	int suma = 1;
	cin >> n;
	
	while(0 < n)
		suma *= n--;
		
	cout << suma;
}
