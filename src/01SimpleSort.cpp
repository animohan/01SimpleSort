//============================================================================
// Name        : 01SimpleSort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sort(int*,int );

int main() {
	cout << "Sorting of 10 numbers" << endl;
	int a[10];
	a[1]=225;
	sort(a,10);

	return 0;
}

sort(int *inarray,int size){
	cout<<"first element"<<inarray[0]<<"\n";
	cout<<"Size"<<size<<"\n";
	return 0;
}
