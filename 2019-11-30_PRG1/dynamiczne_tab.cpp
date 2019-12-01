#include <iostream>
#include <conio.h>
using namespace std;

int *min(int *wsk, int n){
	int *min = wsk;
	int i = 1;
	do{
		if(*min > *wsk){
			min = wsk;
		}
		wsk++;
		i++;
	}while(i < n);
	
	
	return min;
}

int *max(int *wsk, int n){
	int *max = wsk;
	int i = 1;
	do{
		if(*max < *wsk){
			max = wsk;
		}
		wsk++;
		i++;
	}while(i < n);
	
	
	return max;
}

float srednia(int *wsk, int n){
	int suma = 0;
	int ilosc = 0;
	
	int *p1 = min(wsk, n);
	int *p2 = max(wsk, n);
	
	cout << *p1 <<"  "<< *p2 << endl;
	
	if(p1 > p2){
		int *tmp = p1;
		p1 = p2;
		p2 = tmp;
	}
	
	while(p1 <= p2){
		suma += *p1;
		ilosc++;
		p1++;
	}
	
	return float(suma/ilosc);
}



int main(){
	int n = 7;
	int tab[] = {5,2,3,4,1,2,2};	
	cout << srednia(tab, n);
	
	
	
}
