//============================================================================
// Name        : 01SimpleSort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int passbyreference(int*,int );
int modifyarray(int *, int);

int main() {
/*Trying things out step by step here. First we will just pass array as reference.
 * And then this
 */

//Step 1: Pass by reference function
	cout << "Pass by reference" << endl;
	int a[10];
	int size=10;
	a[1]=225;
	passbyreference(a,size);
//End Step 1

//2nd step: passing the array and changing the value in the function
	cout<<"Changing values in functions"<<endl;
	int i=0;
	cout<<"Given values in the array are";
	for (i=0;i<10;i++){
		a[i]=252;
		cout<<" "<<a[i]<<"\n";
	}

	modifyarray(a,size);

//End Step 2
	return 0;
}

//Implementation of function in step 1
int passbyreference (int *inarray,int size){
	cout<<"first element "<<inarray[0]<<"\n";
	cout<<"Size "<<size<<"\n";
	return 0;
}
// End Step 1

//Implementation of function in step 2
int modifyarray(int *inarray,int size){
	int i=0;
	cout<<"New values in the array are";
	for (i=0;i<10;i++){
		inarray[i]=i*i;
		cout<<" "<<inarray[i]<<"\n";
	}

	return 0;
}
//End Step 2
