#include <iostream>
#include <cstdlib>
#include <cmath>
#include "prime_number.h"
using namespace std;

//Determine if the number is a prime number

int main(int argc, char** argv){
	Prime p;
	
	//p.IsPrime(7);
	//p.IsPrime(8);	
	int start, stop;
	cout<< "enter the start value: "<< endl;
	cin >> start;
	cout<< "enter the stop value: " << endl;
	cin >> stop;
	p.ListPrimes(start, stop);
	return 0;
}

