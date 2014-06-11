#include <cstdlib>
#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, char** argv){
	Stack john;

	john.Push("john", 3);
	john.Push("Coffee", 2);
	john.Print();
	
	cout<< "Popping."<< endl;
	john.Pop();
	cout<<"Popping."<<endl;
	john.Pop();
	cout<<"Popping."<< endl;
	john.Pop();
	
	john.Push("Books", 100);
	john.Push("test", 12);
	john.Print();
}
