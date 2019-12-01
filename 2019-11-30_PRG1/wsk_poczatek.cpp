#include <iostream>
#include <conio.h>
using namespace std;

void fun_wsk(int *wsk){
	while(*wsk != '\0')
		cout << *wsk++ <<" ";
}

int main(){
	int a[] = {1,3,4,5,6};	
	fun_wsk(a);
}
