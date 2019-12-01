#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){
	int i;
	int losowa, suma;
	srand((int) time(NULL));
	
	for(i=0; i<10; ++i){
		losowa = rand() % 100 + 1;
		if(losowa % 2 == 0) cout << losowa << endl;
		suma += losowa;	
	}
	
	
	


}
