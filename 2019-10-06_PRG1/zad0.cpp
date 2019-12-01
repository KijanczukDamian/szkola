#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int up(int *a){
    (*a) += 1;
}

int main(){
    int i;
    char c;
    float f;
    char s[] = "Elo elo jestem nemo";

    cout << sizeof s << endl;
    cout << &i << endl;

    int *p = &i;

    while(1){
        printf("%8p %16d\n", p++, (*p)++);
    }

    return 0;
}
