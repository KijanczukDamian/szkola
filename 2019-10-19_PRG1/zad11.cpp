#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	cout << "Najwieksze jest: ";
	if(a > b){
		if(a > c)
			cout << a;	
	}else if(b > c){
		cout << b;
	}else{
		cout << c;
	}
	

}
