#include <iostream>
using namespace std;

float skalar(int n, int a[], int b[]){
	float skalar = 0;
	for(int i = 0; i < n; ){
		skalar += (a[i]*b[i++]);
	}
	return skalar;
}

int main(){
	int a[] = {1,2,3};
	int b[] = {4,5,6};
	cout << skalar(3, a, b);
}

