#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long int n, p, p1;
	long long int suma = 0;
	
	cin >> n;
	
	p = sqrt(n);
	
	while(p > 1){
		if(n % p == 0){
			suma += p;
			p1 = n/p;
			if(p1 != p)
				suma += p1;
		}
		p -= 1;
	}
	
	suma += 1;
	
	if(suma == n){
		cout << n <<" jest LD";
		return 1;
	}else{
		cout << n <<" nie jest LD";
	}
	
	
	


}

