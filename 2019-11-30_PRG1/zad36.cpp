#include <iostream>
using namespace std;

float prost(float dlug, float szer, float wys, float &objetosc);

int main(){
	float objetosc;
	cout << prost(2, 3, 4, objetosc) << endl;
	cout << objetosc << endl;
}

float prost(float dlug, float szer, float wys, float &objetosc){	
	objetosc = dlug*wys*szer;
	return 2*(dlug*szer) + 2*(wys*dlug) + 2*(wys*szer);
}
