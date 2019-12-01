#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
	char s[10];
	
	for(int i = 0; i<10; i++){
		cin >> s[i];
	}
	
	for(int i = 0; i<10; i++){
		if(64 < s[i] && s[i] < 91) 
			cout << s[i];
	}
	
	
	return 0;
}
