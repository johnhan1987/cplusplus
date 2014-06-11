#include <iostream>
#include <cstdlib>
#include <cmath>

#include "prime_number.h"
using namespace std;

Prime::Prime(){

}



void Prime::IsPrime(int number){
	bool prime = true;

	if(number <2) cout << number << " is not prime."<< endl;
	else {
		for(int i=2; i<= sqrt(number); i++){
			if(number % i == 0){
				prime = false;
			}
		}
		
		if(prime == true) cout << number << " is prime."<< endl;
		else cout<< number << " is not prime."<< endl;
	}

}


void Prime::ListPrimes(int start, int stop){
	int count = 0;
	if(start > stop) {
		cout << "Error: the start value should be smaller or equal to the stop value."<< endl;
		exit(0);
	}
	if(start <2) {
		cout <<"Error: start value is less than 2."<< endl;
		exit(0);
	}

	for(int i = start; i<=stop; i++){
		bool prime = true;
		for(int j =2; j<=sqrt(i); j++){
			if (i%j == 0) prime = false;
		}	
		if (prime == true) {
			cout <<i<< " ";
			count++;
		}
	}

	cout << endl;
	cout << "The count of prime number between " << start << " and " << stop<< " is " << count<< endl;
}
