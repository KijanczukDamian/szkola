#include <iostream>
using namespace std;

bool pierwsza = true;

int main(){
	int n;
	
	
	do{
		cout<<"Podaj liczbe: ";
		cin >> n;
		
		if(n < 2)
			pierwsza = false;
			
		for(int i = 2; i*i <= n; ++i)
			if(n % i == 0)
				pierwsza = false;		
		
		
		if(pierwsza) 
			cout <<"Jest pierwsza.";
		else
			cout <<"Nie jest pierwsza.";
		cout <<"\n\n";	
	}while(n != 0);
	
	
	
	
	
	
	
	
	
	
	

}

