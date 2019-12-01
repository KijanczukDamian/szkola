#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
	char s[] = "madam";
	int i, j;
	int rozmiar = 5;
	
	for(i = 0, j = rozmiar-1; i < j ; ++i, --j){
		cout << s[i] <<" | "<< s[j];
		if(s[i] == s[j]){
			cout <<"\tJest!\n";
			continue;
		}
		cout <<"\tNiejest!\n";
		break;
	}

	
	
	
	return 0;
}
